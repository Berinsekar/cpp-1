#include<iostream>
using namespace std;
class Arithmatic
{
	float num;
	public:
		void accept()
		{
			cout<<"enter a number:";
			cin>>num;
		}
		Arithmatic operator+(Arithmatic&a)
		{
			Arithmatic t;
			t.num=num+a.num;
			return t;
		}
		Arithmatic operator-(Arithmatic&a)
		{	
			Arithmatic t;
			t.num=num-a.num;
			return t;
		}
		Arithmatic operator*(Arithmatic&a)
		{
			Arithmatic t;
			t.num=num*a.num;
			return t;
		}
		Arithmatic operator/(Arithmatic&a)
		{
			Arithmatic t;
			t.num=num/a.num;
			return t;
		}
		void display()
		{
			cout<<num;
		}  
};
int main()
{
	Arithmatic a1,a2,a3;
	a1.accept();
	a2.accept();
	a3=a1+a2;
	cout<<"\naddition:";
	a3.display();
	a3=a1-a2;
	cout<<"\nsubtraction:";
	a3.display();
	a3=a1*a2;
	cout<<"\nmultiplication:";
	a3.display();
	a3=a1/a2;
	cout<<"\ndivision:";
	a3.display();
	return 0;
}
