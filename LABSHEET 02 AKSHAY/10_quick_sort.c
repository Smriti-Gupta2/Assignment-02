
#include <stdio.h>
int cmp;
void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}
int partition(int arr[],int low,int high){
    int pivot=arr[low],i=low+1,j=high;
    while(1){
        while(i<=high&&arr[i]<=pivot){cmp++;i++;}
        while(j>=low&&arr[j]>pivot){cmp++;j--;}
        if(i<j){swap(&arr[i],&arr[j]);}else{swap(&arr[low],&arr[j]);return j;}
    }
}
void quicksort(int arr[],int low,int high){
    if(low<high){int pi=partition(arr,low,high);quicksort(arr,low,pi-1);quicksort(arr,pi+1,high);}
}
int main(){
    int arr1[]={3,7,2,5,1,9},n1=6;
    cmp=0;quicksort(arr1,0,n1-1);
    printf("Random array comparisons=%d\n",cmp);
    int arr2[]={1,2,3,4,5,6},n2=6;
    cmp=0;quicksort(arr2,0,n2-1);
    printf("Sorted array comparisons=%d\n",cmp);
    return 0;
}
