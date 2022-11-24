#include <iostream>

using namespace std;

class Box
{
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h)
	{

	}
	double getVolume(void)
	{
		return length * width * height;
	}
	bool operator<(const Box& b) 
	{
		return (this->getVolume() < b.getVolume());
	}
	bool operator>(const Box& b) 
	{
		return (this->getVolume() > b.getVolume());
	}
};

int main()
{
	Box a(10, 10, 10), b(20, 20, 20);
	cout << (a < b);
}