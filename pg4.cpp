#include <iostream>
using namespace std;
int main(){
	
	int n,mid,i;
	cout << "enter a number\n";
	cin >> n;
	mid = (n%2==0)? n/2 : n/2+1;
	/*
	if(n%2==0)
		mid = n/2;
	else
		mid = n/2+1;*/
	for(i=1;i<=mid;i++)
	{
		if(n-(i-1) == i)
			cout<<i;
		else
			cout<<n-(i-1)<<"\t"<<i<<"\t";
	}
		
		
		
}
