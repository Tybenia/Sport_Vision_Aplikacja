#pragma once


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Zuk.h"
#include "postac.h"

using namespace sf;
using namespace std;


class Wyscig
{
public:
	Wyscig();
	~Wyscig();
	void zawody(RenderWindow& window, Zuk zuk1, postac& postac1);
private:
	RectangleShape zuko4, zuko2, zuko3, zuko5, meta;
	Texture t16, t17, t18, t19, t20, t21, t22;
	bool trwanie = false;
};

