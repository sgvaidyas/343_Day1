#include <iostream>
using namespace std;
int main(){
	
	int n,d=0,r,sum=0;
	cout << "enter a number\n";
	cin >> n;
	
	while(n!=0)
	{
		d++;
		r = n%10;
		sum += r;
		n = n/10;
	}
	cout<<"\n No of dig = "<<d<<endl;
	cout<<"\n Sum of dig = "<<sum;
	
}
