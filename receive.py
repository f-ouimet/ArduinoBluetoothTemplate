#pybluez import
import bluetooth
#Template MAC address, use your own
address = 'FF:00:FF:AA:FF:FF'
port = 1
size = 1024
#Bluetooth socket
s = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
socket.connect((address, port))
buffer = ""
while True:
    data = socket.recv(1024)
    buff = data.decode('ascii')
    print(buff)
socket.close()
