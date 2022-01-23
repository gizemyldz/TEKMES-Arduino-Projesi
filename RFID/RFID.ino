
  
#include <SPI.h>                          //SPI kütüphanemizi tanımlıyoruz.
#include <MFRC522.h>                      //MFRC522 kütüphanemizi tanımlıyoruz.
#include <Servo.h>                        //Servo kütüphanemizi tanımlıyoruz.

int RST_PIN = 9;                          //RC522 modülü reset pinini tanımlıyoruz.
int SS_PIN = 10;                          //RC522 modülü chip select pinini tanımlıyoruz.
int servoPin = 8;                         //Servo motor pinini tanımlıyoruz.
int say=0;
int girissayi=0;
int aci=0;

Servo motor;                              //Servo motor için değişken oluşturuyoruz.
MFRC522 rfid(SS_PIN, RST_PIN);            //RC522 modülü ayarlarını yapıyoruz.
byte ID[4] = {123, 104, 86, 211};          //Yetkili kart ID'sini tanımlıyoruz. 
byte ID2[4] = {133, 51, 45, 231}; 
byte ID3[4] = { 64, 244, 227,9};          //Yetkili kart ID'sini tanımlıyoruz. 

void setup() { 
  motor.attach(servoPin);                 //Servo motor pinini motor değişkeni ile ilişkilendiriyoruz.
  Serial.begin(9600);                     //Seri haberleşmeyi başlatıyoruz.
  SPI.begin();
  //SPI iletişimini başlatıyoruz.
  rfid.PCD_Init();                        //RC522 modülünü başlatıyoruz.
}
 
void loop() {

  if ( ! rfid.PICC_IsNewCardPresent())    //Yeni kartın okunmasını bekliyoruz.
    return;

  if ( ! rfid.PICC_ReadCardSerial())      //Kart okunmadığı zaman bekliyoruz.
    return;

  if ((rfid.uid.uidByte[0] == ID[0] &&     //Okunan kart ID'si ile ID değişkenini karşılaştırıyoruz.
    rfid.uid.uidByte[1] == ID[1] && 
    rfid.uid.uidByte[2] == ID[2] && 
    rfid.uid.uidByte[3] == ID[3])||(rfid.uid.uidByte[0] == ID2[0] &&     //Okunan kart ID'si ile ID değişkenini karşılaştırıyoruz.
    rfid.uid.uidByte[1] == ID2[1] && 
    rfid.uid.uidByte[2] == ID2[2] && 
    rfid.uid.uidByte[3] == ID2[3] )||(rfid.uid.uidByte[0] == ID3[0] &&     //Okunan kart ID'si ile ID değişkenini karşılaştırıyoruz.
    rfid.uid.uidByte[1] == ID3[1] && 
    rfid.uid.uidByte[2] == ID3[2] && 
    rfid.uid.uidByte[3] == ID3[3])){
      
        Serial.println("Kapi acildi");
        ekranaYazdir();
        say++;
        if(say%2==1){
             
               motor.write(0);
                girissayi++;
        }
        else if(say%2==0)
        {
          
        
             motor.write(180);
           
        }
          
        
        
       
    }
    else{  
     
      //Yetkisiz girişte içerideki komutlar çalıştırılır.
      Serial.println("Yetkisiz Kart");
      ekranaYazdir();
    }
  rfid.PICC_HaltA();
}
void ekranaYazdir(){
  Serial.print("ID Numarasi: ");
  for(int sayac = 0; sayac < 4; sayac++){
    Serial.print(rfid.uid.uidByte[sayac]);
    Serial.print(" ");
  }
  Serial.println("");
}
