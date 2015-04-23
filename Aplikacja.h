#include <iostream>
#include"Dokument.h"
using namespace std;

class Aplikacja
{
    /**
    \brief Klasa aplikacja jest singletonem, zawiera ona w sobie Dokument który jest konenerem na Element
    \param menu jest to kontener typu Dokument
    \param _instance odpowiada za tworzenie singletonu.
    **/
public:
Dokument menu;
static Aplikacja* Instance();

private:
static Aplikacja* _instance;
};

