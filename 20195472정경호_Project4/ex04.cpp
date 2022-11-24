#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
	string name;
	int salary;
public:
	Employee(string n, int s) : name{ n }, salary{ s } 
	{

	}
	void setName(string name) 
	{
		this->name = name; 
	}
	void setSalary(int salary) 
	{ 
		this->salary = salary; 
	}
	string getName(void) const 
	{ 
		return name; 
	}
	int getSalary(void) const 
	{ 
		return salary; 
	}
	int computeSalary(void) 
	{ 
		return salary; 
	}
};

class Manger : public Employee 
{
private:
	int bonus;
public:
	Manger(string n, int s, int b) : Employee(n, s), bonus{ b } 
	{

	}
	void setBonus(int bonus) 
	{ 
		this->bonus = bonus; 
	}
	int getBonus(void) const 
	{ 
		return bonus; 
	}
	int computeSalary(void) 
	{ 
		return salary + bonus; 
	}
};

int main(void) 
{

	Manger m1("±èÃ¶¼ö", 200, 100);

	cout << m1.getName() << endl << m1.getSalary() << endl << m1.getBonus() << endl << m1.computeSalary();

	return 0;
}
