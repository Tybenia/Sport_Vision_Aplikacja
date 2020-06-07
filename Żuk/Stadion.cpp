#include "Stadion.h"



Stadion::Stadion()
{
	t15.loadFromFile("obrazki/stadion.png");
	interakcja7.setPosition(533, 426);
	interakcja7.setSize(Vector2f(192.0f, 97.0f));
}

void Stadion::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{

	if (postac1.postac1.getGlobalBounds().intersects(interakcja7.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			Wyscig wyscig;
			wyscig.zawody(window, zuk1, postac1);
			postac1.postac1.setPosition(462, 362);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			postac1.postac1.setPosition(462, 362);
		}

		Sprite stadionik(t15);
		window.draw(stadionik);
	}
}


Stadion::~Stadion()
{
}
