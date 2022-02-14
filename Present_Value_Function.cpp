//Present value
#include<iostream>
#include<cmath>
using namespace std;
double present_value(double,double,double);  //function decleration
main()
{
	double f,r,n;
	cout<<"Enter the future value:";
	cin>>f;      //Getting the future value
	cout<<"Enter the annual interest rate:";
	cin>>r;      //Getting the annual interest rate
	cout<<"Enter the number of years:";
	cin>>n;     //Getting the number of years
	cout<<present_value(f,r,n);   //function call
}
double present_value(double f,double r,double n) //function defination
{
	cout<<"Present value :";
	return (f/pow((1+r),n));  //After the perform it return the value
}

