#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"

using namespace sf;
using namespace std;


class Wet
{
public:
	Wet();
	void wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1);
	~Wet();
private:
	RectangleShape interakcja6;
	Texture t14;
};

