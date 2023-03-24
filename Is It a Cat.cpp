#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    string a;
    int n,j,temp=0,i=0;
    cin>>a;
    for(j=0;a[j]!='\0';j++)
    {
        if(a[j]!='m'&&a[j]!='M'&&a[j]!='o'&&a[j]!='O'&&a[j]!='e'&&a[j]!='E'&&a[j]!='w'&&a[j]!='W')
        {
            cout<<"NO";
            return 0;
        }
    }
    if(a[j-1]=='w'||a[j-1]=='W')
    {
    while(a[i]!='\0')
    {
        n=a[i];
        if(temp==0)
        {
            if(n==77||n==109)
            {
                temp=n;
                i++;
                continue;
            }
        }
        else if(temp==77||temp==109)
        {
            if(n==77||n==109||n==69||n==101)
            {
                temp=n;
                i++;
                continue;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(temp==69||temp==101)
        {
            if(n==69||n==101||n==79||n==111)
            {
                temp=n;
                i++;
                continue;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(temp==79||temp==111)
        {
            if(n==79||n==111||n==87||n==119)
            {
                temp=n;
                i++;
                continue;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(temp==87||temp==119)
        {
            if(n==87||n==119)
            {
                temp=n;
                i++;
                continue;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        
    }
    }
    else{ cout<<"NO";
    return 0;}
    cout<<"YES";
    return 0;
}
