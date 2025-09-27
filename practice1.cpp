#include<iostream>
#include<string>
using namespace std;

void isPrime(int fNumber,int sNumber){
	int i,j,x=0;
	for(int i=sNumber;i<=fNumber;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				x++;
				break;
				}
			}
		if(x==0)
			cout<<i<<" ";
		else
			x=0;	
	}
	
}			
int main()
{
	int a,b;
	cout<<"enter your first number:";
	cin>>a;
	cout<<"enter your second number:";
	cin>>b;
	if(a<b){
		int c=a;
		a=b;
		b=c;
	}
	if(a==0||b==0)
		cout<<"game over";
	else
		isPrime(a,b);
return 0;
}
