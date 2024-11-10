
int digits[4]; // Кількість Індикаторів
int CAS[4] = {12, 11, 10, 9}; // Піни dig індекаторів 
int count = 0; // Пін А0 для зчитування
int clk = 6;      //
int latch = 5;    // Піни підключення до 74hc595
int data = 4;     //

// байти цифр
byte numbers[10] = {  
  B00000011, 
  B10011111, 
  B00100101, 
  B00001101, 
  B10011001, 
  B01001001, 
  B01000001, 
  B00011111, 
  B00000001, 
  B00001001  
};    

// байти цифр з крапкою
byte fnumbers[10] = {   
  B00000010, 
  B10011110,
  B00100100, 
  B00001100,
  B10011000, 
  B01001000, 
  B01000000, 
  B00011110, 
  B00000000, 
  B00001000  
};


#define VREF 5.0      
#define DIV_R1 1000  //Значення макс. робочої напруги і резисторів дільника напруги
#define DIV_R2 1000   
float voltageKoff = VREF * ((DIV_R1 + DIV_R2) / DIV_R2) / 1024;
float voltage;
float filterVoltage;


void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(CAS[i], OUTPUT);
    digitalWrite(CAS[i], LOW);
  }
  pinMode(clk, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(data, OUTPUT);
  
}

void loop() {
  int analogValue = analogRead(A0); 

  voltage = voltageKoff*(float)analogValue; // Значення напруги
  filterVoltage = expRunningAverageAdaptive(voltage); // Значення напуги з фільтром
  Serial.println(filterVoltage);

  
  break_number(filterVoltage);
    display_number();
}

// Розбиття числа на розряди 2 цілих і 2 дробових
void break_number(float num) {
  
  int integer_part = (int)num;                  
  int decimal_part = (int)((num - integer_part) * 100); 

  // 2 цифри цілої частини:
  digits[0] = (integer_part / 10) % 10; 
  digits[1] = integer_part % 10;        

  // 2 цифри дробової частини:
  digits[2] = (decimal_part / 10) % 10; 
  digits[3] = decimal_part % 10;        
}

// Вивід числа на сегмент
void display_number() {
  digitalWrite(latch, LOW);
  if(count == 1) shiftOut(data, clk, LSBFIRST, fnumbers[digits[count]]);
  else shiftOut(data, clk, LSBFIRST, numbers[digits[count]]);
  
  digitalWrite(latch, HIGH);
  digitalWrite(CAS[count], HIGH);
  delay(5);
  digitalWrite(CAS[count], LOW);
  count = (count + 1) % 4;
}

// фільтр біжуче середнє з адаптивним коефіцієнтом
// Не впевнений, чи потрібно було додавати, залежить від умов використання
float expRunningAverageAdaptive(float newVal) {
  static float filVal = 0;
  float k;
  // резкость фильтра зависит от модуля разности значений
  if (abs(newVal - filVal) > 1.5) k = 0.9;
  else k = 0.03;

  filVal += (newVal - filVal) * k;
  return filVal;
}

