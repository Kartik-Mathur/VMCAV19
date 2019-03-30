// LinkedList
#include <iostream>
using namespace std;
// --------- BLUEPRINT ---------
class node{
public:
	int data;
	node* next;

	node(int d){
		data=d;
		next=NULL;
	}

};

node* head=NULL;
node* tail=NULL;

void insertAtBeg(int d){
	node* n=new node(d);
	if(head==NULL){
		head=n;
		tail=n;
		// cout<<"First node inserted successfully";
	}
	else{
		n->next=head;
		head=n;
		// cout<<"Node inserted successfully";

	}
}

void insertAtLast(int d){
	node* n=new node(d);
	if(head==NULL){
		head=tail=n;
		// cout<<"First node insereted successfully";

	}
	else{
		// cout<<"node insereted successfully";
		tail->next=n;
		tail=n;
	}
}

void DeleteAtBeg(){
	if(head==NULL){
		return;
	}
	else if(head==tail){
		delete head;
		head=tail=NULL;
	}
	else{
		node* temp=head;
		head=head->next;
		delete temp;
	}


}


int main(){

	insertAtBeg(0);
	insertAtBeg(1);
	insertAtBeg(2);
	insertAtBeg(3);
	insertAtLast(4);
	insertAtLast(5);
	insertAtLast(6);
	insertAtBeg(7);
	DeleteAtBeg();
	DeleteAtBeg();

	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<endl;



	return 0;
}