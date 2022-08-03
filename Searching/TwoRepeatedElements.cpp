// You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

// Example 1:

// Input:
// N = 4
// array[] = {1,2,1,3,4,3}
// Output: 1 3
// Explanation: In the given array, 
// 1 and 3 are repeated two times.
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
vector<int> twoRepeated (int arr[],int n)
{
    //X and Y be the two elements
    //M=X+Y=(n*(n+1)/2)-S
    //N=XY=n!/P
    //X-Y=(X+Y)^2-4*X*Y=M^2-4N
    //X=(M+M^2-4N)/2
    //Y=N/X;
    vector<int> v;
    int P=1,S=0,X,Y,M,N,K;
    for(int i=0;i<n;i++)
    {
        S=S+arr[i];
        P=P*arr[i];
    }
    n-=2;
    M=S-(n*(n+1)/2);
    N=P/fact(n);
    int D=sqrt((M*M)-(4*N));
    X=(M+D)/2;
    Y=N/X;
    // cout<<M<<" "<<N<<" "<<D<<" "<<X<<" "<<Y;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==X)
        {
            K=arr[i];
            break;
        }
    }
    v.push_back(K);
    v.push_back(N/K);
    // cout<<X<<" "<<;
    return v;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    // cout<<"EXECUTED";        
    vector<int> v=twoRepeated(arr,n);
    cout<<v[0]<<" "<<v[1]<<endl;
    // cout<<v[0]<<" "<<v[1]<<endl;
    return 0;
}
