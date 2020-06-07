#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;


class Praca
{
public:
	Praca();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~Praca();
private:
	RectangleShape interakcja5;
	Texture t13;
};

