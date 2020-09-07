import serial
import re

from datetime import datetime
from time import sleep
from os import listdir

import threading
from queue import Queue

#IIIIIIIIIIIIIIIIIIIIIIIIIII
from sys import argv

arguments = [p for p in argv]
logEnviar = arguments[1] + "python/tramas"
#IIIIIIIIIIIIIIIIIIIIIIIIIII

#re-conexion state
stateT = Queue()
portQ = Queue()



#log = open("/home/pi/.PHconfig/eVisual_All/eVisual_All/python/logDataReceivedNodo", "a")
#log1 = open("/home/pi/.PHconfig/eVisual_All/eVisual_All/python/logDataReceivedNodo1", "a")
#logEstacion = open("/home/pi/.PHconfig/eVisual_All/eVisual_All/python/logDataReceivedEstacion","a")
#logEstacion1 = open("/home/pi/.PHconfig/eVisual_All/eVisual_All/python/logDataReceivedEstacion1","a")


#def readTrama():
    

def createConexion():
    port = ""
    while True:
        #try conection
        try:
            #Automatic load Serial Port
            serialElement = re.compile("ttyUSB")
            files = listdir("/dev")
            for f in files:
                match = serialElement.findall(f)

                if len(match) is not 0:
                    port = f
            if port is not "":
                portQ.put(port)
                print (port)
                stateT.put("recv")
                break
        except:
            sleep(0.1)


def receiveData():

    try:
        port = portQ.get()
        arduino = serial.Serial("/dev/" + port, baudrate=9600)
        print (arduino)
        while True:
            try:
                archivo = open(logEnviar,"r")
                listTramas=[]

                for trama in archivo.readlines():
                    listTramas.append(trama)
                    #print (trama)

                archivo.close()

                #print (listTramas)
                ph = [134,6]
                numeral = bytes("<=>",'utf-8')                          
                                
                for tra in listTramas:
                    
                    b = tra.encode('utf-8')
                    btrama = numeral+bytes(ph)+b
                    print(btrama)
                    arduino.write(btrama)
                    sleep(1)
   
                archivo = open(logEnviar,"w")
                archivo.write("");
                archivo.close();                          
                                     
                                    
            except:
                stateT.put("recn")
                #print("jada1")
                break
            sleep(0.1)
    except:
        stateT.put("recn")
     #   print("jada2")

def dealer():
    createConexion()
    while True:
        switch = stateT.get()
        if switch == "recv":
            receiveData()
        if switch == "recn":
            createConexion()

if __name__ == "__main__":
    #respective threads of work
    Dealer = threading.Thread(target=dealer)
    Dealer.start()
