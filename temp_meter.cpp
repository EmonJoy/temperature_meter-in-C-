#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int c, f;
    cout<<"Enter the temp: ";
    cin>>f;
    c = (f-32) * 5/9;
    cout<<"The temp is: "<<c<< " degree celcuis";
    
    getch();
}
