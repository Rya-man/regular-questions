#include<iostream>
#include<ctype.h>
#include<iomanip>
using namespace std;
#include<string.h>
char decode(string a,int i)
{
    if(isalpha(a[i]))
    return a[i];
}
int main()
{
    char a[100];
    cin>>a;
    cout<<"\n\n\n";
    //cout<<sizeof(a);
    for(int i=0;a[i]!='\0';i++)
    {
        //cout<<a[i];
        cout<<decode(a,i);
    }
}
//INPUT:  H7e#5^%1y!5(9h6o3w6$3a6r7e6y8o6u7
//INPUT:  F7u5^%1c!5(9k6Y3o6$3u6A7n6d8Y6o7u3242545r.';[;M4813o;;;;;.m
