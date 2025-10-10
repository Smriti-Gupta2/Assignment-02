#include <stdio.h>
int binary(int a[],int n,int x){int l=0,h=n-1,mid,steps=0;
while(l<=h){steps++;mid=(l+h)/2;if(a[mid]==x)return steps;if(a[mid]<x)l=mid+1;else h=mid-1;}
return steps;}
int interpolation(int a[],int n,int x){int l=0,h=n-1,pos,steps=0;
while(l<=h&&x>=a[l]&&x<=a[h]){steps++;pos=l+((double)(h-l)/(a[h]-a[l]))*(x-a[l]);
if(a[pos]==x)return steps;if(a[pos]<x)l=pos+1;else h=pos-1;}
return steps;}
int main(){int n=100,a[100];for(int i=0;i<n;i++)a[i]=i+1;int x=77;
printf("Binary steps=%d\n",binary(a,n,x));
printf("Interpolation steps=%d\n",interpolation(a,n,x));}