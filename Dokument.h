#include<iostream>
#include<vector>
#include"Element.h"
#include <cairo.h>
using namespace std;

class Dokument
{
/**
\brief Klasa ta jest kontenerem tzn. Przechowuję w sobie wskaźniki na Elementy
\param tablica w tej tablicy przechowywujemy wskaźniki na Elementy
**/
vector <Element*> tablica;
public:
void wyswietl();

void maluj();

void Dodaj_Element(int w,double s,int r, int g, int b);
};
