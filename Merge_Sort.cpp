#include<iostream>
using namespace std;
void sortmerge(int A[])
{
	int i=0,j=0,temp;
	if(A[i]<A[i+1])
	{
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		i++,j++;
	}
}
void print(int A[])
{
	for(int i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
}
int main()
{
	int A[5]={3,1,9,5,4};
	sortmerge(A);
	print(A);
}
