// StackDynamically
#include <iostream>
using namespace std;

class node{
public:
	int data;
	char name[20];
	node* next;
	node(int d,char n[]){
		data=d;
		strcpy(name,n);
		next=NULL;
	}
};

node* head=NULL;
node* tail=NULL;

void push(int d){
	node* n=new node(d);
	if(head==NULL){
		head=n;
		tail=n;
		cout<<"First node inserted successfully "<<d<<endl;
	}
	else{
		n->next=head;
		head=n;
		cout<<"Node inserted successfully "<<d<<endl;

	}

}

void pop(){
	if(head==NULL){
		cout<<"Stack Underflow"<<endl;
		return;
	}
	else if(head==tail){
		int val=head->data;
		delete head;
		head=tail=NULL;
		cout<<"Deleting element "<<val<<endl;
	}
	else{
		int val=head->data;
		node* temp=head;
		head=head->next;
		delete temp;
		cout<<"Deleting element "<<val<<endl;
	}
}



int main(){

	push(0);
	push(1);
	push(2);
	push(3);
	pop();
	pop();
	pop();
	pop();
	pop();


	return 0;
}