void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2, HIGH); //lampu merah pin kaki 2
delay(1500); //menunggu waktu 10 detik lalu kode dibawah baru bisa berjalan 
digitalWrite (2, LOW);
delay (1000); //menunggu 10 detik lalu kode dibawah baru bisa berjalan 
digitalWrite(3, HIGH); // lampu kuning pin kaki 3
delay(1000);
digitalWrite(3, LOW); 
delay(1000);
digitalWrite(4, HIGH); //lampu hijau pin kaki 4 
delay(1000);
digitalWrite(4, LOW);
delay(1000);
digitalWrite(2, HIGH);
}
