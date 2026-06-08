//WAP to create two maps print m1 is big if the highest freq of m1 is greater than m2 otherwise print m2
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map <int,int> m1;
    unordered_map <int,int> m2;
    int n1;
    cout<<"Enter number of first element";
    cin>>n1;
    int n2; 
    cout<<"Enter number of Second element";
    cin>>n2;
     int value1;
     int value2;
    for(int i=0; i<n1; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>value1;
        m1[value1]++;
    }
    for(int i=0; i<n2; i++){
        cout<<"Enter the value of element "<<i+1<<": ";
        cin>>value2;
        m2[value2]++;
    }
    
}