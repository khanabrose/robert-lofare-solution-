/* You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/
#include<iostream>
using namespace std;
int main()
{
	float t,f;
	cout<<"enter the room temperaturein celsuis :: ";
	cin>>t;
	f=(t*9/5)+35;
	cout<<"the room temperature in fahrenheit is = "<<f;
	}
