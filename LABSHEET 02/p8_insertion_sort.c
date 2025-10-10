#include <stdio.h>
int main(){int a[6]={5,3,4,1,2,6},n=6,i,j,key;for(i=1;i<n;i++){key=a[i];j=i-1;
while(j>=0&&a[j]>key){a[j+1]=a[j];j--;}a[j+1]=key;
for(int k=0;k<n;k++)printf("%d ",a[k]);printf("\n");}}