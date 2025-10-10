#include <stdio.h>
#include <math.h>
#include <time.h>
int linear(int a[],int n,int x){for(int i=0;i<n;i++)if(a[i]==x)return i;return -1;}
int jump(int a[],int n,int x){int step=sqrt(n),prev=0;
while(a[(step<n?step:n)-1]<x){prev=step;step+=sqrt(n);if(prev>=n)return -1;}
while(a[prev]<x){prev++;if(prev==step||prev>=n)return -1;}
if(a[prev]==x)return prev;return -1;}
int main(){int n=1000,a[1000];for(int i=0;i<n;i++)a[i]=i+1;int x=777;
clock_t t=clock();printf("Linear=%d\n",linear(a,n,x));printf("Time=%f\n",(double)(clock()-t)/CLOCKS_PER_SEC);
t=clock();printf("Jump=%d\n",jump(a,n,x));printf("Time=%f\n",(double)(clock()-t)/CLOCKS_PER_SEC);}