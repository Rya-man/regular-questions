//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
    int min,temp;
    min=INT_MAX;
       for(int i=0;i<N;i++)
       {
           if(cur>pos[i])
           {
                temp=(cur-pos[i])*time[i];
            }
            else
            {
                temp=(pos[i]-cur)*time[i];
            }
           min=min<=temp?min:temp;
           
       }
      // min=0-min;
       return min;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,cur;
        cin>>N>>cur;
        vector<int> pos(N),time(N);
        for(int i=0;i<N;i++){
            cin>>pos[i];
        }
        for(int i=0;i<N;i++){
            cin>>time[i];
        }
        Solution ob;
        cout<<ob.minimumTime(N,cur,pos,time)<<endl;
    }
}
// } Driver Code Ends
