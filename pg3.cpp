#include<iostream>
using namespace std;

int main()
{
	int i=20;
	
	while(i<=30)
	{
		cout<<i<<endl;
		
		if(i%5==0)
		{
			i+=4;
			continue;
		}			
		i++;
	}
	cout<<"-----"<<i;
}






