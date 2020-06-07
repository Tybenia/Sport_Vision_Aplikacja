#include "postac.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Statystyki.h"
#include "Ekwipunek.h"

using namespace sf;
using namespace std;

postac::postac()
{
	t2.loadFromFile("obrazki/postac2.png");
	t2.setSmooth(true);
	postac1.setTexture(&t2);
	postac1.setPosition(400, 300);
	postac1.setOrigin(25.0f, 25.0f);
	postac1.setSize(Vector2f(50.0f, 50.0f));
}


postac::~postac()
{
}

void postac::Wyswietlanie(RenderWindow& window)
{
	window.draw(postac1);
}

void postac::poruszanie(RenderWindow& window, Zuk& zuk1, Ekwipunek& ekwipunek, Statystyki& statystyki)
{


	if (Keyboard::isKeyPressed(Keyboard::Key::A))
	{
		postac1.move(-3.0f, 0.0f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::W))
	{
		postac1.move(0.0f, -3.0f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::S))
	{
		postac1.move(0.0f, 3.0f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::D))
	{
		postac1.move(3.0f, 0.0f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::E))
	{
		ekwipunek.WyswietlanieOknaE(window);
		ekwipunek.WyswietlanieEkwipunku(window, zuk1);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key::Q))
	{

		statystyki.WyswietlanieOkna(window);
		statystyki.WyswietlanieStatystyk(window, zuk1);
	}
	
}