

#include <SPI.h>

#include <LoRa.h>

#include "DHT.h"

#define DHTPIN A0     // Digital pin connected to the DHT sensor

//#define DHTTYPE DHT11   // DHT 11

#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

//#define DHTTYPE DHT21   // DHT 21 (AM2301)

 

 

DHT dht(DHTPIN, DHTTYPE);

 

void setup() {

  Serial.begin(9600);

  //while (!Serial);

 

  Serial.println("LoRa Sender");

LoRa.setPins(10,9,3);

  if (!LoRa.begin(868E6)) {

    Serial.println("Starting LoRa failed!");

    while (1);

  }

 

  Serial.println(F("DHTxx test!"));

 

  dht.begin();

}

 

void loop() {

  // Wait a few seconds between measurements.

  delay(2000);

 

  // Reading temperature or humidity takes about 250 milliseconds!

  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)

  float h = dht.readHumidity();

  // Read temperature as Celsius (the default)

  float t = dht.readTemperature();

  // Read temperature as Fahrenheit (isFahrenheit = true)

  float f = dht.readTemperature(true);

 

  // Check if any reads failed and exit early (to try again).

  if (isnan(h) || isnan(t) || isnan(f)) {

    Serial.println(F("Failed to read from DHT sensor!"));

    return;

  }

 

  // Compute heat index in Fahrenheit (the default)

  float hif = dht.computeHeatIndex(f, h);

  // Compute heat index in Celsius (isFahreheit = false)

  float hic = dht.computeHeatIndex(t, h, false);

 

 

 

 

  Serial.print(F("Humidity: "));

  Serial.print(h);

  Serial.print("%");

  Serial.println();

  Serial.print(F("Temperature: "));

  Serial.print(t);

  Serial.println(F("°C "));

Serial.println();

 

LoRa.beginPacket();

LoRa.print(F("Humidity: "));

  LoRa.print(h);

  LoRa.print("%");

  LoRa.println();


  LoRa.print(F("Temperature: "));

  LoRa.print(t);

  LoRa.println(F("°C "));

LoRa.println();


 Serial.println("***************");

 

 

 

 

 

  LoRa.endPacket();

 

}
