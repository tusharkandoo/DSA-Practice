//WAP to give the elements which are present in s2 but not in s1

#include <bits/stdc++.h>
using namespace std;
set <char> s1;
set <char> s2;
char x;
int N,M;
cin>>N>>M;
for (int i=1;i<=N;i++){
    cin>>x;
    s1.insert(x)
}
for (int i=1;i<=M;i++){
    cin>>x;
    s2.insert(x);
}
set <char> s3;
for (int v:s2){
    if(s1.find(v)==s1.end()){
        s3.insert(v);
    }
}
 
