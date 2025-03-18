#pybluez import
import bluetooth
#Template MAC address, use your own
address = 'FF:00:FF:AA:FF:FF'
#port can be changed according to needs
port = 1
#data size
size = 1024
#Bluetooth socket
s = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
socket.connect((address, port))
#string to print
buff = ""
#infinite loop
while True:
    data = socket.recv(1024)
    buff = data.decode('ascii')
    print(buff)
socket.close()
