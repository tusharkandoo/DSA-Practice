// WAP to input two sets of integers and print the intersection of the two sets.
#include <bits/stdc++.h>
using namespace std;
int main() {
    set <int> s1;
    set <int> s2;
    set <int> s3;
    set <int> s4;
    set <int> s5;
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
    //for(int v:s1){
        //int c=s2.count(v);
       // if (c==1)
           // s3.insert(v);
    //}
    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    for(int v:s3){
        cout<<v<<" ";
    }
    cout<<endl;
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s4,s4.begin()));
    for(int v:s4){
        cout<<v<<" ";
    }
    cout<<endl;
    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s5,s5.begin()));
    for(int v:s5){
        cout<<v<<" ";
    }
    cout<<endl;
}


