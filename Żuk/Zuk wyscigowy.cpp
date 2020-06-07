// Żuk.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include "Zuk.h"
#include "Statystyki.h"
#include "Ekwipunek.h"
#include <string>
#include "postac.h"
#include "sklep.h"
#include "PlacZabaw.h"
#include "Namiot.h"
#include "Trening.h"
#include "Praca.h"
#include "Wet.h"
#include "Stadion.h"
#include "Wyscig.h"


using namespace sf;
using namespace std;


void wyswietlaniepomocy(RenderWindow& window)
{
	if (Keyboard::isKeyPressed(Keyboard::Key::H))
	{
		Texture t7;
		t7.loadFromFile("obrazki/POMOC.png");
		Sprite pomoc(t7);
		window.draw(pomoc);
	}

}

void sprawdzenie(RenderWindow& window, Zuk zuk1, Music& doscozza, Music& smierc2, bool& muzykagra)
{
	if (zuk1.Sglod >= 100 || zuk1.Szdrowie <= 0 || zuk1.Szmeczenie >= 100)
	{

		Texture t10;
		t10.loadFromFile("obrazki/smierc.png");
		Sprite smierc(t10);
		doscozza.stop();
		if (muzykagra==false)
		{ 
		smierc2.play();
		muzykagra = true;
		}
		window.draw(smierc);
	}
	if (zuk1.Sszczescie <=0)
	{
		Texture t11;
		t11.loadFromFile("obrazki/ucieczka.png");
		Sprite ucieczka(t11);
		doscozza.stop();
		if (muzykagra == false)
		{
			smierc2.play();
			muzykagra = true;
		}

		window.draw(ucieczka);
	}

}

int main()
{
	

	//definicje
	Event event;
	Statystyki statystyki;
	Ekwipunek ekwipunek;
	Zuk zuk1;
	postac postac1;
	sklep sklep1;
	PlacZabaw placzabaw1;
	Namiot namiot;
	Trening trening;
	Praca praca;
	Wet wet;
	Stadion stadion;
	bool muzykagra=false;

	RenderWindow window{ VideoMode{800,600},"Zuk wyścigowy" };
	window.setFramerateLimit(60);


	

	//tlo
	Texture t1;
	t1.loadFromFile("obrazki/tło.png");
	Sprite tlo(t1);

	//muzyka

	Music smierc2;
	smierc2.openFromFile("muzyka/smierc.ogg");
	smierc2.setVolume(60);



	Music doscozza;
	doscozza.openFromFile("muzyka/muzykatla.ogg");
	doscozza.setVolume(40);
	doscozza.play();
	doscozza.setLoop(true);



	while (true)
	{
		window.clear();
		window.pollEvent(event);

		if (event.type == Event::Closed)
		{
			window.close();
			break;
		}
		

		window.draw(tlo);
		postac1.Wyswietlanie(window);
		postac1.poruszanie(window, zuk1, ekwipunek, statystyki);
		wyswietlaniepomocy(window);
		sklep1.wejscie(window, postac1, zuk1);
		placzabaw1.wejscie(window, postac1, zuk1);
		namiot.wejscie(window, postac1, zuk1);
		trening.wejscie(window, postac1, zuk1);
		praca.wejscie(window, postac1, zuk1);
		wet.wejscie(window, postac1, zuk1);
		stadion.wejscie(window, postac1, zuk1);
		

		sprawdzenie(window, zuk1, doscozza, smierc2, muzykagra);
		window.display();
	} 
	return 0;
}















// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
