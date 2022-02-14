//kinetic energy
#include<iostream>
using namespace std;
double kinetic_energy(double,double);  // function decleration
main()
{
	double m,v;
	cout<<"Enter the mass:";
	cin>>m;     // Getting the mass
	cout<<"Enter the velocity:";
	cin>>v;    //getting the velocity
	cout<<kinetic_energy(m,v);  //function call
	cout<<"J";
}
double kinetic_energy(double m,double v) //Function defination
{
	cout<<"Kinetic Energy :";
	return (0.5*m*(v*v));   // After the calculation it return the value
}

