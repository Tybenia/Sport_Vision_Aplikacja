#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "postac.h"
#include "Wyscig.h"

using namespace sf;
using namespace std;


class Stadion
{
public:
	Stadion();
	void wejscie(RenderWindow& window, postac& postac1,Zuk &zuk1);
	~Stadion();
private:
	RectangleShape interakcja7;
	Texture t15;
};

