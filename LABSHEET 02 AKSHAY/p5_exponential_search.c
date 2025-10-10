#include <stdio.h>
int binary(int a[],int l,int h,int x){while(l<=h){int m=(l+h)/2;if(a[m]==x)return m;if(a[m]<x)l=m+1;else h=m-1;}return -1;}
int expo(int a[],int n,int x){if(a[0]==x)return 0;int i=1;while(i<n&&a[i]<=x)i*=2;if(i>n)i=n;return binary(a,i/2,n-1,x);}
int main(){int n=100,a[100];for(int i=0;i<n;i++)a[i]=i+1;int x=77;
printf("Found at %d\n",expo(a,n,x));}