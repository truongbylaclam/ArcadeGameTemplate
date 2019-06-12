#pragma once
#ifndef ARTRIBUTES_LOCK
#define	ARTRIBUTES_LOCK

namespace artributes
{
	class artributes
	{
	public:
		artributes(void);
		artributes(bool ragedChampion);
		~artributes(void);
		void powerUp(void/*const buff& bufftype*/);
	private:
		int hp;
		int mp;
		int fatigue;
		int stamina;
		int rage;
		bool buff;
	};
	class buff
	{
	public:

	private:
	};
}
#endif ARTRIBUTES_LOCK
