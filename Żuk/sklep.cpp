#include "sklep.h"
#include "Zuk.h"


sklep::sklep()
{
	t5.loadFromFile("obrazki/sklep.png");
	interakcja.setPosition(170, 200);
	interakcja.setSize(Vector2f(85.0f, 55.0f));
}

void sklep::wejscie(RenderWindow& window, postac& postac1, Zuk& zuk1)
{

	if (postac1.postac1.getGlobalBounds().intersects(interakcja.getGlobalBounds()))
	{

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			 if (zuk1.Szloto >= 5)
			{
				zuk1.Szloto -= 5;
				zuk1.Skarma += 1;
			}
			postac1.postac1.setPosition(212, 310);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::X))
		{
			if (zuk1.Szloto >=40 )
			{
				zuk1.Szloto -= 40;
				zuk1.Skokaina += 1;
			}
			postac1.postac1.setPosition(212, 310);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::C))
		{
			if (zuk1.Szloto >= 25)
			{
				zuk1.Szloto -= 25;
				zuk1.Smdma += 1;
			}
			postac1.postac1.setPosition(212, 310);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::V))
		{
			if (zuk1.Szloto >= 20)
			{
				zuk1.Szloto -= 20;
				zuk1.Ssterydy += 1;
			}
			postac1.postac1.setPosition(212, 310);
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
		{
			postac1.postac1.setPosition(212, 310);
		}

		Sprite sklepik(t5);
		window.draw(sklepik);
	}


}

sklep::~sklep()
{
}
