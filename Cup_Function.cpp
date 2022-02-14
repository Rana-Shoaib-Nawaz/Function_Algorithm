#include<iostream>
using namespace std;
string intro(string name);        //Function decleration
float fluid(float cup);          //Function decleration
main()
{
	string name;
	float cup;
	cout<<"\t\tIntroduction of the programme :"<<endl;
	cout<<intro(name);          //Function call
	cout<<"Enter the numbers of cup :";
	cin>>cup;            //Getting the number of cups
	cout<<"number of ounces "<<fluid(cup);      //Function call
}
string intro(string name)       //Function defination
{
	return "In this programme the cups multiply with the 8";     //Return the value to main function
}
float fluid(float cup)       //Function defination
{
	return cup*8;          //Return the value to the main function
}
