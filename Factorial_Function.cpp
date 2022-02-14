//Factorial
#include<iostream>
using namespace std;
int factorial(int number);       //Function decleration
main()
{
	int number; 
	cout<<"Enter the number :";
	cin>>number;        //Getting the value
	cout<<"factorial "<<factorial(number);     //Function calling
} 
int factorial(int number)        //Function defination
{
	if(number==0)     //if number is equal to zero
	{
		return 1;
	}
	return factorial(number-1)*(number);    //Return the value to main function
}
