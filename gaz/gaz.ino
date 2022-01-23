#include<Servo.h>
int esik_deger=400;
int deger;
int aci=0;
Servo motor;
void setup() {
  // put your setup code here, to run once:
   motor.attach(2);
   Serial.begin(9600);
   motor.write(90);

}

void loop() {
  deger=analogRead(A1);
  Serial.println(deger);
  if(deger>esik_deger){
   motor.write(0);
    }

    else{motor.write(90);}

}
