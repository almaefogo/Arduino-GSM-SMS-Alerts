
// Include the GSM library
#include <GSM.h>

GSM gsmAccess;
GSM_SMS sms;
void setup(){
gsmAccess.begin("****"); //Inserir pin do cartão, caso nao tenha deixar em branco
delay(5000);

}

void loop() {
if(digitalRead(5)== HIGH){ 
  sms.beginSMS("*********");  //Inserir nº do telemovel para enviar mensagem de alerta de temperatura
  sms.print("Alarme Temperatura");
  sms.endSMS();
 delay(10000);
 

if(digitalRead(6)== HIGH){ 
  sms.beginSMS("967968440");  //Inserir nº do telemovel para enviar mensagem de alerta de gas 
  sms.print("Alarme Gas");
  sms.endSMS();
 delay(10000);
 }

}
}
