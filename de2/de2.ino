#include <SoftwareSerial.h>                                   //SoftwareSerial kütüphanimizi ekliyoruz.
                                       //DHT11 sensör kütüphanemizi ekliyoruz.

String agAdi = "HUAWEI P30 lite";                 //Ağımızın adını buraya yazıyoruz.    
String agSifresi = "ozge1826";           //Ağımızın şifresini buraya yazıyoruz.

int rxPin = 10;                                               //ESP8266 RX pini
int txPin = 11;                                               //ESP8266 TX pini




SoftwareSerial esp(rxPin, txPin);                             //Seri haberleşme pin ayarlarını yapıyoruz.

void setup() {  
  
  Serial.begin(9600);  //Seri port ile haberleşmemizi başlatıyoruz.
  Serial.println("Started");
  esp.begin(115200);                                          //ESP8266 ile seri haberleşmeyi başlatıyoruz.
  esp.println("AT");                                          //AT komutu ile modül kontrolünü yapıyoruz.
  Serial.println("AT Yollandı");
  while(!esp.find("OK")){                                     //Modül hazır olana kadar bekliyoruz.
    esp.println("AT");
    Serial.println("ESP8266 Bulunamadı.");
  }
  Serial.println("OK Komutu Alındı");
  esp.println("AT+CWMODE=1");                                 //ESP8266 modülünü client olarak ayarlıyoruz.
  while(!esp.find("OK")){                                     //Ayar yapılana kadar bekliyoruz.
    esp.println("AT+CWMODE=1");
    Serial.println("Ayar Yapılıyor....");
  }
  Serial.println("Client olarak ayarlandı");
  Serial.println("Aga Baglaniliyor...");
  esp.println("AT+CWJAP=\""+agAdi+"\",\""+agSifresi+"\"");    //Ağımıza bağlanıyoruz.
  while(!esp.find("OK"));                                     //Ağa bağlanana kadar bekliyoruz.
  Serial.println("Aga Baglandi.");
  delay(1000);
}
void loop() {

  Serial.println("Baglantı Kapatildi.");
  esp.println("AT+CIPCLOSE");                                //Bağlantıyı kapatıyoruz
  delay(1000);                                               //Yeni veri gönderimi için 1 dakika bekliyoruz.
}
