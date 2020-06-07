#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;

class sklep
{
public:
	sklep();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~sklep();
private:
	RectangleShape interakcja;
	Texture t5;
};

