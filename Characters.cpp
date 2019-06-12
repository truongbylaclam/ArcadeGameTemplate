#include<iostream>
#include<cstdio>
#include<string>
#include"Artributes.h"
#include"Skills.h"
#include"Characters.h"
#include"Tools.h"

namespace characters
{
	characters::characters(void)
		: name(""), description("")
	{
	}
	std::string characters::generateNames(void)
	{
		name = nameLibrary[rand() % nameLibrary->size];
	}
}
