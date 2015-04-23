#include<iostream>
#include<vector>
#include<cairo.h>
using namespace std;
extern int licznik;
extern cairo_surface_t *surface;
extern cairo_t *cr;


class Element
{
/**
 \brief klasa ta jest odpowiedzialna za przechowywanie parametrow, które pozniej posłużą do rysowania wykresów
 \param numer jest to indywidualny numer który dostaję każda klasa
 \param wartoscr czerwona wartość
 \param wartoscr czerwona wartość
 \param wartoscg zielona wartość
 \param wartoscg niebieska wartość

**/
const int numer;
const double skala;
const int wartoscr;
const int wartoscg;
const int wartoscb;
public:
Element(int w,double s,int r,int g, int b):numer(w),skala(s),wartoscr(r), wartoscg(g), wartoscb(b){}
~Element(){};

friend ostream& operator<<(ostream &os,Element *wzor)
 {
     /// \brief przeciążenie operatora <<
    os<<"id #"<<wzor->numer<<endl;
    os<<"skala: "<<wzor->skala<<endl;
	os<<"red: "<<wzor->wartoscr<<endl;
    os<<"gren: "<<wzor->wartoscg<<endl;
    os<<"blue: "<<wzor->wartoscb<<endl;

	return os;
 }

static void wypisz(Element *wzor);

};
