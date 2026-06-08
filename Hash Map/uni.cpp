//You are given an array of an integers of size n print the coount of unique elements and non unique elements
// A={1,2,3,11,2,3,4,5,7,2,1,3,6,9,10}
//find out the sum of all the unique elements and sum of non unique elements in the array
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    unordered_map <int,int> m;
    int value;
    for(int i=0; i<n; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>value;
        m[value]++;
    }
    int uni=0, nonuni=0;
    int unique=0,nonunique=0;
    for(auto i:m){
        if(i.second==1){
            unique += i.first;
            uni++;
        }
        else{
            nonunique += i.first;
            nonuni++;
        }
    }
    cout<<"Sum of unique elements: "<<unique<<endl;
    cout<<"Count of unique elements: "<<uni<<endl;
    cout<<"Sum of non-unique elements: "<<nonunique<<endl;
    cout<<"Count of non-unique elements: "<<nonuni<<endl;
}
