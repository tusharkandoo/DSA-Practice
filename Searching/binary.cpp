#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,key;
	cout<<"Enter the number of elements";
	cin>>n;
	int arr[n];
	cout<<"Enter sorted  elements ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the key value to search";
	cin>>key;
	int low =0,high=n-1;
	int pos =-1;
	while (low<=high){
		int mid = low+(high-low)/2;
		if (arr[mid]==key){
			pos = mid+1;
			break;
		}
		else if (arr[mid]>key){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	if (pos !=-1){
		cout<<"Element Found at: "<<pos;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}