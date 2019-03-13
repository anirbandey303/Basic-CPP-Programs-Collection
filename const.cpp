#include<iostream>
using namespace std;
class Area
{
	int length,breadth;
public:
	Area():
	length(5),breadth(7)
	{

	}
	void getValue()
	{
		cout<<"Enter the length and breadth"<<endl;
		cin>>length>>breadth;
	}
	int calculation()
	{
		return(length*breadth);
	}
	void display(int a)
	{
		cout<<"Area is: "<<a<<endl;
	}
};

int main()
{
	Area obj1, obj2;
	int temp;
	obj1.getValue();
	temp = obj1.calculation();
	obj1.display(temp);
	cout<<"The constructor Area:"<<endl;
	temp = obj2.calculation();
	obj2.display(temp);
	return 0;
}