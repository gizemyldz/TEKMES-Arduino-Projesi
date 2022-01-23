# TEKMES-Arduino-Projesi
Arduino ile Akıllı Kümes Projesi-TEKMES
->KONSEPT VE SENARYO
Bu projede ticari ve hobi amaçlı yetiştirilen kanatlı barınma yerlerinde karşılaşılan sorunlara hayvan ve kullanıcı dostu çözümler bulmak amaçlanmıştır. Bu doğrultuda yapılan araştırmalar sonucunda bulunan çözümler birleştirilerek ‘TEKMES’ akıllı kümes projesi oluşturulmuştur. 
‘TEKMES’ projemizde kümesin güvenliğini arttırmak için anakapıdan kart okutularak giriş ve çıkış sağlanmaktadır. Kart okutma işlemi RFID sensörü yardımıyla gerçekleştirilirken gün içinde yapılmış giriş/çıkış sayısı sistem uygulamamızda görüntülenebilmektedir. Okutulan kart sistemde tanımlı ise kapı otomatik olarak servo motor yardımıyla açılacaktır. Kart tekrar okutulduğunda kapı otomatik olarak kapatılır.
LDR sensörü yardımıyla ortamdaki ışık seviyesi kontrol edilir. Işık seviyesi belli bir değerin altına indiğinde şerit ledler yardımıyla ortam aydınlatılır, üstüne çıktığında şerit ledler sönecektir. Kullanıcı, ışıkları mobil uygulamadan da kontrol edebilir.
Sıcaklık sensörü yardımıyla ortamdaki ısı miktarı kontrol edilir. Sıcaklık belli bir seviyenin üstünde ise DC motorlar yardımıyla fanlar çalıştırılır.  Mobil uygulamadan fanların çalıştırılması kontrol edilebilir. 
Ağırlık sensörü yardımıyla yemlikteki yem miktarı ölçülür. Yem miktarı belli bir seviyenin altındaysa yemlikler otomatik olarak doldurulur.Kullanıcı, mobil uygulamadan kalan yem miktarını takip edebilir.
Su seviyesi sensörü yardımıyla suluktaki su miktarı ölçülür. Su miktarı belli bir seviyenin altındaysa suluklar otomatik olarak doldurulabilir. Kullanıcı, mobil uygulamadan kalan su miktarını takip edebilir.
MQ135 sensörü sayesinde ortamdaki duman ve oksijen miktarı ölçülür. Ortamda duman olması durumunda söndürme sistemi sayesinde olası bir yangın engellenmeye çalışılır ve sistem devreye girdiği anda otomatik olarak kullanıcıya bildirim gönderilir. Ortamdaki oksijen seviyesi belli bir değerin altına indiğinde camlar açılır.
Kamera sensörü yardımıyla (OV760) kümesin içerisi anlık olarak mobil uygulamadan izlenebilir. 
Mobil uygulamamız ESP8266 Wi-Fi modülü aracılığıyla internete erişebilir.
