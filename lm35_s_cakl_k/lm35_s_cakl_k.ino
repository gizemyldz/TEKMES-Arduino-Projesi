
int led = 8;


int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik = 0;
int in1=7;
int in2=6;
int in3=5;
int in4=4;

void setup() 
{
 
  
  pinMode(in1,OUTPUT);
    pinMode(in2,OUTPUT);
      pinMode(in3,OUTPUT);
        pinMode(in4,OUTPUT);

}
 
void loop()
{
  /*okunan_deger = analogRead(lm35Pin);
  sicaklik_gerilim = (okunan_deger / 1023.0)*5000;
  sicaklik = sicaklik_gerilim /10.0; */
  
  

 
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);


  
 

    
    
 
}
