#include<iostream>
using namespace std;
class vote
{
	int age,x;
	public:
		void cal()
		{
			cout<<"enter the age:";
			cin>>age;
			if(int(age)>=0)
			{
			      if(age>=18)
			      {
				    cout<<"Eligible to vote.....";
				    exit(0);
			      }
		       	  if (age<18 && age>0)
		       	{
				   x=18-age;
				   cout<<"Not Eligible to vote...."<<endl;
				   cout<<"After "<<x<<" years the child can vote";
				   exit(0);
			     }
				if(age<0)
		     	{
				 cout<<"invalid"<<endl;
				 cout<<"enter only positive numbers";
				}
				else
				{ 
				    cout<<"invalid"<<endl;
					cout<<"characters are not allowed";
				}	
			
			}
		}
};
int main()
{
	vote v;
	v.cal();
	return 0;
}
