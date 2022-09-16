<div align="center"><img src="https://user-images.githubusercontent.com/93054393/187058128-46ddae99-e3b3-4753-90db-fa27ab4311b0.jpg" width="35%"></div>
<div align="center"><i> </i></div>


># Contact

- **contact@makerlab.tn**
- **[Linkedin](https://www.linkedin.com/in/kais-alila-3a1b35163/)**
- **[Facebook](https://www.facebook.com/tunmakerlab/)**
- **[WebSite](https://www.makerlab.tn)**
- **[GitHub](https://github.com/MakerLabTunisia)**



>## Description
Envoyer des données (température et humidité) avec une Communication p2p (pear to pear) avec le protocole LoRa 

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190370583-370e69ca-a1f6-4279-bb1d-931328d14be1.jpg" width="50%"></div>
<div align="center"><i>Envoie et recevoir des données (temp et hum) avec LoRa </i></div>


>## Composants nécessaires
* 2 carte Arduino Uno
* 2 Carte shield (LoRa RFM95 + capteur DTH22)
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190388701-9862c59e-3066-46de-9c10-99901077d5ed.PNG" width="%"></div>
<div align="center"><i>Composants nécessaires </i></div>
>## Montage
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190398428-b4fbe9e7-af63-4c43-a0a1-9d0795f238db.jpg" width="50%"></div>
<div align="center"><i>Assemblage du scheild avec Arduino </i></div>
>## Documentation 

### C'est quoi le LoRa ?

 LoRa est un réseau bas débit à longue portée, il s’agit d’une technologie radio qui permet aux objets connectés d’échanger des données de faible taille en bas débit. Ce réseau a vu le jour en 2012 suite au rachat de la société américaine Semtech de la startup de Grenoble Cycléo.
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190405331-c534f791-bf8d-4061-be47-e5d9f9c9d5d3.png" width="35%"></div>
<div align="center"><i>LoRa </i></div>


>### Description du LoRa
LoRa “ Long Range “ est un protocole réseau qui permet de réaliser une communication à longue portée avec une faible consommation d’énergie à un débit compris entre 0,3 et 50 Kbps. 
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190405669-a5fb0916-d302-45e4-a6b8-1183198033d9.png" width="50%"></div>


 >### Modulation LoRa :
La modulation LoRa utilise la modulation par étalement spectral ( Spread spectrum 
modulation ) et des techniques de détection d’erreurs pour une robustesse et portée  importante de la communication radio contrairement à la modulation FSK/OOK. 
>### La bande passante 
La bande passante est la différence entre la fréquence minimale et maximale . Le module  RFM95 propose une plage de bandes passantes allant de 7.8 KHz à 500 KHz pour deux fréquences 434 MHz et 868 MHz.
>### Spreading Factor 
Le facteur d’étalement est le nombre de bits codés pour un symbole. Ce qui va nous aider 
pour déterminer la taille du paquet . On nous propose sept configurations pour chaque 
bande passante ( entre 6 bits par symbole et 12 bits par symbole par un pas de 1 ).
>### Coding rate CR:
Le taux de codage est le point fort du réseau LoRa , cela lui permet d’améliorer sa 
robustesse. On calcule de manière cyclique l’erreur et sa correction. Cela nous permet 
d’avoir une bonne performance certes mais entraîne également une surcharge sur la transmission de données.
En choisissant les configurations utilisant un minimum de données , cela va nous permettre 
de réduire la taille du paquet dans le but de simplifier son décodage .

>### Avantages du LoRa
* Détection RF automatique et CAO avec AFC ultra-rapide
* Vitesse de transmission configurable	
* Une technologie bidirectionnelle, à ultra-longue portée et ultraprécise
* Avec le protocole LoRa, fiabilité et économies maximales
* Une architecture réseau totalement ouverte
>### Le Moducle LoRa choisi :
Nous avons choisi le module car il est le plus simple à utiliser, puissant et il est très connu et très utilisé, il porte sur une plus longue distance. Les cartes qui sont disponibles au marché assemblées et testées avec un connecteur.

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190407259-75caeb74-bb86-47aa-815a-f047ebc86953.png" width="50%"></div>
<div align="center"><i>Le module LoTa RFM95 </i></div>

>###	Mise en œuvre de la communication via RFM95 :
 Le RFM95 est un module LoRa émetteur-récepteur admet 16 broches il a le privilège d’être connecté à n’importe quel microcontrôleur via la liaison série (SPI). Il est un composant monté en surface. Il possède les caractéristiques suivantes : 

* Tension de fonctionnement : 3.3V et une fréquence d’horloge : 32 MHz

* Techniques de modulation : FSK, OOK, GFSK, MSK, GMSK et LoRa. 

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190407319-34d942e0-f1a7-4467-99c4-8eecd6b5d4a2.png" width="60%"></div>
<div align="center"><i>LoRa RFM95 PIN'S </i></div>

>### Le capteur de températeure et humidité


Le capteur de température et d'humidité DHT22 (ou AM2302) communique avec un microcontrôleur via un port série. Le capteur est calibré et ne nécessite pas de composants supplémentaires pour pouvoir être utilisé.

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190423863-b9da061d-b2a3-40d3-898a-6193feb491da.png" width="50%"></div>
<div align="center"><i>Le capteur de température et humidité DHT22 </i></div>
>## Caractérisitque 

|Alimentation	|Consommation maxi|Plage de mesure|Précision|
|-----|----|----|----|
|3,3 à 6 Vcc	|1,5 mA|température: -40 à +80 °C humidité: 0 à 100 % RH|	(température: ± 0,5 °C humidité: ± 2 % RH)| 

>## Cablage du Circuit (RFM95 Avec Arduino)

|Arduino Uno Pins|12|11|10|13|9|2|3.3V|GND|
|-----|----|----|----|----|----|----|----|----|
|LoRa RFM95|Miso|Mosi|Chip select|CLK|RESET|DIO0|3.3V|GND| 

>## Cablage du Circuit (DHT22 Avec Arduino)

|Arduino Uno Pins|A0|5V|GND|
|-----|----|----|----|
|DHT22|DATA|VCC|GND|

>## PCB
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190436275-277f1379-e3e4-44cb-ac11-36329d5bdc99.png" width="50%"></div>
<div align="center"><i>Conception de la carte scheild avec KiCad </i></div>
># Partie Software : 

>## Logiciel utlisé :
- Arduino Ide
- KiCad pour la conception du scheild

>## Bébliotheque utilisé :
il faut installer ces 2 bébliotheque 
- **[Installer LoRa.h : Cliquer ici](https://github.com/sandeepmistry/arduino-LoRa/archive/refs/heads/master.zip)**
- **[Installer DHT.h : Cliquer ici](https://github.com/adafruit/DHT-sensor-library/archive/refs/heads/master.zip)**

>## installer les 2 bébiothéque dans l'IDE 


>### 1er étape : 
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190475276-202afbed-32d5-47ca-b253-c10246b2674f.png" width="70%"></div>
<div align="center"><i>1er étape </i></div>
>### 2éme étape :
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190475697-75b1eeac-70e0-4105-a5cf-196d42214e3e.png" width="70%"></div>
<div align="center"><i>2éme étape </i></div>
>### 3éme étape :
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190476033-cd74cec8-600a-4d20-acb2-dcefdb0c4b09.png" width="70%"></div>
<div align="center"><i>3éme étape </i></div>
>## Copier les 2 code du l'emmetteur et récepteur et les coller dans l'Arduino IDE :


- **[Code de la noeud émmeteur](https://github.com/aziz-bouslimi/DHT11-LoRa-RFM95-Arduino-/blob/main/LoRa_sender.ino)**

- **[Code de la noeud récepteur](https://github.com/aziz-bouslimi/DHT11-LoRa-RFM95-Arduino-/blob/main/lora_received.ino)**

>## Partie Code
--------------------------------------------------

* Partie émmetteur
---------------------------------
```Arduino
 #include <SPI.h>

 #include <LoRa.h>

 #include "DHT.h"

 #define DHTPIN A0   // Digital pin connected to the DHT sensor

 #define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321

 DHT dht(DHTPIN, DHTTYPE); 

 void setup() {

  Serial.begin(9600);

  Serial.println("LoRa Sender");

 LoRa.setPins(10,9,3);

  if (!LoRa.begin(868E6)) {

 Serial.println("Starting LoRa failed!");

 while (1);  }

 Serial.println(F("DHTxx test!")); 

  dht.begin(); }

 void loop() {

  delay(2000);

  float h = dht.readHumidity();

  float t = dht.readTemperature();

  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {

 Serial.println(F("Failed to read from DHT sensor!"));

 return; }

  float hif = dht.computeHeatIndex(f, h);

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
```
  -------------------------------------------------
* Partie récepteur
---------------------------------
```Arduino
 #include <SPI.h>

 #include <LoRa.h>
 
 void setup() {
 
  Serial.begin(9600);
 
  while (!Serial);
 
  LoRa.setPins(10,9,2);
 
  Serial.println("LoRa Receiver");
 
  if (!LoRa.begin(868E6)) {
 
    Serial.println("Starting LoRa failed!");
 
    while (1);
 
  }}
 
  void loop() {
 
  int packetSize = LoRa.parsePacket();
 
  if (packetSize) {
 
    while (LoRa.available()) {
 
      String inString="";
 
      inString =LoRa.readString();
 
      Serial.print(inString);
 
    }}}

       
```
-------------------------------------------------

 >## LoRa API

## Include laibririe

```arduino
#include <LoRa.h>
```

### Setup

### Begin

intialise laibrairie avec une spécification du fréquence
```arduino
LoRa.begin(frequency);
```
 * `fréquence` - frequency in Hz (`433E6`, `868E6`, `915E6`)

Retour `1` pour le succée, `0` pour l'échec.

### Set pins

déclarer par défaut `NSS`, `NRESET`, et `DIO0` pins utilisé dans la bébiotheque.

```arduino
LoRa.setPins(ss, reset, dio0);
```
 * `ss` - pour le chip Select sur pins  `10`
 
 * `reset` - pour Reset sur pins `9`
 
 * `dio0` - pour le DIO0, sur pins `2`. 
  
  **Must**  interrupttion capable via [attachInterrupt(...)](https://www.arduino.cc/en/Reference/AttachInterrupt).


#### Pin dio0 interrupt callbacks

La broche dio0 peut être utilisée pour le rappel de fin de transmission et/ou le rappel de réception, cochez  `onTxDone` et `onReceive`.

### Set SPI interface

Remplacer l'interface SPI par défaut utilisée par la bibliothèque. **Doit** être appelé avant`LoRa.begin()`.

```arduino
LoRa.setSPI(spi);
```
 * `spi` - SPI interface utilisé, defaults to `SPI`

Cet appel est facultatif et ne doit être utilisé que si vous avez besoin de changer l'interface SPI par défaut utilisée, dans le cas où votre carte Arduino (ou compatible) a plus d'une interface SPI présente.


### Set SPI Frequency

Remplacez la fréquence SPI par défaut de 10 MHz utilisée par la bibliothèque. **Doit** être appelé avant `LoRa.begin()`.

```arduino
LoRa.setSPIFrequency(frequency);
```
 * `frequency` - `8E6`

Cet appel est facultatif et ne doit être utilisé que si vous devez modifier la fréquence SPI par défaut utilisée. Certains convertisseurs de niveau logique ne peuvent pas prendre en charge des vitesses élevées telles que 8 MHz, de sorte qu'une fréquence SPI inférieure peut être sélectionnée avec`LoRa.setSPIFrequency(frequency)`.

### Stop la laibrairie

```arduino
LoRa.end()
```

## Envoie data

### Begin packet

Démarrez la séquence d'envoi d'un paquet.
```arduino
LoRa.beginPacket();

LoRa.beginPacket(implicitHeader);
```

 * `implicitHeader` - (facultatif) `true` active le mode d'en-tête implicite, `false` active le mode d'en-tête explicite (par défaut)

Renvoie '1' si la radio est prête à émettre, '0' si elle est occupée ou en cas d'échec.

### Envoie des bytes

Ecrire des données dans le paquet. Chaque paquet peut contenir jusqu'à 255 octets.

```arduino
LoRa.write(byte);

LoRa.write(buffer, length);
```
* `byte` - un seul octet pour écrire dans le paquet

ou

* `buffer` - données à écrire dans le paquet
* `length` - taille des données à écrire

Renvoie le nombre d'octets écrits.



### Finir le packet

Terminer la séquence d'envoi d'un paquet.

```arduino
LoRa.endPacket();

LoRa.endPacket(async);
```
 * `async` - (facultatif) `true` active le mode non bloquant, `false` attend que la transmission soit terminée (par défaut)

Renvoie '1' en cas de succès, '0' en cas d'échec.

### Tx Done

**ATTENTION** : 

le rappel TxDone utilise la broche d'interruption de la fonction `dio0` check `setPins` !

### Register callback

Enregistrez une fonction de rappel lorsqu'une transmission de paquets se termine.

```arduino
LoRa.onTxDone(onTxDone);

void onTxDone() {
 // ...
}
```

 * `onTxDone` - fonction à appeler lorsqu'une transmission de paquet se termine.

## Receive data

### Analyse de trame

Vérifiez si un paquet a été reçu.

```arduino
int packetSize = LoRa.parsePacket();

int packetSize = LoRa.parsePacket(size);
```

 * `size` - (facultatif) si `> 0` le mode d'en-tête implicite est activé avec le paquet attendu de `size` octets, le mode par défaut est le mode d'en-tête explicite


Renvoie la taille du paquet en octets ou "0" si aucun paquet n'a été reçu.

### Mode de réception continu

**ATTENTION** : 

Le rappel de réception utilise la broche d'interruption sur `dio0`, vérifiez la fonction `setPins` !

#### Enregistrez le rappel

Enregistrez une fonction de rappel lorsqu'un paquet est reçu.

```arduino
LoRa.onReceive(onReceive);

void onReceive(int packetSize) {
 // ...
}
```

* `onReceive` - fonction à appeler lorsqu'un paquet est reçu.
  
#### Mode de réception

Met la radio en mode de réception continue.

```arduino
LoRa.receive();

LoRa.receive(int size);
```

  * `size` - (facultatif) si `> 0` le mode d'en-tête implicite est activé avec le paquet attendu de `size` octets, le mode par défaut est le mode d'en-tête explicite

Le rappel `onReceive` sera appelé lorsqu'un paquet est reçu.

### Packet RSSI

```arduino
int rssi = LoRa.packetRssi();
```

Renvoie le RSSI moyen du dernier paquet reçu (dBm).
### Packet SNR

```arduino
float snr = LoRa.packetSnr();
```

Renvoie le SNR estimé du paquet reçu en dB.

## RSSI

```arduino
int rssi = LoRa.rssi();
```

Renvoie le RSSI actuel de la radio (dBm). RSSI peut être lu à tout moment (pendant la réception des paquets ou non)

### Erreur de fréquence de paquet

```arduino
long freqErr = LoRa.packetFrequencyError();
```

Renvoie l'erreur de fréquence du paquet reçu en Hz. L'erreur de fréquence est le décalage de fréquence entre la fréquence centrale du récepteur et celle d'un signal LoRa entrant.

### Available

```arduino
int availableBytes = LoRa.available()
```

Renvoie le nombre d'octets disponibles pour la lecture.

### Peeking

Regardez l'octet suivant dans le paquet.

```arduino
byte b = LoRa.peek();
```

Renvoie l'octet suivant dans le paquet ou `-1` si aucun octet n'est disponible.

### Reading

Lire l'octet suivant du paquet.

```arduino
byte b = LoRa.read();
```

Renvoie l'octet suivant dans le paquet ou `-1` si aucun octet n'est disponible.

**Note:** 

Autre Arduino [`Stream` API's](https://www.arduino.cc/en/Reference/Stream)peut également être utilisé pour lire les données du paquet.

## Autres modes radio


### Idle mode

Mettez la radio en mode inactif (veille).

```arduino
LoRa.idle();
```

### Sleep mode (veille).


Mettez la radio en mode (veille).

```arduino
LoRa.sleep();
```

## Radio parametere

### TX Power

Modifiez la puissance TX de la radio.

```arduino
LoRa.setTxPower(txPower);

LoRa.setTxPower(txPower, outputPin);
```
 * `txPower` - Puissance TX en dB, par défaut à `17`
 * `outputPin` - (facultatif) broche de sortie PA, les valeurs prises en charge sont `PA_OUTPUT_RFO_PIN` et `PA_OUTPUT_PA_BOOST_PIN`, par défaut à `PA_OUTPUT_PA_BOOST_PIN`.
  
Les valeurs prises en charge sont de `2` à `20` pour `PA_OUTPUT_PA_BOOST_PIN` et de `0` à `14` pour `PA_OUTPUT_RFO_PIN`.

La plupart des modules ont la broche de sortie PA connectée à PA BOOST.

### Frequency (La fréquence)

Changez la fréquence de la radio.

```arduino
LoRa.setFrequency(frequency);
```
 * `frequency` - Changez la fréquence de la radio avec Hz (`433E6`, `868E6`, `915E6`)

### Spreading Factor

Modifiez le facteur d'étalement de la radio.

```arduino
LoRa.setSpreadingFactor(spreadingFactor);
```
* `spreadingFactor` - facteur d'étalement, par défaut à `7`

Les valeurs prises en charge sont comprises entre '6' et '12'. Si un facteur d'étalement de "6" est défini, le mode d'en-tête implicite doit être utilisé pour transmettre et recevoir des paquets.

### Signal Bandwidth

Modifiez la bande passante du signal de la radio.

```arduino
LoRa.setSignalBandwidth(signalBandwidth);
```

 * `signalBandwidth` - signal bandwidth in Hz, defaults to `125E3`.

Supported values are `7.8E3`, `10.4E3`, `15.6E3`, `20.8E3`, `31.25E3`, `41.7E3`, `62.5E3`, `125E3`, `250E3`, and `500E3`.

### Coding Rate

Change the coding rate of the radio.

```arduino
LoRa.setCodingRate4(codingRateDenominator);
```

 * `codingRateDenominator` - dénominateur du taux de codage, par défaut à `5`

Les valeurs prises en charge sont comprises entre '5' et '8', elles correspondent à des taux de codage de '4/5' et '4/8'. Le numérateur du taux de codage est fixé à '4'.

### Preamble Length

Modifiez la longueur du préambule de la radio.

```arduino
LoRa.setPreambleLength(preambleLength);
```

* `preambleLength` - longueur du préambule en symboles, par défaut à `8`

Les valeurs prises en charge sont comprises entre '6' et '65535'.


### CRC

Activer ou désactiver l'utilisation du CRC, par défaut un CRC n'est pas utilisé.

```arduino
LoRa.enableCrc();

LoRa.disableCrc();
```


### LNA Gain

Réglez le gain LNA pour une meilleure sensibilité RX, par défaut AGC (Automatic Gain Control) est utilisé et le gain LNA n'est pas utilisé.

```arduino
LoRa.setGain(gain);
```

 * `gain` - LNA gain

Les valeurs prises en charge sont comprises entre '0' et '6'. Si le gain est de 0, l'AGC sera activé et le gain LNA ne sera pas utilisé. Sinon, si le gain est compris entre 1 et 6, l'AGC sera désactivé et le gain LNA sera utilisé.

>## Téleverser le code dans les cartes (Sender & Received)
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190637043-382afb7d-6173-4f9b-91fe-8dac0bd428c9.png" width="70%"></div>
 <div align="center"><i>Téleverser le code dans les cartes </i></div>
>## Validation fonctionnement du noeud emmetteur (Sender) 
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190636589-8a76408d-4cb2-43f4-a492-1a1d0a798f55.jpg" width="50%"></div>
 <div align="center"><i>Validation fonctionnement du noeud emmetteur (Sender) </i></div>
 >## Validation fonctionnement du noeud récepteur (Received ) 

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190636489-a2f60fad-5c9f-4726-8932-4433d60482f4.jpg" width="50%"></div>
<div align="center"><i>Validation fonctionnement du noeud récepteur (Received ) </i></div>

Profitez-en

<a href="https://github.com/DenverCoder1/readme-typing-svg"><img src="https://readme-typing-svg.herokuapp.com/?lines=Profitez%20-en;&font=Fira%20Code&center=true&width=440&height=45&color=221dab&vCenter=true&size=22&pause=10"></a>
