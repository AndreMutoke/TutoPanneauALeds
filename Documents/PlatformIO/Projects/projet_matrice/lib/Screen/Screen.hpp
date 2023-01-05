#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED
#include <Arduino.h>
#include <c++/8.4.0/iostream>

#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#ifndef PSTR
    #define PSTR // Make Arduino Due happy
#endif
class Screen : public Adafruit_NeoMatrix
{
public:
    Screen(int width, // La largeur de l'ecran, ou le nombre des leds en Largeur
           int height, // La hauteur de l'ecran, ou le nombre des Leds en Hauteur
           uint8_t pin = (uint8_t)4, // La broche de sortie des donnees
           uint8_t matrixType = (uint8_t) NEO_MATRIX_BOTTOM +
                                          NEO_MATRIX_LEFT +
                                          NEO_MATRIX_COLUMNS +
                                          NEO_MATRIX_PROGRESSIVE, // Le type de la matrice
           neoPixelType ledType = (neoPixelType) NEO_GRB + NEO_KHZ800); // le type des Leds
    ~Screen();

private:
    int m_largeur; // La largeur de l'ecran, qui correspond au nombre des Leda en Largeur
    int m_hauteur; // La hauteur de l'ecran qui correspond au nombre des Leds en Hauteur
    uint8_t m_pin_out; // La broche de sortie
    Adafruit_NeoMatrix *matrix; // L'objet represenatnt la matrice
};
#endif // SCREEN_H_INCLUDED