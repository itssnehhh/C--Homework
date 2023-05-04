//Swapping using Third variable

#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"--BEFORE SWAPPING--"<<endl;
	cout<<"Enter the Value of a :- ";
	cin>>a;
	cout<<"Enter the value of b :- ";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"--AFTER SWAPPING--"<<endl;
	cout<<"Value of a is = "<<a<<endl;
	cout<<"Value of b is = "<<b;
	
	return 0;
}