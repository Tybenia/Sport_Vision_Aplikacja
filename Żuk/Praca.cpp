#include "Praca.h"



Praca::Praca()
{
	t13.loadFromFile("obrazki/praca.png");
	interakcja5.setPosition(77, 539);
	interakcja5.setSize(Vector2f(50.0f, 50.0f));
}

void Praca::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{

	if (postac1.postac1.getGlobalBounds().intersects(interakcja5.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			zuk1.praca();
			postac1.postac1.setPosition(190, 480);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			postac1.postac1.setPosition(190, 480);
		}

		Sprite pracka(t13);
		window.draw(pracka);
	}
}

Praca::~Praca()
{
}
