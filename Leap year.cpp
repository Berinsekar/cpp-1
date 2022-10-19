#include<iostream>
using namespace std;
class Date{
    public:
    int date;
    Date(int d){
        date = d;
    }
};
class Month{
    public:
    int month;
    Month(int m){
        month = m;
    }
};
class Year{
    public:
    int year;
    Year(int y){
        year = y;
    }
};
int main(){
    int d,m,y;
    char ch = '/';
    cin>>d>>ch>>m>>ch>>y;
    Date D(d);
    Month M(m);
    Year Y(y);
    if((D.date<=31 && D.date>=1) && (M.month<=12 && M.month>=1) && (Y.year<=9999 && Y.year>=1000)){
        if(Y.year%4==0 && Y.year%100!=0 || Y.year%400==0){
            if(M.month == 2){
                if(D.date<=29){
                    cout<<"Leap Year";
                }
                else{
                    cout<<"Not a leap year";
                }
            }
            else{
                cout<<"Leap Year";
            }
        }
        else{
            cout<<"Not a leap year";
        }
    }
    else{
        cout<<"Invalid input";
    }
}
