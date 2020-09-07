# -*- coding: utf-8 -*-

from sys import argv
from twilio.rest import Client

argumentos = [p for p in argv]
mensaje = argumentos[1];
numero = argumentos[2];
#print(mensaje)
#print(numero)

# Your Account SID from twilio.com/console
account_sid = "AC4e13f19b777efad2a480f7b860c86dee"
# Your Auth Token from twilio.com/console
auth_token  = "e06696d9c3a425bd7e1c4e900ce91335"

a=True

if a==True:
          client = Client(account_sid, auth_token)
          message = client.messages.create(
                  to="+57"+numero, 
                  from_="+1 725-444-8820",
                  body=mensaje)
          print(message.sid)
else:
     print("SMdf9c1a1f03474f8690ffff460f2b988c")
    


