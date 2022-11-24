#include <iostream>

using namespace std;

class Weapon
{
public:
	virtual void load() = 0;
};
class Gun : public Weapon 
{
public:
	void load() 
	{ 
		cout << "ÃÑÀ» ÀûÀçÇÕ´Ï´Ù." << endl; 
	}
};
class Bomb : public Weapon 
{
public:
	void load() 
	{ 
		cout << "ÆøÅºÀ» ÀûÀçÇÕ´Ï´Ù." << endl; 
	}
};


int main(void) 
{
	Weapon* equip[3];
	equip[0] = new Gun;
	equip[1] = new Bomb;
	equip[2] = new Bomb;

	for (Weapon* w : equip)
	{
		w->load();
	}

	return 0;
}