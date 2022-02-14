// AVERAGE VALUE OF THE THREE JUDGES

#include<iostream>                                 // INCLUDED LIBRARIES
using namespace std;
void getjudgedata(float [], int);                  // DECLARATION OF THE JUDGES MARKS FUNCTION 
void calcscore(float [], int);                     // DECLARATION OF THE CALCULATION OF THE SCORES FUNCTION
int findlowest(float [], int);                     // DECLARATION OF THE FIND LOWEST VALUE FUNCTION
int findhighest(float [], int);                    // DECLARATION OF THE FIND HIGHEST VALUE FUNCTION
main()                                             // MAIN FUNTION OF THE PROGRAM  
{
	cout<<"THIS IS PROGRAM WHICH WILL GET THE 5 SCORES BETWEEN 0 AND 10 \n";
	cout<<"THEN IT WILL FIND THE MAX AND MIN AND AVERAGE OF REMAINING 3 SCORES \n\n ";
	
	
	float A[5];                                    // FLOAT TYPE ARRAY TO STORE THE SCORES
	int size=5;                                    // INT TYPE VARIABLE TO STORE THE SIZE OF THE ARRAY 
	getjudgedata(A,size);                          // STORING THE GETJUDGE VALUES
	calcscore(A,size);                             // STORING THE CALCULATION
}
void getjudgedata(float A[],int size)              // DEFFINITION OF THE GET JUDGE FUNCTION
{
	for(int x=0;x<5;x++)                           // USING THE LOOP TO GET THE SCORES OF THE JUDGES
	{
		cout<<"Enter the score given by judge number "<<x+1<<" : "; // DISPLAY ON THE SCREEN TO GET THE VALUE OF THE SCORES
		cin>>A[x];                                 // USING THE INPUT FUNCTION TO GET THE SCORES  
		if(A[x]<0 || A[x]>10)                      // VALIDATION OF THE SCORE BETWEEN 0 AND 10 
		{
			cout<<"\nYou have enter the invalid score."<<endl<<endl; // DISPLAYING THE MESSAGE ON THE SCREEN TO SHOW THAT YOU HAVE ENTERED THE INVALID SCORE
			x--;                                   // USING FOR AGAIN INPUT THE SCORES FROM THE JUDGES
		}	
	}
}
void calcscore(float A[],int size)                 // DEFFINITION OF THE CALCULATION FUNCTION     
{
	float sum=0,                                   // FLOAT TYPE VARIABLE TO STORE THE SUM OF THE SCORES  
	average=0;                                     // FLOAT TYPE VARIABLE TO STORE THE AVERAGE OF THE SCOES 
	A[findlowest(A,size)]=0;                       // VARIABLE FOR THE LOAWEST OF THE SCORE
	A[findhighest(A,size)]=0;                      // VARIABLE FOR THE HIGHEST OF THE SCORE   
	for(int x=0;x<5;x++)                           // USING THE LOOP TO GET THE SUM OF ALL VALUES 
	{
		sum=sum+A[x];                              // STORING THE SUM OF ALL VALUES   
	}
	average=sum/3;                                 // STORING THE AVERAGE  
	cout<<"Average of the scores are : "<<average<<endl<<endl;  // DISPLAY THE AVERAGE
}
int findlowest(float A[],int size)                 // DEFFINITION OF THE FIND LOAWEST FUNCTION  
{
	int min=0;                                     // ASSUMING THE MINIMUM IS AT 0 TH LOCATION 
	for(int x=0;x<5;x++)                           // LOOP FOR TESTING AND GETTING THE MINIMUM   
	{
		if(A[x]<A[min])                            // CONDITION TO CHECK MINIMUM 
		{
			min=x;                                 // ASSIGNING THE LOCATION OF THE MINIMUM 
		}
	} cout<<"\nminimum is : "<<A[min]<<endl<<endl; // DISPLAYING MINIMUM 
	return(min);                                     // RETURNIG TO CALL FUNCTION  
}
int findhighest(float A[],int size)                  // DEFFINITION OF THE FIND HIGHEST VALUE FUNTION 
{
	int max=0;                                       // ASSUMING THE LOCATION OF MAXIMUM SCORE  
	for(int x=0;x<5;x++)                             // LOOP FOR TESTING AND GETTING THE MAXIMUM 
	{
		if(A[x]>A[max])                              // CONDITION TO CHECK MAXIMUM
		{
			max=x;                                   // ASSIGNING THE LOCATION OF THE MINIMUM 
		}
	}
	cout<<"\nmaximum is : "<<A[max]<<endl<<endl;     // DISPLAYING MAXIMUM     
	return(max);                                     // RETURNING THE MAX TO THE CALL FUNCTION 
}

