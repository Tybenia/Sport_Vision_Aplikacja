#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Zuk.h"
#include "Ekwipunek.h"
#include "Statystyki.h"

using namespace sf;
using namespace std;

class postac
{
public:
	RectangleShape postac1;
	postac();
	~postac();

	void Wyswietlanie(RenderWindow& window);
	void poruszanie(RenderWindow& window, Zuk& zuk1, Ekwipunek& ekwipunek, Statystyki& statystyki);
private:
	Texture t2;
};

