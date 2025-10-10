#include <stdio.h>
void merge(int a[],int l,int m,int r){int n1=m-l+1,n2=r-m,L[50],R[50],i,j,k;
for(i=0;i<n1;i++)L[i]=a[l+i];for(j=0;j<n2;j++)R[j]=a[m+1+j];
i=0;j=0;k=l;while(i<n1&&j<n2){if(L[i]<=R[j])a[k++]=L[i++];else a[k++]=R[j++];}
while(i<n1)a[k++]=L[i++];while(j<n2)a[k++]=R[j++];
printf("Merged %d to %d\n",l,r);}
void sort(int a[],int l,int r){if(l<r){int m=(l+r)/2;sort(a,l,m);sort(a,m+1,r);merge(a,l,m,r);}}
int main(){int a[6]={5,2,4,6,1,3},n=6,i;sort(a,0,n-1);for(i=0;i<n;i++)printf("%d ",a[i]);}