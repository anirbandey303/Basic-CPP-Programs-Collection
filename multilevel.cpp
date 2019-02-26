#include<iostream>
using namespace std;
class base1
{
	public:
	void dis()
	{
		cout<<"I am super class"<<endl;
	}
};
class base2: public base1
{
public:
	void disp()
	{
		cout<<"I'm sub class<<"<<endl;
	}
};
class derived: public base2
{
public:
	void display()
	{
		cout<<"I'm the derived class"<<endl;
	}
};
int main()
{
	derived obj;
	obj.dis();
	obj.disp();
	obj.display();
}
