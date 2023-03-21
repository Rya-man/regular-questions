#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int tc,a[tc],b[tc],c[tc],d[tc],r[tc],temp=0;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for(int i=0;i<tc;i++)
    {
        if(b[i]>d[i])
        {
            r[i]=-1;
            break;
        }
        if((d[i]-c[i])<(a[i]-b[i]))
        {
            r[i]=-1;
            break;
        }
        int m=d[i]-b[i];
        temp=a[i]+m;
        if(temp<c[i])
        {
            r[i]=-1;
            break;
        }
        int n=temp-c[i];
        r[i]=m+n;
    }
    cout<<endl;
    for(int i=0;i<tc;i++)
    {
        cout<<r[i]<<endl;
    } 
    return 0;
}
