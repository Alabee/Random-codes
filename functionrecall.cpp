#include<iostream>
using namespace std;

int compare(int a,int b);
int compare1(int a, int b, int c);

int main()
{
	int a,b,c;

	cout<<"Enter two numbers to compare: ";
	cin>>a>>b;

	cout<<compare(a,b)<<" is the greatest"<<endl;

	cout<<"Enter three numbers to compare: ";
	cin>>a>>b>>c;

	cout<<compare1(a,b,c)<<" is the greatest"<<endl;

	return 0;
}

int compare(int a,int b)
{
	if (a >= b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

int compare1(int a,int b, int c)
{
	return compare(a, compare(b, c));
}