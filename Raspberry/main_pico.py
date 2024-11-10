import sys
import utime
from machine import ADC, Pin

adc = ADC(Pin(26))

VREF = 3.33      
DIV_R1 = 2000 
DIV_R2 =  1000   

voltKoef = VREF * ((DIV_R1 + DIV_R2) / DIV_R2) / 655536

while True:
    # Відправка даних через Ком-порт
    
    adc_value = adc.read_u16()
    voltage = str(voltKoef*adc_value) + '\n'
    sys.stdout.write(voltage)
    utime.sleep(0.01)  
