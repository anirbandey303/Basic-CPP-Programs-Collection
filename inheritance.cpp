#include<iostream>
using namespace std;
class sup
{
	public:
	void dis()
	{
		cout<<"I am super class"<<endl;
	}
};
class sub: public sup
{
public:
	void disp()
	{
		cout<<"I'm sub class<<"<<endl;
	}
};
int main()
{
	sub obj;
	obj.dis();
	obj.disp();
}
