#include<stdio.h>

void mergesort(int arr[],int l,int r)
{
    while(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid); //for left part
        mergesort(arr,mid+1,r); //for right part
        merge(arr,l,r,mid);
    }
}

void merge(int arr[],int r,int l,int mid)
{
    int left = mid-l+1;
    int right = r - mid;
    int leftarr[left];
    int rightarr[right];
    for(int i=0;i<left;i++)
    {
        leftarr[i] = arr[l+i];
    }
    for(int j= 0;j<right;j++)
    {
        rightarr[j]  = arr[mid+j+1];
    }
    int i = 0,j = 0, k=l;
    while (i<left && j<right)
    {
        if(leftarr[i] <= rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<left)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while(j<right)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }

}

void main()
{
    int arr[5]={56,25,32,14,2};
    int l = 0;
    int r = 5;
     int mid = 2;
    printf("before merge  sorting : ");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
 
    mergesort(arr,r,l);

    printf("after merge sorting : ");
      for(int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
}