#include<iostream>
#include<cstdlib>
using namespace std;
int decimal(int);
int binary(int);
int main()
{
	//Initialized main
	int c,b,d;
	while(1)
	{
		//Accept binary or decimal number
	   cout<<"\n\nChoose the action:\n";
	   cout<<"1.Covert binary to decimal";
	   cout<<"\n2.Convert decimal to binary";
	   cout<<"\n3.Exit\n";
	   cout<<"Enter your choice: ";
	   cin>>c;
	   switch(c)
	   {
		   case 1: cout<<"\n\nEnter a binary number: ";
		           cin>>b;
		           //Covert binary to decimal
		           cout<<"The decimal equivalent of binary "<<b<<" is "<<decimal(b);
		           break;
		   case 2: cout<<"\nEnter a decimal number: ";
		           cin>>d;
		           //Covert decimal to binary
		           cout<<"\nThe binary equivalent of decimal "<<d<<" is "<<binary(d);
		           break;
		   case 3: exit(0);
		   default: cout<<"\nEnter correct choice";
		}
	}
	return 0;
	//End of main
}
int decimal(int b)
{
	//decimal() begins
	int dec,rem,base;
	base=1;
	dec=0;
	while(b>0)
	{
		rem=b%10;
		dec=dec+rem*base;
		b=b/10;
		base=base*2;
	}
	return dec;
	//decimal() ends
}
int binary(int d)
{
	//binary() begins
	int rem,b=0;
	int i=1;
	while(d>0)
	{
		rem=d%2;
		d=d/2;
		b=b+rem*i;
		i=i*10;
	}
	return b;
	//binary() ends
}
