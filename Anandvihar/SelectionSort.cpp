// SelectionSort
#include <iostream>
using namespace std;

int main(){

	int a[]={5,3,2,0,1};
	int n=5;

	for(int index=0;index<=n-2;index++){
		int min_index=index;
		for(int j=index+1;j<n;j++){
			if(a[min_index]>a[j]){
				min_index=j;
			}
		}
		int temp=a[index];
		a[index]=a[min_index];
		a[min_index]=temp;
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}