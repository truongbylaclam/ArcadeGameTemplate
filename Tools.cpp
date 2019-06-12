// Tools.cpp

#include<string>
#include<iostream>
#include"Tools.h"
#include<time.h>
using namespace std;

namespace tools
{
	string toString(bool b)
	{
		return b ? "true" : "false";
	}

	int randomInt(int lowBound, int highBound)
	{
		static bool seeded = false;
		if (!seeded)
		{
			srand(unsigned(time(0)));
			seeded = true;
		}
		return lowBound + rand() % (1 + highBound - lowBound);
	}

	bool isUpper(char c)
	{
		return c >= 'A' && c <= 'Z';
	}

	bool isLower(char c)
	{
		return c >= 'a' && c <= 'z';
	}

	bool isLetter(char c)
	{
		return isUpper(c) || isLower(c);
	}

	bool isDigit(char c)
	{
		return c >= '0' && c <= '9';
	}

	char toLower(char c)
	{
		return isUpper(c) ? (c - 'A' + 'a') : c;
	}

	std::string toLower(std::string s)
	{
		for (string::size_type index = 0; index < s.size(); ++index)
			s[index] = toLower(s[index]);
		return s;
	}

	int getPositiveInt(string prompt)
	{
		return getBoundedInt(prompt, 1, INT_MAX);
	}

	int getNonnegativeInt(string prompt)
	{
		return getBoundedInt(prompt, 0, INT_MAX);
	}

	int getBoundedInt(string prompt, int lowBound, int highBound)
	{
		while (true)
		{
			int userInput = getInt(prompt);
			if (lowBound <= userInput
				&& userInput <= highBound)
				return userInput;
			cout << "Value must be in the range ["
				<< lowBound
				<< ".."
				<< highBound
				<< "]. Try again"
				<< endl;
		}
	}

	bool getBool(string prompt)
	{
		while (true)
		{
			switch (getChar(prompt))
			{
			case 'y': case 'Y': return true;
			case 'n': case 'N': return false;
			}
			cout << "Please answer y or n, idiot." << endl;
		}
	}

	int getInt(string prompt)
	{
		while (true)
		{
			int userInput;
			cout << prompt;
			cin >> userInput;
			flush(cin);
			if (!cin.fail())
				return userInput;
			cin.clear();
			flush(cin);
			cout << "Invalid integer format. Try again." << endl;
		}
	}

	char getChar(string prompt)
	{
		while (true)
		{
			char userInput;
			cout << prompt;
			cin >> userInput;
			flush(cin);
			if (!cin.fail())
				return userInput;
			cin.clear();
			flush(cin);
			cout << "Invalid char format. Try again." << endl;
		}
	}

	std::string getString(std::string prompt)
	{
		while (true)
		{
			string userInput;
			cout << prompt;
			cin >> userInput;
			flush(cin);
			if (!cin.fail())
				return userInput;
			cin.clear();
			flush(cin);
			cout << "Invalid string format. Try again." << endl;
		}
	}

	std::string getLine(std::string prompt)
	{
		while (true)
		{
			string userInput;
			cout << prompt;
			getline(cin, userInput);
			if (!cin.fail())
				return userInput;
			cin.clear();
			flush(cin);
			cout << "Invalid string format. Try again." << endl;
		}
	}

	float getFloat(string prompt)
	{
		while (true)
		{
			float userInput;
			cout << prompt;
			cin >> userInput;
			flush(cin);
			if (!cin.fail())
				return userInput;
			cin.clear();
			flush(cin);
			cout << "Invalid float format. Try again." << endl;
		}
	}

	float sum(float numbers[], size_t size)
	{
		float accumulatedSum = 0;
		for (size_t index = 0; index < size; ++index)
			accumulatedSum += numbers[index];
		return accumulatedSum;
	}

	void flush(istream & xin)
	{
		xin.ignore(999, '\n');
	}

	void pause(string message)
	{
		cout << message;
		cin.ignore(999, '\n');
	}

}
