#include <iostream>
#include "Aplikacja.h"
#include <vector>
#include <cairo.h>
//#include <conio.h>
using namespace std;

cairo_surface_t *surface; /// \param *surface tworzy surface
cairo_t *cr;              /// \param *cr tym bedziemy rysowac


int licznik=0;			  /// \param licznik nadajemy tym id
int main()
{

Aplikacja *main;		/// \param *main deklaracja Aplikacji
main = Aplikacja::Instance();

int r=0,g=0,b=0;
int a=0;                /// \param a funkcja pomocnicza
double skala;
while (true)
{

cout<<"wcisnij 1 aby dodac element"<<endl;
cout<<"wcisnij 2 aby wyswietlic element"<<endl;
cout<<"wcisnij 3 aby narysowac element"<<endl;
cout<<"wcisnij 4 aby wyjsc"<<endl;

cin>>a;
switch(a)
{
case 1:
cout<<"podaj czerwona wartosc elementu od 0 do 255"<<endl;
cin>>r;
if (r>255)
    r=255;
if (r<0)
    r=0;
cout<<"podaj zielona wartosc elementu od 0 do 255"<<endl;
cin>>g;
if (g>255)
    g=255;
if (g<0)
    g=0;
cout<<"podaj niebieska wartosc elementu od 0 do 255"<<endl;
cin>>b;
if (b>255)
    b=255;
if (b<0)
    b=0;
cout<<"podaj o ile % chcesz aby element byl mniejszy"<<endl;
cin>>skala;
main->menu.Dodaj_Element(licznik,skala,r,g,b);
licznik++;
break;
case 2:
main->menu.wyswietl();
break;
case 3:
cout<<"rysunkek został zapisany do image.png"<<endl;
main->menu.maluj();
break;
case 4:
cairo_destroy(cr);
cairo_surface_destroy(surface);
 return 0;
break;
default:
return 0;
break;
}

}
return 0;
}
