#include<bits/stdc++.h>
using namespace std;
int fib(int n){
if (n==1) return 1;
if(n==0) return 0;
return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        cout<<fib(i)<<endl;
    }
}