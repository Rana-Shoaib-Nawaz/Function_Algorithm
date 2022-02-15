#include <iostream>
using namespace std;
int Tower_Of_Hanoi(int n, char Source_pole,char Destination_pole, char auxiliary_pole);
int main()
{
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    Tower_Of_Hanoi(n, 'S', 'D', 'A'); 
}
int Tower_Of_Hanoi(int n, char Source_pole,char Destination_pole, char auxiliary_pole)
{
    if (n == 1)
    {
        cout << "Moving disk 1 from pole \'" << Source_pole <<"\' to \'" << Destination_pole <<"\'"<<endl;
        return 0;
    }
    Tower_Of_Hanoi(n - 1, Source_pole, auxiliary_pole, Destination_pole);
    
	cout << "Moving disk " << n << " from pole \'" << Source_pole << "\' to \'" << Destination_pole <<"\'"<<endl;
    Tower_Of_Hanoi(n - 1, auxiliary_pole, Destination_pole, Source_pole);
}
