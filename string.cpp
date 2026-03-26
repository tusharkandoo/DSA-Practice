#include<iostream>
using namespace std;
int main()
{
    char S1[6]={ 'h','e','l','l','o','\0'};
    for(int i=0; S1[i]!='\0'; i++)
    {
        cout<<""<<S1[i];
    }
    return 0;

}