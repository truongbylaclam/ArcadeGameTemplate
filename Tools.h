#pragma once
// Tools.h

#ifndef TOOLS_LOCK
#define TOOLS_LOCK

#include<string>
#include<iostream>

namespace tools
{
	float sum(float numbers[], size_t size);

	void pause(std::string message = "Press ENTER to continue...");
	void flush(std::istream& xin);

	int getInt(std::string prompt);
	int getPositiveInt(std::string prompt);
	int getNonnegativeInt(std::string prompt);
	int getBoundedInt(std::string prompt, int lowBound, int highBound);
	float getFloat(std::string prompt);
	std::string getString(std::string prompt);
	std::string getLine(std::string prompt);
	char getChar(std::string prompt);
	bool getBool(std::string prompt);

	char toLower(char c);
	std::string toLower(std::string s);
	bool isUpper(char c);
	bool isLower(char c);
	bool isLetter(char c);
	bool isDigit(char c);

	int randomInt(int lowBound, int highBound);

	std::string toString(bool b);

	template<class T>
	void swap(T& item1, T& item2)
	{
		T swapValue = item1;
		item1 = item2;
		item2 = swapValue;
	}

	template<class T>
	void sort(T& item1, T& item2)
	{
		if (item1 > item2)
			swap(item1, item2);
	}

	template<class T>
	T& smallest(T& item1, T& item2)
	{
		return (item1 < item2) ? item1 : item2;
	}
	std::string nameLibrary[] =
	{
		"Jane", "Jennie", "Shane", "James", "Tay",
		"Trey", "Stephaine", "Troye", "Ariana",
		"Dawg", "Tracey", "Wisky", "Yamada",
		"Sukuzi" , "Yao", "Hung", "John"
	};
}

#endif
