# -*- coding: utf-8 -*-

##      PHSMS: MODULE OF AUTOMATIC PHONE MESSAGE SENDING
##      DESIGNED BY: CARLOS CAMPO FROM PHSOFTWARE
##      DATE: 15/04/2017
##      CONTACT: carloscampo@unicauca.edu.co

import re
import unicodedata
from sys import argv
from twilio.rest import Client

def elimina_tildes(s):
   return ''.join((c for c in unicodedata.normalize('NFD', s) if unicodedata.category(c) != 'Mn'))

class phSms():
    """Automatic sending phone messages, arguments:
       path: direction of text file with the numbers and 
             features of clients
       debug: debugging state, (True) send messages, 
              (False) just print"""

    def __init__(self, path, debug):
        super(phSms, self).__init__()
        self.debug = debug
        self.yellow = []
        self.orange = []
        self.red = []
        self.avalanch = []
        self.nivelbajo = []
        self.vibraciones = []
        self.bateria = []
        self.smsprueba = []
        self.smsdesconexion = []
        self.allNumbers = []
        self.twilioValues = {}
        self.client = []
        #self.setup(path)
      
    def setup(self, pathNumbers):
        """Setup all variables: client Phone Numbers, features of clients,
        kind of alerts and also values of twilio account """
    
        #load clients numbers
        clientsNumber = open(pathNumbers, "r")
        lines = clientsNumber.readlines()
        clientsNumber.close()
        
        #split numbers based in alert colors
        for n in lines:
            tempSplit = n.split(" ")
            self.allNumbers.append(tempSplit[0])
            if int(tempSplit[1]) == 1:
                self.yellow.append(tempSplit[0])
            if int(tempSplit[2]) == 1:
                self.orange.append(tempSplit[0])
            if int(tempSplit[3]) == 1:
                self.red.append(tempSplit[0]) 
            if int(tempSplit[4]) == 1:
                self.avalanch.append(tempSplit[0])
            if int(tempSplit[5]) == 1:
               self.nivelbajo.append(tempSplit[0])
            if int(tempSplit[6]) == 1:
                self.vibraciones.append(tempSplit[0])
            if int(tempSplit[7]) == 1:
                self.bateria.append(tempSplit[0])          
            if int(tempSplit[8]) == 1:
                self.smsdesconexion.append(tempSplit[0])
            if int(tempSplit[9]) == 1:
                self.smsprueba.append(tempSplit[0])
    
        #load values of twilio account
        self.twilioValues = {
                    'ACCOUNT_SID': 'AC4e13f19b777efad2a480f7b860c86dee',
                    #'ACCOUNT_SID': 'AC53a88419d518919bb50adb8977c338c6',                    
                    'AUTH_TOKEN': 'e06696d9c3a425bd7e1c4e900ce91335',
                    #'AUTH_TOKEN': 'e11e6781c668f5a795bd12d9fda1243b',
                    'from_': "+1 725-444-8820"
                    #'from_': "+1 587-803-3100"
                            }
    
        #build client
        self.client = Client(self.twilioValues['ACCOUNT_SID'], 
                                         self.twilioValues['AUTH_TOKEN'])


    def createMessage(self):
        "create message with execution arguments, argv"
        arguments = [p for p in argv]
        alert = arguments[1]
        self.setup(arguments[2])

        alert = elimina_tildes(alert)
        reYellow = re.compile("Alerta Amarilla en")
        reOrange = re.compile("Alerta Naranja en")
        reRed = re.compile("Alerta Roja en")
        reAvalancha = re.compile("Alerta por Avalancha en")
        renivelbajo = re.compile("Alerta por Nivel Muy Bajo en");
        revibraciones = re.compile("Alerta por vibraciones fuertes en");
        rebateria = re.compile("Alerta por bateria baja en");
        reprueba = re.compile("SMS info");
        renormal = re.compile("Nivel Normal en");
        redesconexion = re.compile("Alerta por desconexion en");
        
        #send to every group
        if (len(reYellow.findall(alert)) != 0):
            self.send(self.yellow, alert)

        if (len(reOrange.findall(alert)) != 0):
            self.send(self.orange, alert)

        if (len(reRed.findall(alert)) != 0):
            self.send(self.red, alert)

        if (len(reAvalancha.findall(alert)) != 0):
            self.send(self.avalanch, alert)
            
        if (len(renivelbajo.findall(alert)) != 0):
            self.send(self.nivelbajo, alert)
            
        if (len(revibraciones.findall(alert)) != 0):
            self.send(self.vibraciones, alert)
            
        if (len(rebateria.findall(alert)) != 0):
            self.send(self.bateria, alert)

        if (len(reprueba.findall(alert)) != 0):
            self.send(self.smsprueba, alert)
            
        if (len(renormal.findall(alert))  !=0):
            self.send(self.allNumbers, alert)

        if (len(redesconexion.findall(alert)) !=0):
            self.send(self.smsdesconexion, alert)        

        #else:
#             self.send(self.allNumbers, alert)
       

        #else:
##            self.send(self.allNumbers, alert)

    def send(self, numbers, alert):
        """Send Sms to clients"""

        A =[]


        for n in numbers:
            #try:
            if not self.debug:
                message = (self.client.messages.create(body=alert, to= "+57" + n,
                                               from_=self.twilioValues["from_"]))
                message.sid
                A.append(message.sid)
            else:
                #print (" -> " + "+57" + n + ".")
                #print(alert)
                #print(numbers)
                A.append("SMdf9c1a1f03474f8690ffff460f2b988c")
            #except:
            #    if self.debug:
            #        print ("number " + str(n) + " is invalid")
            #    else:
            #        pass
        print(A)
        print(alert)
        print(numbers)
    
if __name__ == "__main__":
    #Cambiar a prueba = False, para habilitar el envio de mensajes
    #cambiar el path si el archivo esta en otra carpeta
    prueba = False
    path = "numbers2"#"/home/eduardo/Documentos/documentos/temporal/eVisual_All/eVisual_All/python/numbers2" #"/home/pi/.PHconfig/eVisual/Python/numbers" -- en la raspberry, version anterior
    phSms(path, prueba).createMessage()

