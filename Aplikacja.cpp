#include<iostream>
#include"Aplikacja.h"


Aplikacja* Aplikacja::_instance = 0 ;

	Aplikacja* Aplikacja::Instance () {
    /**
    \brief funkcja odpowiedzialna za tworzenie singletonu
    \return zwraca stworzon¹ instancjê
    **/

		if (_instance == 0) {
			_instance = new Aplikacja;
		}
		return _instance;
	}


