// CircularQueue
#include<iostream>
using namespace std;

class Queue{
public:
	int arr[10];
	int f;
	int r;
	int n;
	int cs;
	Queue(int size){
		n=size;
		cs=0;
		f=0;
		r=n-1;
	}

	void push(int d){
		if(cs==n){
			cout<<"Queue OverFLow"<<endl;
		}
		else{
			r=(r+1)%n;
			arr[r]=d;
			cs++;
			cout<<"Element inserted successfully "<<d<<endl;
		}
	}

	void pop(){
		if(cs>0){
			int val=arr[f];
			f=(f+1)%n;
			cs--;
			cout<<"Removing Element : "<<val<<endl;
		}
		else{
			cout<<"Queue UnderFlow"<<endl;
		}
	}

	// void show(){
	// 	if(r>f){
	// 		for(int i=f;i<=r;i++){
	// 			cout<<arr[i]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }
};

int main(){
	Queue q(4);

	q.push(0);
	q.push(1);
	q.push(2);


	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();





	return 0;
}

