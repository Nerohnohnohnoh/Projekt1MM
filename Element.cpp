#include<iostream>
#include"Element.h"
#include <cairo.h>
double liczba=200;
void Element::wypisz(Element *wzor)
{
    /// \brief funkcja ta odpowiada za rysowaniê i zapisywaniê to pliku
if (wzor->numer==0)
{
surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, 200, 200);
cr = cairo_create(surface);

}
liczba=liczba*(1-(wzor->skala)/100);
cairo_set_source_rgb(cr, wzor->wartoscr, wzor->wartoscg, wzor->wartoscb);
cairo_rectangle(cr, 0, 100, 20, 10);
cairo_move_to (cr, 20,200-liczba);
cairo_line_to (cr, 20,liczba);
cairo_line_to (cr,liczba-20, 100);
cairo_close_path(cr);
cairo_fill(cr);
cairo_rectangle (cr,180, 0,40-(liczba/200), 200);
cairo_fill(cr);
cairo_surface_write_to_png(surface, "image.png");
}
