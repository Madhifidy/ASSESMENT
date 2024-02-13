// write a program that will take an integer as input and returns an integer with the revesed digit ordering.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int num;
	int rem;
	int rev;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	for (rev=0;num!=0;num=num/10)
	{
		rem=num%10;
		rev=rem + (rev*10);
	}
	cout<<rev;
	
	return 0;
}