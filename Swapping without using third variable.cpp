//Swapping without using third variable

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout<<"--BEFORE SWAPPING--"<<endl;
	
	cout<<"Enter the Value of a :- ";
	cin>>a;
	cout<<"Enter the Value of b :- ";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"--After Swapping--"<<endl;
	
	cout<<"Value of a is = "<<a<<endl;
	cout<<"Value of b is = "<<b;
	
	return 0;
}