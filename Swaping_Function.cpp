#include<iostream>
using namespace std;
void get_input(int& input1,int& input2);     //Function declaration
void swap_values(int& variable1,int&variable2);    //Function declaration
void order(int& n1,int& n2);        //Function declaration
void give_results(int output1,int output2);    //Function declaration
main()
{
	int first_num,second_num;
	get_input(first_num,second_num);     //Function calling
	order(first_num,second_num);          //Function calling
	give_results (first_num,second_num);    //Function calling
}
void get_input(int& input1,int& input2)   //Function defination
{
	cout<<"Enter the first number :";
	cin>>input1;     //Getting the input value
	cout<<"Enter the second number :";
	cin>>input2;      //Getting the input value
}
void swap_values(int& variable1,int&variable2)   //Function defination
{
	int temp=0;  //Temp initialize with zero
	temp=variable1;    //Swapping the values
	variable1=variable2;
	variable2=temp;
}
void order(int& n1,int& n2)     //Function defination
{
	int temp=0;
	if(n1<=n2)   //If condition check that n1 is less than or equal to n2
	{
		temp=n1;    //Swapping the values
		n1=n2;
		n2=temp;
	}
}
void give_results(int input1,int input2)   //Function defination
{
	cout<<"The swapped value "<<input1<<" and "<<input2;
	int temp=0;
	if(input1>input2)    //If input is greater than input
	{
		temp=input1;       //Swapping the values
		input1=input2;
		input2=temp;
	}
	cout<<"\nOrdered values "<<input1<<" and "<<input2;
}
