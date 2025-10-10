#include <stdio.h>
int main(){int a[10],n,i,x,low,high,mid;printf("Enter size: ");scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter number: ");scanf("%d",&x);
low=0;high=n-1;
while(low<=high){mid=(low+high)/2;
printf("low=%d high=%d mid=%d\n",low,high,mid);
if(a[mid]==x){printf("Found at %d\n",mid);return 0;}
else if(a[mid]<x)low=mid+1;else high=mid-1;}
printf("Not found\n");return 0;}