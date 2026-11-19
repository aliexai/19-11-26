#include<iostream>
using namespace std;
int main(){
	int base_input,base,octal,process;
	cout<<"Enter the Base Number :";
	cin>>base_input;
	base = base_input/10;
	octal = base_input/8;
	if ( base_input%10==0){
		cout<<"Equivalent Base!";
	}
	else if( base_input%8==0) {
		cout<<"Equivalent Octal!";
	}
	else{
		cout<<"Not Equivalent ";
	}
	
}
