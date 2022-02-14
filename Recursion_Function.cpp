//Recursion
#include<iostream>
using namespace std;
int recursion(int number);      //Function decleration
main()
{
	int number;
	cout<<"Enter the numbers :";
	cin>>number;    //Getting the value
	cout<<"Recursion "<<recursion(number);    //Function calling
}
int recursion(int number)   //Function defination
{
	if(number==0)    //if number is equal to zero
	{
		return 0;
	}
	return recursion(number-1)+(number);   //Return the value to main function
}
