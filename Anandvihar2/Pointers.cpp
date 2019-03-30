#include <iostream>
using namespace std;

int main(){
	int a[]={1,2,3,4};
	int *ptr=a;
	cout<<*ptr<<endl;
	cout<<++*ptr<<endl;
	cout<<*ptr++<<endl;
	cout<<++*ptr++<<endl;
	// int a=10;
	// int *ptr=&a;

	// cout<<*ptr++<<endl;
	// // cout<<val<<endl;
	// cout<<a<<endl;



	return 0;
}