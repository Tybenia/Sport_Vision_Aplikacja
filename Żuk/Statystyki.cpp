#include "Statystyki.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Zuk.h"

Statystyki::Statystyki()
{
	t3.loadFromFile("obrazki/statystyki.png");
	if (!font.loadFromFile("czcionki/arial.ttf"));
	tekstSzczescie.setFillColor(Color::Black);
	tekstSzczescie.setCharacterSize(54);
	tekstSzczescie.setFont(font);

	tekstGlod.setFillColor(Color::Black);
	tekstGlod.setCharacterSize(54);
	tekstGlod.setFont(font);

	tekstSzybkosc.setFillColor(Color::Black);
	tekstSzybkosc.setCharacterSize(54);
	tekstSzybkosc.setFont(font);

	tekstZdrowie.setFillColor(Color::Black);
	tekstZdrowie.setCharacterSize(54);
	tekstZdrowie.setFont(font);

	tekstZmeczenie.setFillColor(Color::Black);
	tekstZmeczenie.setCharacterSize(54);
	tekstZmeczenie.setFont(font);

	tekstDni.setFillColor(Color::Black);
	tekstDni.setCharacterSize(54);
	tekstDni.setFont(font);
	szybkosc2 = 1;
}

void Statystyki::WyswietlanieOkna(RenderWindow &window)
{
	Sprite statystyki(t3);
	window.draw(statystyki);
}

void Statystyki::WyswietlanieStatystyk(RenderWindow& window, Zuk& zuk1)
{
	string SzczescieString = to_string(zuk1.Sszczescie);
	tekstSzczescie.setPosition(517, 273);
	tekstSzczescie.setString(SzczescieString);
	window.draw(tekstSzczescie);

	string ZmeczenieString = to_string(zuk1.Szmeczenie);
	tekstZmeczenie.setPosition(517, 407);
	tekstZmeczenie.setString(ZmeczenieString);
	window.draw(tekstZmeczenie);

	string ZdrowieString = to_string(zuk1.Szdrowie);
	tekstZdrowie.setPosition(517, 200);
	tekstZdrowie.setString(ZdrowieString);
	window.draw(tekstZdrowie);
	
	szybkosc2 = round (zuk1.Sszybkosc * 100)/100;
	string SzybkoscString = to_string(szybkosc2);
	tekstSzybkosc.setPosition(517, 343);
	tekstSzybkosc.setString(SzybkoscString);
	window.draw(tekstSzybkosc);

	string GlodString = to_string(zuk1.Sglod);
	tekstGlod.setPosition(517, 133);
	tekstGlod.setString(GlodString);
	window.draw(tekstGlod);

	string DniString = to_string(zuk1.Sliczbadni);
	tekstDni.setPosition(189, 536);
	tekstDni.setString(DniString);
	window.draw(tekstDni);
}


Statystyki::~Statystyki()
{
}
