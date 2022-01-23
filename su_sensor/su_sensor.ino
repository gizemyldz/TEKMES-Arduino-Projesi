int sonuc=A3;
int seviye;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  seviye= analogRead(sonuc);
  Serial.println(seviye);
  
}
