import serial
import keyboard

# Connect to Arduino over serial port
ser = serial.Serial('COM9', 9600)

# Map keyboard keys to note characters
key_map = {
    'a': 'C',
    's': 'D',
    'd': 'E',
    'f': 'F',
    'g': 'G',
    'h': 'A',
    'j': 'B',
    'k': 'K',
}

# Listen for keyboard input and send note characters to Arduino
while True:
    if keyboard.is_pressed('q'):
        break
    for key in key_map:
        if keyboard.is_pressed(key):
            note = key_map[key]
            ser.write(note.encode())