#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;


class PlacZabaw
{
public:
	PlacZabaw();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~PlacZabaw();
private:
	RectangleShape interakcja2;
	Texture t6;
};

