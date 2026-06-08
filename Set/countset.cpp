// Given two strings s1 and s2 having length n and m print the count of characters from s1 which are  also present in s2. 


#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> s1;
    set <char> s2;
    set <char> s3;
    int N,M;
    cin>>N;
    cin>>M;
    char x;
    for(int i=1;i<=N;i++){
        cin>>x;
        s1.insert(x);
    }
    for(int i=1;i<=M;i++){
        cin>>x;
        s2.insert(x);
    }
   for (int v:s1){
    if(s2.find(v)!=s2.end()){
        s3.insert(v);
    }
   }
    cout<<s3.size()<<endl;


}

