#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;


class Namiot
{
public:
	Namiot();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~Namiot();
private:
	RectangleShape interakcja3;
	Texture t8;
};

