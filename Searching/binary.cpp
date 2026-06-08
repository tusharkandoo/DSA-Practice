#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	cin>>a[i];
	int item;
	int c =0;
	cin>>item;
	int beg=0;
	int end =n-1;
	for(int t=beg;t<=end;t++){
	int mid = (beg+end)/2;
	if ( a[mid]==item )
	{
	    cout<<"item found"<<mid;
	    c++;
	    break;
	}
	else {
	    if(a[mid]<item)
	    beg=mid+1;
	    else
	    end=mid-1;
    	}
  if (c==0){
      cout<<"not found";
      break;
  }
	}
return 0;
}
