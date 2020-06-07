#include "Trening.h"



Trening::Trening()
{
	t12.loadFromFile("obrazki/trening.png");
	interakcja4.setPosition(285, 375);
	interakcja4.setSize(Vector2f(50.0f, 50.0f));
}


void Trening::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{
	if (postac1.postac1.getGlobalBounds().intersects(interakcja4.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			zuk1.trening();
			postac1.postac1.setPosition(190, 480);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			postac1.postac1.setPosition(190, 480);
		}

		Sprite trenowanie(t12);
		window.draw(trenowanie);
	}
}

Trening::~Trening()
{
}
