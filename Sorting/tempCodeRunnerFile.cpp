int countAndMerge(int arr[],int l,int m,int r)
{
    int n1=m-l+1,n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        right[i]=arr[m+i+1];
    //Merge the two sorted array parts
    int i=0,j=0,k=l;
    int res=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else    
        {
            arr[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    return res;
}

int countInv(int arr[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        res=res+countInv(arr,l,m);
        res=res+countInv(arr,m+1,r);
        res=res+countAndMerge(arr,l,m,r);
    }
    return res;
}