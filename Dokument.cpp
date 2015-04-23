#include <iostream>
#include"Dokument.h"
using namespace std;

void Dokument::wyswietl()
{
    /// \brief funkcja ta wyswietla dane
for (int i=0;i<tablica.size();i++)
cout<<tablica[i]<<endl;
}
void Dokument::maluj()
{
    /// \brief funckja ta przekazujê funkcji wypisz wskaŸniki wszyskich elementów zapisanych
for (int i=0;i<tablica.size();i++)
Element::wypisz(tablica[i]);
}

void Dokument::Dodaj_Element(int w,double s,int r, int g, int b)
{
    /// \brief funkcja ta wywo³ujê konstruktora klasy Element i zapisujê jego wskaŸnik do tablicy
Element *Nowy=new Element(w,s,r,g,b);
tablica.push_back(Nowy);
}
