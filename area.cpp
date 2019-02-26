#include<iostream>
#include<math.h>
using namespace std;

class dim
{
public:
	int l,b,h,s=0,area=0;
	void dimension(int len,int bre,int high)
	{
		l = len;
		b = bre;
		h = high;
	}
};
class areas: public dim
{
public:
	void areaT()
	{
		s = (l+b+h)/2;
		area = sqrt(s*(s-l)*(s-b)*(s-h));
		//area = sqrt(area);
	}
};
class disp: public areas
{
public:
	void display()
	{
		cout<<"The area of the triangle is = "<<area<<endl;
	}
};
int main()
{
	int len, bre, high;
	cout<<"Enter the length , breadth and Height"<<endl;
	cin>>len>>bre>>high;
	disp obj;
	obj.dimension(len, bre, high);
	obj.areaT();
	obj.display();
	return 0;
}