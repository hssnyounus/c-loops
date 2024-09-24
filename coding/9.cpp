#include <iostream>
using namespace std;
int main()
{
	int n,oddsum=0,evensum=0;
	cout<<"enter a positive number";
	cin>>n;
	while(n >= 0)
	{
		if(n%2==0)
		
			evensum=evensum+n;
			
			else
				oddsum=oddsum+n;
				n--;
			
			cout<<"the sum of even digits is"<<evensum<<endl;
			cout<<"the sum of odd digits is"<<oddsum;
		
	}
}
