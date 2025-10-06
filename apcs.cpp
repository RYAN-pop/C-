#include<iostream>
using namespace std;

void swapValue(int& a,int& b)
{
	int x=a;a=b;b=x;
}


int main()
{
	int num;
	cout<<"students numbers:";
	cin>>num;
	cout<<"their grades";
	int grades[num];
	for(int i=0;i<num;i++)
		cin>>grades[i];
	for(int i=0;i<num-1;i++)
	{
		
		if(grades[i]>grades[i+1])
		{
			//int x=grades[i];
			//grades[i]=grades[i+1];
			//grades[i+1]=x;
			swapValue(grades[i],grades[i+1]);
			i=0;
		}
	}
	for(int i=0;i<num;i++)
		cout<<grades[i]<<" "<<endl;
	
	
	if(grades[0]>=60)
		cout<<"all pass"<<endl;
	else if(grades[num]<=60)
		cout<<"all fail";
		
		
	else{
		int y;
		for(int i=0;i<num;i++){
			if(grades[i]<60)
				y=grades[i];
				
			else{
				cout<<"the lowest grade that pass:"<<grades[i]<<endl;
				break;
			}
		}
		cout<<"the highest grade that fail:"<<y<<endl;
	}
	
return 2;
}
