#include "Wyscig.h"
#include <iostream>


Wyscig::Wyscig()
{
	t16.loadFromFile("obrazki/wyscig.png");
	t21.loadFromFile("obrazki/przegrana.png");
	t22.loadFromFile("obrazki/wygrana.png");

	t17.loadFromFile("obrazki/zuko4.png");
	t17.setSmooth(true);
	zuko2.setPosition(10, 108);
	zuko2.setSize(Vector2f(70.0f, 100.0f));
	zuko2.setTexture(&t17);
	zuko2.setFillColor(Color::Blue);


	t18.loadFromFile("obrazki/zuko4.png");
	t18.setSmooth(true);
	zuko3.setPosition(10, 236);
	zuko3.setSize(Vector2f(70.0f, 100.0f));
	zuko3.setTexture(&t18);
	zuko3.setFillColor(Color::Green);

	t19.loadFromFile("obrazki/zuko4.png");
	t19.setSmooth(true);
	zuko4.setPosition(10, 355);
	zuko4.setSize(Vector2f(70.0f, 100.0f));
	zuko4.setTexture(&t19);

	t20.loadFromFile("obrazki/zuko4.png");
	t20.setSmooth(true);
	zuko5.setPosition(10, 485);
	zuko5.setSize(Vector2f(70.0f, 100.0f));
	zuko5.setTexture(&t20);
	zuko5.setFillColor(Color::Cyan);

	meta.setPosition(710, 105);
	meta.setSize(Vector2f(90.0f, 495.0f));
}


Wyscig::~Wyscig()
{
}

void Wyscig::zawody(RenderWindow& window, Zuk zuk1, postac& postac1)
{
	float szybkosccarlos = 4.0;
	float szybkosccarlos3 = 3.5;
	float szybkosccarlos5 = 2.5;

	while(trwanie==false)
	{ 


	Vector2f szybkosc2(szybkosccarlos, 0.0f);
	Vector2f szybkosc3(szybkosccarlos3, 0.0f);
	Vector2f szybkosc4((zuk1.Sszybkosc), 0.0f);
	Vector2f szybkosc5(szybkosccarlos5, 0.0f);

	Sprite zawodki(t16);
	window.draw(zawodki);
	zuko2.move(szybkosc2);
	window.draw(zuko2);
	zuko3.move(szybkosc3);
	window.draw(zuko3);
	zuko4.move(szybkosc4);
	window.draw(zuko4);

	zuko5.move(szybkosc5);
	window.draw(zuko5);
	if (zuko4.getGlobalBounds().intersects(meta.getGlobalBounds()))
	{
		szybkosccarlos = 0.0;
		szybkosccarlos3 = 0.0;
		zuk1.Sszybkosc = 0.0;
		szybkosccarlos5 = 0.0;
		Sprite wygranka(t22);
		window.draw(wygranka);

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			postac1.postac1.setPosition(462, 362);
			trwanie = true;
		}
	}
	if (zuko2.getGlobalBounds().intersects(meta.getGlobalBounds()))
	{
		szybkosccarlos = 0.0;
		szybkosccarlos3 = 0.0;
		zuk1.Sszybkosc = 0.0;
		szybkosccarlos5 = 0.0;
		Sprite przegranka(t21);
		window.draw(przegranka);

		if (Keyboard::isKeyPressed(Keyboard::Key::Z))
		{
			postac1.postac1.setPosition(462, 362);
			trwanie = true;
		}
	}
	window.display();
	}



}
