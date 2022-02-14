//falling distance
#include<iostream>
using namespace std;
double falling_distance(double);  //funtion declaration
main()
{
	double t,g;
	g=9.8;
	cout<<"Enter the time:";
	cin>>t;         //taking the time
	for(int i=0;i<10;i++)//loop is use to print 10 times	
	{
		cout<<falling_distance(i)<<endl;  //function call
	}
}
double falling_distance(double t) //function defination
{
	double g=9.8;
	cout<<"Distance :";
	return (0.5*g*(t*t));   //After perform the task it return the value
}

