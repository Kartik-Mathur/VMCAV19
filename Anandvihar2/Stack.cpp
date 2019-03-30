// Stack
#include <iostream>
using namespace std;

void push(int stack[],int N,int &top,int val){
	if(top==N-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stack[top]=val;
		cout<<"Inserted data successfully : "<<val<<endl;
	}

}

void pop(int stack[],int N,int &top){
	if(top==-1){
		cout<<"UnderFlow"<<endl;
	}
	else{
		int val=stack[top];
		top--;
		cout<<"Deleting Element "<<val<<endl;
	}

}



int main(){
	int stack[3];
	int N=3;
	int top=-1;

	push(stack,N,top,1);
	push(stack,N,top,2);
	push(stack,N,top,3);
	push(stack,N,top,4);
	pop(stack,N,top);
	pop(stack,N,top);
	pop(stack,N,top);
	pop(stack,N,top);


	return 0;
}