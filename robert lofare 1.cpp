/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.
*/
#include<iostream>
using namespace std;
int main()
{
	float g,c;
	cout<<"enter a number of gallons :: ";
	cin>>g;
	c=g/7.481;
	cout<<"the cubic feet is =  "<<c;
	return 0;
}
