//Markup
#include<iostream>
using namespace std;
double calculate_retail(double,double); //function decleration
main()
{
	double whole_sale_cost,percentage;
	cout<<"Enter the whole_sale_cost :";
	cin>>whole_sale_cost;       //getting the value of whole sale cost
	cout<<"Enter the percentage :";
	cin>>percentage;       //getting percentage
	cout<<calculate_retail(whole_sale_cost,percentage);    //fuction call
}
	double calculate_retail(double whole_sale_cost,double percentage)//function defination
{
	if(whole_sale_cost<0||percentage<0)  //if enter negative it give zero
	return 0;
	cout<<"Retail price :";
	return whole_sale_cost+(whole_sale_cost*(percentage/100));  //it perform and return the value
}

