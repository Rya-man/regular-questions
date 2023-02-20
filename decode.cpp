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
//H7e#5^%1y!5(9h6o3w6$3a6r7e6y8o6u7
