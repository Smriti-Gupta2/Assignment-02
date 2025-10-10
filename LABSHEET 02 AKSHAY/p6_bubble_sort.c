#include <stdio.h>
int main(){int a[10],n,i,j,temp,swaps;printf("Enter size: ");scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n-1;i++){swaps=0;for(j=0;j<n-i-1;j++){if(a[j]>a[j+1]){temp=a[j];a[j]=a[j+1];a[j+1]=temp;swaps=1;}}
if(!swaps)break;}
for(i=0;i<n;i++)printf("%d ",a[i]);return 0;}