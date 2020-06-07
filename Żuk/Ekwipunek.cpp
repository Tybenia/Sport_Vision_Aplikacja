#include "Ekwipunek.h"



Ekwipunek::Ekwipunek()
{
	t4.loadFromFile("obrazki/ekwipunek.png");
	if (!font.loadFromFile("czcionki/arial.ttf"));
	tekstKarma.setFillColor(Color::Black);
	tekstKarma.setCharacterSize(54);
	tekstKarma.setFont(font);

	tekstKokaina.setFillColor(Color::Black);
	tekstKokaina.setCharacterSize(54);
	tekstKokaina.setFont(font);

	tekstMdma.setFillColor(Color::Black);
	tekstMdma.setCharacterSize(54);
	tekstMdma.setFont(font);
	
	tekstSterydy.setFillColor(Color::Black);
	tekstSterydy.setCharacterSize(54);
	tekstSterydy.setFont(font);

	tekstZloto.setFillColor(Color::Black);
	tekstZloto.setCharacterSize(54);
	tekstZloto.setFont(font);
}


Ekwipunek::~Ekwipunek()
{
}

void Ekwipunek::WyswietlanieOknaE(RenderWindow& window)
{
	Sprite ekwipunek(t4);
	window.draw(ekwipunek);
}

void Ekwipunek::WyswietlanieEkwipunku(RenderWindow& window, Zuk& zuk1)
{
	string KarmaString = to_string(zuk1.Skarma);
	tekstKarma.setPosition(500, 150);
	tekstKarma.setString(KarmaString);
	window.draw(tekstKarma);

	string MdmaString = to_string(zuk1.Smdma);
	tekstMdma.setPosition(500, 351);
	tekstMdma.setString(MdmaString);
	window.draw(tekstMdma);

	string KokainaString = to_string(zuk1.Skokaina);
	tekstKokaina.setPosition(500, 284);
	tekstKokaina.setString(KokainaString);
	window.draw(tekstKokaina);

	string SterydyString = to_string(zuk1.Ssterydy);
	tekstSterydy.setPosition(500, 217);
	tekstSterydy.setString(SterydyString);
	window.draw(tekstSterydy);

	string ZlotoString = to_string(zuk1.Szloto);
	tekstZloto.setPosition(500, 413);
	tekstZloto.setString(ZlotoString);
	window.draw(tekstZloto);

}
