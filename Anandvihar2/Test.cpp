#include <iostream>
using namespace std;
int main() {

    int arr[] = {2,6,14,51}; 
    int *arptr=arr;
    cout<<"ARRAY : "<<endl;

    int value=*arptr; 

    cout<<value<<'\n'; 
    value=++*arptr++; 
    cout<<value<<'\n'; 
    value=*arptr;
    cout<<value<<'\n'; 
    value=*++arptr; 
    cout<<value<<'\n';

    cout<<endl<<"Pointer : "<<endl;
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    ++*p++;
    cout<<*p<<endl;

    return 0;
}
