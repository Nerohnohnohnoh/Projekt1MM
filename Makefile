Program.out: main.o Aplikacja.o Dokument.o Element.o
	g++ -o program.out main.o Aplikacja.o Dokument.o Element.o `pkg-config --cflags --libs cairo-png` 
main.o: main.cpp
	g++ -c -o main.o main.cpp `pkg-config --cflags --libs cairo-png` 
Aplikacja.o: Aplikacja.cpp
	g++ -c -o Aplikacja.o Aplikacja.cpp `pkg-config --cflags --libs cairo-png` 
Dokument.o: Dokument.cpp
	g++ -c -o Dokument.o Dokument.cpp `pkg-config --cflags --libs cairo-png` 
Element.o: Element.cpp
	g++ -c -o Element.o Element.cpp `pkg-config --cflags --libs cairo-png`

