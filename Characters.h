#pragma once
#pragma once
#ifndef CHARACTER_LOCK
#define	CHARACTER_LOCK

namespace characters
{
	class characters
	{
	public:
		characters(void);
		~characters(void);
		std::string generateNames(void);
	private:
		std::string name;
		std::string description;
		std::string nameLibrary[17] 
		{
			"Jane", "Jennie", "Shane", "James", "Tay",
			"Trey", "Stephaine", "Troye", "Ariana",
			"Dawg", "Tracey", "Wisky", "Yamada",
			"Sukuzi" , "Yao", "Hung", "John"
		};
	};
}
#endif CHARACTER_LOCK
