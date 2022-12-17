/* On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units*/
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,e;
	cout<<"enter the amount in dollar   ";
	cin>>a;
	b=a*1.487;
	cout<<"the british pound is =   "<<b<<endl;
	c=a*0.172;
	cout<<"the french francis =  "<<c<<endl;
	d=a*0.584;
	cout<<"the german deutschemark is  = "<<d<<endl;
	e=a*0.00955;
	cout<<"the japness yen is = "<<e<<endl;
}
