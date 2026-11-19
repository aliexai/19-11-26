#include<bits/stdc++.h>
using namespace std;
int factorial(int a){
	int fac = 1;
	for(a;a>0;a--){
		fac = fac * a;
		if (a == 1){
		return fac;}
	}
}
int main(){
	int fac_number =0;
	cout<<"Enter a Number for Factorial :";
	cin>>fac_number;
	int x  = fac_number/10;
	int y = x/10;
	int z = fac_number%10;
	int q = y%10;
	int a = factorial(y);
	int b = factorial(z);	
	int c = factorial(q);
	int result = a + b + c;
	if (result == fac_number){
		cout<<"Strong Number ";
	}
	else{
		cout <<result;
		cout<<"Not a Strong Number ";
	}
}
