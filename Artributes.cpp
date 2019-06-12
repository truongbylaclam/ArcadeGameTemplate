#include<iostream>
#include<cstdio>
#include<string>
#include"Characters.h"
#include"Skills.h"
#include"Artributes.h"
const int MAXIMUM_ADDITIONAL_HP = 150;
const int MINIMUM_INITIAL_HP = 400;
const int MAXIMUM_ADDITIONAL_MP = 100;
const int MINIMUM_INITIAL_MP = 250;
const int MAXIMUM_STAMINA = 100;
namespace artributes
{
		artributes::artributes(void)
			: hp(rand() % MAXIMUM_ADDITIONAL_HP + MINIMUM_INITIAL_HP)
			, mp(rand() % MAXIMUM_ADDITIONAL_MP + MINIMUM_INITIAL_MP)
			, buff(false)
			, fatigue(0) 
			, stamina(MAXIMUM_STAMINA)
		{
		}
		artributes::artributes(bool ragedChampion)
			: hp(rand() % MAXIMUM_ADDITIONAL_HP + MINIMUM_INITIAL_HP)
			, mp(rand() % MAXIMUM_ADDITIONAL_MP + MINIMUM_INITIAL_MP)
			, buff(false)
			, fatigue(0)
			, stamina(MAXIMUM_STAMINA)
		{
		}
		void artributes::powerUp(void)
		{
			
		}
		
}
		