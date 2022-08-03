//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gf(int t1,int t2,int N)
    {
        if(N>=1)
        {
        int t3=(t1*t1)-t2;
        cout<<t3<<" ";
        gf(t2,t3,N-1);
        }
       
    }
    void gfSeries(int N)
    {
        cout<<0<<" "<<1<<" ";
        gf(0,1,N-2);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends