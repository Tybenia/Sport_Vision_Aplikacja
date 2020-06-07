#pragma once

#include "Zwierze.h"


class Zuk : public Zwierze
{
public:
	float Sszybkosc;
	int Sszczescie;
	int Szmeczenie;
	int Sglod;
	int Szdrowie;
	int Skarma;
	int Skokaina;
	int Smdma;
	int Ssterydy;
	int Szloto;
	int Sliczbadni;
	Zuk();
	~Zuk();
	void jedzenie();
	void sterydy();
	void kokaina();
	void ecstasy();
	void trening();
	void zabawa();
	void odpoczynek();
	void praca();
	void leczenie();
	
	
};

