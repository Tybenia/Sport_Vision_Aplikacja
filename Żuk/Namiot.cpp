#include "Namiot.h"



Namiot::Namiot()
{
	t8.loadFromFile("obrazki/namiot.png");
	interakcja3.setPosition(670, 45);
	interakcja3.setSize(Vector2f(70.0f, 50.0f));
}


void Namiot::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{
	if (postac1.postac1.getGlobalBounds().intersects(interakcja3.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			if (zuk1.Skarma>=1)
			{
				zuk1.jedzenie();
			}
			postac1.postac1.setPosition(580, 60);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			if (zuk1.Skokaina >= 1)
			{
				zuk1.kokaina();
			}
			postac1.postac1.setPosition(580, 60);
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::C))
		{
			if (zuk1.Smdma >= 1)
			{
				zuk1.ecstasy();
			}
			postac1.postac1.setPosition(580, 60);
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::V))
		{
			if (zuk1.Ssterydy >= 1)
			{
				zuk1.sterydy();
			}
			postac1.postac1.setPosition(580, 60);
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::B))
		{
			zuk1.odpoczynek();
			postac1.postac1.setPosition(580, 60);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
		{
			postac1.postac1.setPosition(580, 60);
		}

		Sprite namiot(t8);
		window.draw(namiot);
	}
}

Namiot::~Namiot()
{
}
