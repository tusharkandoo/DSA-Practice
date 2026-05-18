#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> s1;
    set<int> s2;
    set <int> s3;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    for(int i=1;i<=n;i++){
        cin>>x;
        s2.insert(x);
    }
    for(int v:s1){
        int c=s2.count(v);
        if (c==1)
        s3.insert(v);

   
}