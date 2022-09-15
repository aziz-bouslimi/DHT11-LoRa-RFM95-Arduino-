<div align="center"><img src="https://user-images.githubusercontent.com/93054393/187058128-46ddae99-e3b3-4753-90db-fa27ab4311b0.jpg" width="25%"></div>
<div align="center"><i> </i></div>


># Contact

- **contact@makerlab.tn**
- **[Linkedin](https://www.linkedin.com/in/kais-alila-3a1b35163/)**
- **[Facebook](https://www.facebook.com/tunmakerlab/)**
- **[WebSite](https://www.makerlab.tn)**
- **[GitHub](https://github.com/MakerLabTunisia)**



>## Description
Envoyer des données (température et humidité) avec une Communication p2p (pear to pear) avec le protocole LoRa 

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190370583-370e69ca-a1f6-4279-bb1d-931328d14be1.jpg" width="30%"></div>



>## Composants nécessaires
* 2 carte Arduino Uno
* 2 Carte shield (LoRa RFM95 + capteur DTH22)
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190388701-9862c59e-3066-46de-9c10-99901077d5ed.PNG" width="30%"></div>

>## Montage
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190398428-b4fbe9e7-af63-4c43-a0a1-9d0795f238db.jpg" width="30%"></div>
>## Documentation 
C'est quoi le LoRa ?

LoRa est un réseau bas débit à longue portée, il s’agit d’une technologie radio qui permet aux objets connectés d’échanger des données de faible taille en bas débit. Ce réseau a vu le jour en 2012 suite au rachat de la société américaine Semtech de la startup de Grenoble Cycléo.
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190405331-c534f791-bf8d-4061-be47-e5d9f9c9d5d3.png" width="30%"></div>



### Description du LoRa
LoRa “ Long Range “ est un protocole réseau qui permet de réaliser une communication à longue portée avec une faible consommation d’énergie à un débit compris entre 0,3 et 50 Kbps. 
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190405669-a5fb0916-d302-45e4-a6b8-1183198033d9.png" width="30%"></div>


 ### Modulation LoRa :
La modulation LoRa utilise la modulation par étalement spectral ( Spread spectrum 
modulation ) et des techniques de détection d’erreurs pour une robustesse et portée  importante de la communication radio contrairement à la modulation FSK/OOK. 
### La bande passante 
La bande passante est la différence entre la fréquence minimale et maximale . Le module  RFM95 propose une plage de bandes passantes allant de 7.8 KHz à 500 KHz pour deux fréquences 434 MHz et 868 MHz.
### Spreading Factor 
Le facteur d’étalement est le nombre de bits codés pour un symbole. Ce qui va nous aider 
pour déterminer la taille du paquet . On nous propose sept configurations pour chaque 
bande passante ( entre 6 bits par symbole et 12 bits par symbole par un pas de 1 ).
### Coding rate CR:
Le taux de codage est le point fort du réseau LoRa , cela lui permet d’améliorer sa 
robustesse. On calcule de manière cyclique l’erreur et sa correction. Cela nous permet 
d’avoir une bonne performance certes mais entraîne également une surcharge sur la 
transmission de données.
En choisissant les configurations utilisant un minimum de données , cela va nous permettre 
de réduire la taille du paquet dans le but de simplifier son décodage .

### Avantages du LoRa
* Détection RF automatique et CAO avec AFC ultra-rapide
* Vitesse de transmission configurable	
* Une technologie bidirectionnelle, à ultra-longue portée et ultraprécise
* Avec le protocole LoRa, fiabilité et économies maximales
* Une architecture réseau totalement ouverte
### Le Moducle LoRa choisi :
Nous avons choisi le module car il est le plus simple à utiliser, puissant et il est très connu et très utilisé, il porte sur une plus longue distance. Les cartes qui sont disponibles au marché assemblées et testées avec un connecteur.

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190407259-75caeb74-bb86-47aa-815a-f047ebc86953.png" width="30%"></div>


###	Mise en œuvre de la communication via RFM95 
 Le RFM95 est un module LoRa émetteur-récepteur admet 16 broches il a le privilège d’être connecté à n’importe quel microcontrôleur via la liaison série (SPI). Il est un composant monté en surface. Il possède les caractéristiques suivantes : 

* Tension de fonctionnement : 3.3V et une fréquence d’horloge : 32 MHz

* Techniques de modulation : FSK, OOK, GFSK, MSK, GMSK et LoRa. 

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190407319-34d942e0-f1a7-4467-99c4-8eecd6b5d4a2.png" width="30%"></div>

### Le capteur de températeure et humidité

Le capteur de température et d'humidité DHT22 (ou AM2302) communique avec un microcontrôleur via un port série. Le capteur est calibré et ne nécessite pas de composants supplémentaires pour pouvoir être utilisé.

<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190423863-b9da061d-b2a3-40d3-898a-6193feb491da.png" width="30%"></div>

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
<div align="center"><img src="https://user-images.githubusercontent.com/93054393/190436275-277f1379-e3e4-44cb-ac11-36329d5bdc99.png" width="30%"></div>

