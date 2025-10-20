// accending order.....
#include<stdio.h>
void bubblesort(int arr[],int n){
 int flag,temp;
 for(int i  =  0;i<n-1;i++){
    flag =0;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        return ;
    }
}
}

int main(){
    int arr[5]={45,56,89,78,1};
    int n =5;
    printf("Before the sorting : ");
    for(int i=0;i<=4;i++){
        printf("%d\t",arr[i]);
    }
    bubblesort(arr,n);
    printf("\n");
    printf("After sorting      : ");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
// decending order...

#include<stdio.h>
void bubblesort(int arr[],int n){
 int flag,temp;
 for(int i  =  0;i<n-1;i++){
    flag =0;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]<arr[j+1]){
            temp = arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            flag=1;
        }
    }
    if(flag==0){
        return ;
    }
}
}

int main(){
    int arr[5]={45,56,89,78,1};
    int n =5;
    printf("Before the sorting : ");
    for(int i=0;i<=4;i++){
        printf("%d\t",arr[i]);
    }
    bubblesort(arr,n);
    printf("\n");
    printf("After sorting      : ");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}