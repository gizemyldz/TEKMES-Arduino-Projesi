 

 
 void setup() {
pinMode(3,OUTPUT);
Serial.begin(9600);
analogWrite(3,255  );
}

void loop() {
int isik = analogRead(A0);
Serial.println(isik);



if(isik>60){

  analogWrite(3,255);
  
    }
    if(isik<60){
      analogWrite(3,0);
      }

}
