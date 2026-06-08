// given an array with n integres print the product of count of unique and non unique elements
// no of elements 11
// input 10 2 3 4 2 5 6 4 2 3 6
// output 8
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int unique=0;
    int nonunique=0;
    for(auto it:m){
        if(it.second==1){
            unique++;
        }
        else{
            nonunique++;
        }
    }
    cout<<unique*nonunique<<endl;
    return 0;
}


