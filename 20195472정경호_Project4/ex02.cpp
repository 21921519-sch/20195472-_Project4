#include <iostream>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time() : hours(0), minutes(0)
	{

	}
	Time(int h, int m) : hours{ h }, minutes{ m }
	{

	}
	~Time()
	{

	}
	int getHours(void) const 
	{ 
		return hours; 
	}
	int getMinutes(void) const 
	{ 
		return minutes; 
	}
	void displayTime()
	{
		cout << hours << ": " << minutes << endl;
	}

	Time& operator++() 
	{
		++minutes;
		if (minutes >= 60) 
		{
			++hours;
			if (hours >= 24)
			{
				hours = 0;
			}
			minutes = 0;
		}
		return *this;
	}
};



int main()
{
	Time t1(10, 59);

	t1.displayTime();
	++t1;
	t1.displayTime();
	++t1;
	t1.displayTime();

	return 0;
}