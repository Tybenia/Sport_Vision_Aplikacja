#include "PlacZabaw.h"



PlacZabaw::PlacZabaw()
{
	t6.loadFromFile("obrazki/placzabaw.png");
	interakcja2.setPosition(40, 370);
	interakcja2.setSize(Vector2f(80.0f, 60.0f));
}

void PlacZabaw::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{

	if (postac1.postac1.getGlobalBounds().intersects(interakcja2.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			zuk1.zabawa();
			postac1.postac1.setPosition(190, 480);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			postac1.postac1.setPosition(190, 480);
		}

		Sprite placyk(t6);
		window.draw(placyk);
	}
}

PlacZabaw::~PlacZabaw()
{
}
