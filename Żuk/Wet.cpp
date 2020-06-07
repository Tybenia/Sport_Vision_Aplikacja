#include "Wet.h"



Wet::Wet()
{
	t14.loadFromFile("obrazki/wet.png");
	interakcja6.setPosition(590, 185);
	interakcja6.setSize(Vector2f(105.0f, 75.0f));
}

void Wet::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{

	if (postac1.postac1.getGlobalBounds().intersects(interakcja6.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			zuk1.leczenie();
			postac1.postac1.setPosition(645, 305);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			postac1.postac1.setPosition(645, 305);
		}

		Sprite wecik(t14);
		window.draw(wecik);
	}
}

Wet::~Wet()
{
}
