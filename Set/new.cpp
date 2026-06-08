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
        if(s2.find(v)!=s2.end()){   //it give the intersection of two sets   if we use == then it gives the difference of two sets
            s3.insert(v);
        }
    }
    for(int v:s3){
        cout<<v<<" ";
    }
}


// Given two strings s1 and s2 having length n and m print the count of characters from s1 which are  also present in s2. 

//Given an array of positive integer and another number K. Determine weather or not there exist two elements in the array whose sum is exactly K.



//Given an unsorted integer array M return the smallest positive integer that is not present in nums.