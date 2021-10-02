#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x1, y1, z1; //coefficient & remainder values for Eqn 1
	int x2, y2, z2; //coefficient & remainder values for Eqn 1
    int X,Y;
    //Equation 1
    cout<<"\n\tENTER COEFFICIENTS of X,Y AND THE REMAINDER VALUES FOR EQN-1: ";
    cout<<"\n\tCO-EFFICIENT OF X: ";
    cin>>x1;
    
    cout<<"\n\tCO-EFFICIENT OF Y: ";
    cin>>y1;
    
    cout<<"\n\tREMAINDER VALUE: ";
    cin>>z1;
    
    cout<<"\n\t**************************************************\n\n";
    
    //Equation 2
    cout<<"\tENTER COEFFICIENTS of X,Y AND THE REMAINDER VALUES FOR EQN-2: ";
    cout<<"\n\tCO-EFFICIENT OF X: ";
    cin>>x2;
    
    cout<<"\n\tCO-EFFICIENT OF Y: ";
    cin>>y2;
    
    cout<<"\n\tREMAINDER VALUE: ";
    cin>>z2;
    
    cout<<"\n\t**************************************************\n\n";
    
    cout << "\n\tHOW THE SIMULTANEOUS EQUATION LOOKS LIKE BASED ON YOUR INPUTS\n";
	cout << "\t "<< x1 <<"x + "<< y1 <<"y = "<< z1 <<"\n";
	cout << "\t "<< x2 <<"x + "<< y2 <<"y = "<< z2 <<"\n";
	
	Y = ((x2*z1)-(x1*z2))/((x2*y1)-(x1*y2)); //Formula for finding Y
	X = (z1 - (y1*Y))/x1; //Formula for X after finding Y
	
	cout << "\n\tY: " << Y << "\n";
	cout << "\n\tX: " << X << "\n";
	
    return 0;
}


