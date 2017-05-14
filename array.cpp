#include<iostream>
using namespace std;

int main()
{
	int i;
	double average;
	int total = 0;
	int array[10] ;

	for(i = 0; i <= 9; i++)
	{
		cout<<"Enter element "<<i<<endl;
		cin>>array[i];
	} 

	for(i = 0; i <= 9; i++) 
	{
		total += array[i];
	}
	average = total/10;
	cout<<total<<endl;
	cout<<average;

	return 0;
}