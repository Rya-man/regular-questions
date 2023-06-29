/{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool solve(int n)
    {
        if(n==1||n==7)
        return true;
        else if(n==2||n==3||n==4||n==5||n==8||n==9)
        return false;
        int sum = 0;
        do{
                sum=sum +((n%10)*(n%10));
                n/=10;
            }while(n>0);
        if(solve(sum))
        return true;
        return false;
    }
    int nextHappy(int N){
        int n=++N;
        while(n<=1e5)
        {
            if(solve(n))
            return n;
            n++;
        }
        return -1;
        // code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
