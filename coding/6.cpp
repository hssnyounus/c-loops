#include<iostream>
using namespace std;
int main()
{
	int x,a,r,sum = 0;
	cout<<"enter the number";
	cin>>x;
	a = x;
	while(x!=0)
	{
		r = x %10;
		if(r ==0)
		{
			sum = sum+x;
		}
		else{
			sum = sum+r;
			x = x /10;
		}
		cout<<"the sum of digits of"<<a<<"="<<sum;
	}
}
