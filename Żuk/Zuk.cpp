#include "Zuk.h"
#include <iostream>

using namespace std;




Zuk::Zuk()
{
	Sszczescie = 100;
	Sszybkosc = 1.0;
	Szdrowie = 100;
	Szmeczenie = 0;
	Sglod = 0;
	Skarma = 4;
	Skokaina = 0;
	Smdma = 0;
	Ssterydy = 0;
	Szloto = 100;
	Sliczbadni = 1;
}


Zuk::~Zuk()
{
}

void Zuk::jedzenie()
{
	Sglod -= 50; 
	Szmeczenie += 10;
	Sszczescie += 10;
	Skarma -= 1;
	if (Sszczescie > 100)
	{
		Sszczescie = 100;
	}
	if (Szmeczenie < 0)
	{
		Szmeczenie = 0;
	}
	if (Sglod < 0)
	{
		Sglod = 0;
	}
}

void Zuk::sterydy()
{
	Sszybkosc += 0.2;
	Sszczescie -= 20;
	Szdrowie -= 10;
	Ssterydy -= 1;
}

void Zuk::kokaina()
{
	Skokaina -= 1;
	Sszybkosc += 0.1;
	Szmeczenie =0;
	Szdrowie -= 40;
}

void Zuk::ecstasy()
{
	Sszczescie += 50;
	Szmeczenie -= 10;
	Szdrowie -= 40;
	Smdma -= 1;
	if (Sszczescie > 100)
	{
		Sszczescie = 100;
	}
	if (Szmeczenie < 0)
	{
		Szmeczenie = 0;
	}
}

void Zuk::trening()
{
	Sszybkosc += 0.1;
	Szmeczenie += 25;
	Sszczescie -= 20;
	Sglod += 20;
}

void Zuk::zabawa()
{
	Sszczescie += 25;
	Szmeczenie += 5;
	Sglod += 5;
	if (Sszczescie > 100)
	{
		Sszczescie = 100;
	}
}

void Zuk::odpoczynek()
{
	Szmeczenie = 0;
	Sliczbadni += 1;
	Sglod += 20;
}

void Zuk::praca()
{
	Szloto += 20;
	Szmeczenie += 25;
	Sszczescie -= 20;
	Sglod += 20;
}

void Zuk::leczenie()
{
	Sszczescie -= 10;
	Szmeczenie += 10;
	Szdrowie = 100;
	Sglod += 10;
	Szloto -= 100;
	Sliczbadni += 1;
}




