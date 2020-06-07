#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Zuk.h"

using namespace sf;
using namespace std;

class Statystyki
{
public:
	Statystyki();
	void WyswietlanieOkna(RenderWindow &window);
	void WyswietlanieStatystyk(RenderWindow& window, Zuk& zuk1);
	~Statystyki();
private:
	Font font;
	Text tekstSzczescie, tekstGlod, tekstSzybkosc, tekstZdrowie, tekstZmeczenie, tekstDni;
	Texture t3;
	float szybkosc2;
};

