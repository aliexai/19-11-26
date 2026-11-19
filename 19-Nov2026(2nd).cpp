#include<iostream>
using namespace std;
int main(){
	int value,a=1,b=2,x = 1;
	cout<<"Enter the Number for Nth Value :";
	cin>>value;
	cout<<a<<" "<<b<<" ";
	while(x<=value){
		a = a+b;
		b = a + b;
		cout<<a<<" "<<b<<" ";
		x++;
	}
	
}
