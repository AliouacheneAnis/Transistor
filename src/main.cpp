/*
  Titre      : utilisation transistor
  Auteur     : Anis Aliouachene
  Date       : 24/02/2022
  Description: Intensite LED en utilisant 5V comme source d'alimentation aussi un transistor 
  Version    : 0.0.1
*/

#include <Arduino.h>

// Declaration Constantes pour les broche 
const int LED_BASE = 3;
const int POTENTIOMETRE = A3;

// Declaration des variables pour stocker la valeur lu sur potentiometre et la valeur apres la fonction map 
int Intensite, Valeur; 

void setup() {
  // Configuration des broches en mode INPUT et OUTPUT 
  pinMode(POTENTIOMETRE, INPUT);
  pinMode(LED_BASE, OUTPUT);

}

void loop() {
    
    // Valuer lu sur le potentiometre 
    Valeur = analogRead(POTENTIOMETRE);

    // Regle de trois a l'aide de la fonction map 
    Intensite = map(Valeur,3,1023,0,255);

    // Allumage Led selon L'intensite entre 0 et 255 
    analogWrite(LED_BASE, Intensite);
  
}
