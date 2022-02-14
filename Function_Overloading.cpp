//Function overloading
#include<iostream>
using namespace std;
double computebill1(double price);  //Function decleration with one parameter
double computebill2(double price,double quantity_order);   //Function decleration with two parameter
double computebill3(double price,double quantity_order,double coupon_value);   //Function decleration with three parameter
main()
{
	double price,quantity_order,coupon_value,average1,average2,average3,multiply1,multiply2;
	cout<<"Enter the price :";
	cin>>price;      //Getting the price
	cout<<"Enter the quantity order :";
	cin>>quantity_order;    //Getting the quantity_order
	cout<<"Enter the coupon value :";
	cin>>coupon_value;     //Getting the coupon_value
	cout<<"One parameter "<<computebill1(price);  //Function calling with one parameter
	cout<<"\nTwo parameter "<<computebill2(price,quantity_order);   //Function calling with two parameter
	cout<<"\nThree parameter "<<computebill3(price,quantity_order,coupon_value);   //Function calling with three parameter
}
double computebill1(double price)    //Function defination
{
	double average1;
	average1=(price*8)/100;    //Getting the 8% of price
	return price+average1;     //Return the value to main function
}
double computebill2(double price,double quantity_order)   //Function defination
{
	double multiply1,average2;
	multiply1=price*quantity_order;    //Multiply the price and quantity order
	average2=multiply1*0.08;     //Getting the 8% of multiply value
	return multiply1+average2;    //Return the value to main function
}
double computebill3(double price,double quantity_order,double coupon_value)    //Function defination
{
	double sum2=0,average3;

	sum2=price*quantity_order;     //Multiply the price and quantity_order
	average3=coupon_value-sum2;    //Coupon _value minus the multiply value
	average3+= average3*0.08;     //Add the number of 8%	
	return average3 ;              //Return the value to main function
}
