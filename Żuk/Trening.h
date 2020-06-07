#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;


class Trening
{
public:
	Trening();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~Trening();
private:
	RectangleShape interakcja4;
	Texture t12;
};

