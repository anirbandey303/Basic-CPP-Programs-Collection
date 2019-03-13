#include<iostream>
using namespace std;
class Cons
{
public:
	int a;
	int getValue()
	{
		cout<<"Enter the Value"<<endl;
		cin>>a;
	}
	int multiply(Cons a1, Cons a2)
	{
		return(a1.a*a2.a);
	}
};

int main()
{
	Cons obj1,obj2,obj3;
	obj1.getValue();
	obj2.getValue();
	obj3.a = obj3.multiply(obj1, obj2);
	cout<<"The Product is= "<<endl;
	cout<<obj3.a<<endl;
	return 0;
}