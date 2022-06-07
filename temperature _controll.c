#include "DHT.h" 
int 7; 
#define DHTPIN 2 
#define DHTTYPE DHTII 
DHT dht(DHTPlN, DHTTYPE);

void setup() { 
Serial. begin(9600); 
Serial.println(F("DHTxx test!")); 
dht.begin(); 
for (int DigitalPin = 7; DigitalPin 9; DigitalPin++) 
pinMode(DigitalPin, OUTPUT);

void loop() { 
 
delay(2000); 
 
float h = dht.readHumidity(); seconds 'old' (its a very slow sensor) 
 

float t = dht.readTemperature(); 

float f = dht.readTemperature(true); 

if (isnan(h) I l isnan(t) I l isnan(f)) { 
Serial.println(F("Failed to read from DHT sensor!")); 

return; 

 
float hif = dht.computeHeatlndex(f, h); 
 
float hic = dht.computeHeatlndex(t, h, false); 

Serial.print(F("Humidity: ")); 
Serial. print(h); 
Serial.print(F("% Temperature: ")); 
Serial. print(t);

Serial.print(F("°C"));
Serial.print(f);
nt(F("°FHeat index: 't));
Serial.print(hic);
Serial.print(F("°C"));
Serial.print(hif);
Serial.println(F("°F"));

if (t>=30)
digitalWrite(L, LOW); 
else if (t<30) 
digitalWrite(L, HIGH );
