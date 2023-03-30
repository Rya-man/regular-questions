//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long minimumInteger(int N, vector<int> &A) {
        // code here
        long long int S=0;
        for(int i=0;i<N;i++)
        {
            S=S+A[i];
            
        }
        long long B[N];
        for(int i=0;i<N;i++)
        {
            B[i]=A[i];
        }
        long long min=LLONG_MAX;
        for(int i=0;i<N;i++)
        {
            //min=min?min:A[i];
            if(S<=N*B[i])
            {
                continue;
            }
            else
            B[i]=LLONG_MAX;
        }
        for(int i=0;i<N;i++)
        {
            min=min<B[i]?min:B[i];
        }
        return min;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.minimumInteger(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
