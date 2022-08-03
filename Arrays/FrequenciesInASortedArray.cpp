#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n)
{
    int freq=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            freq++;
        else
        {
            cout<<arr[i-1]<<" "<<freq<<endl;
            freq=1;
        }

    }
    cout<<arr[n-1]<<" "<<freq<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    freq(arr,n);
   
    return 0;
}