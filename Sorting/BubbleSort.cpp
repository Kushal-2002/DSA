#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
} 