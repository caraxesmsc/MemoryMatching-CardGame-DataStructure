#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card
{
public:

	string CardName;

	string cardPath;
	//image CardImage;
	bool isShown;
	Card();
	Card(string x);
	Card(int value);
	Card(string y, string x);
	void setShown(bool booleanVar);

	//Card(const std::string& name, bool shown = false): CardName(name), isShown(shown) {}

};
#endif // CARD_H
