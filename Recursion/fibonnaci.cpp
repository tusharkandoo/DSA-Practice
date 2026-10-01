#include<iostream>
#include<vector>
using namespace std;
vector<int> data(1000000);
int fib(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(data[n]==0)
        data[n]=fib(n-1)+fib(n-2);
    return data[n];
}
int main(){
    for(int i=1;i<=1000000;i++)
        cout<<i<<"th Fibonacci number is: "<<fib(i)<<endl;


}