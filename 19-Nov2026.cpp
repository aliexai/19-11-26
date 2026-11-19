#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Number : ";
	cin>>a;
	cout<<"Enter Number : ";
	cin>>b;
	while(a != b){
	cout<<"Enter Number : ";
	cin>>a;
	cout<<"Enter Number : ";
	cin>>b;
	}
	cout<<"Input Stopped Because of same consecutive numbers !";
}
