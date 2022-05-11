#include<iostream>
using namespace std;

int main(){
	
	int N,search,i;
	cout<<"enter the size of array";
	cin>>N;
	cout<<"enter the number you want to search in the array";
	cin>>search;
	int arr[N];
	cout<<"enter the numbers:\n";
	for(i=0;i<=N;i++){
		cin>>arr[i];
		if(arr[i]==search){
			cout<<"\n"<<arr[i]<<"is found at laction "<<i+1;
			break;
		}
	}
	if(i==N){
		cout<<search<<"\nis not found in the array";
	}
	
	return 0;
}

