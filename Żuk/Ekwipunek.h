#pragma once


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Zuk.h"


using namespace sf;
using namespace std;

class Ekwipunek
//
{
public:
	Ekwipunek();
	~Ekwipunek();
	void WyswietlanieOknaE(RenderWindow& window);
	void WyswietlanieEkwipunku(RenderWindow& window, Zuk& zuk1);
private:
	Font font;
	Text tekstKarma, tekstKokaina, tekstMdma, tekstSterydy, tekstZloto;
	Texture t4;
};

