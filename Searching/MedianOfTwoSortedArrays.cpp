#include<bits/stdc++.h>
using namespace std;
double getMed(int a1[],int a2[],int n1,int n2)
{
    int begin1=0,end1=n1;
    while(begin1<=end1)
    {
        //Number of elements to be taken from first array
        int i1=(begin1+end1)/2;
        //Number of elements to be taken from second array
        int i2=(n1+n2+1)/2-i1;
        //First element of right half of first array
        int min1=(i1==n1)?INT_MAX:a1[i1];
        //Last element of left half of first array
        int max1=(i1==0)?INT_MIN:a1[i1-1];
        //First element of right half of second array
        int min2=(i2==n2)?INT_MAX:a2[i2];
        //Last element of left half of second array
        int max2=(i2==0)?INT_MIN:a2[i2-1];
        if(max1<=min2 && max2<=min1)
        {
            //Sum of n1 and n2 is even
            if((n1+n2)%2==0)
                return (double)(max(max1,max2)+min(min1,min2))/2;
            //Sum of n1 and n2 is odd
            // return (double)(min(min1,min2));
            return (double)(max(max1,max2));
        }
        else if(max1>max2)
            end1=i1-1;
        else
            begin1=i1+1;

        
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
        cin>>a1[i];
    for(int i=0;i<n2;i++)
        cin>>a2[i];
    double res=getMed(a1,a2,n1,n2);
    cout<<res<<endl;
    return 0;
}