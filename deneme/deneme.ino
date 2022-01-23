
#include <Servo.h>   
Servo motor;    
int servoPin = 8; 
int aci;
int deger=0;//Servo motor için değişken oluşturuyoruz.
      //Yetkili kart ID'sini tanımlıyoruz. 


void setup() {
  motor.attach(servoPin);                 //Servo motor pinini motor değişkeni ile ilişkilendiriyoruz.
          //Seri haberleşmeyi başlatıyoruz.
                   //RC522 modülünü başlatıyoruz.
}

void loop() {

for(aci=0;aci<=180;aci+=40){
motor.write(aci);
delay(100);
}
for(aci=180;aci>=0;aci-=40){
motor.write(aci);
delay(100);
}
}
