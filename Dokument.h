#include<iostream>
#include<vector>
#include"Element.h"
#include <cairo.h>
using namespace std;

class Dokument
{
/**
\brief Klasa ta jest kontenerem tzn. PrzechowujÍ w sobie wskaüniki na Elementy
\param tablica w tej tablicy przechowywujemy wskaüniki na Elementy
**/
vector <Element*> tablica;
public:
void wyswietl();

void maluj();

void Dodaj_Element(int w,double s,int r, int g, int b);
};
