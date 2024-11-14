import serial
import matplotlib.pyplot as plt
import matplotlib.animation as animation

# Обираємо наш порт
port = "COM9"
baudrate = 9600
ser = serial.Serial(port, baudrate=baudrate)

# Параметры графика
max_voltage = 10.0
sample_rate = 100
time_window = 1
data_points = sample_rate * time_window  # Кількість точок на графіку

# Ініціалізація даних графіку
voltages = [0] * data_points  # Буфер значень
times = [i / sample_rate for i in range(-data_points, 0)]  # Часові мітки

# Настройка графика
fig, ax = plt.subplots()
line, = ax.plot(times, voltages)
ax.set_ylim(0, max_voltage)
ax.set_xlim(-time_window, 0)
ax.set_xlabel("Time (s)")
ax.set_ylabel("Voltage (V)")
ax.set_title("Real time graphic")


# Функція оновлення графіку
def update(frame):
    if ser.in_waiting > 0:
        try:
            ser.reset_input_buffer()
            voltage = float(ser.readline().decode().strip())

            voltage = max(0, min(voltage, max_voltage))

            voltages.pop(0)
            voltages.append(voltage)

            line.set_ydata(voltages)
        except ValueError:
            pass

    return line,


# Налаштування анімації з використанням blit для оптимізації
ani = animation.FuncAnimation(fig, update, interval=10, blit=True)

# Запуск графіку
plt.show()

ser.close()