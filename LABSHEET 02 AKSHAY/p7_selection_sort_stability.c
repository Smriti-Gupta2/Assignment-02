#include <stdio.h>
struct s{int r,m;};
int main(){struct s a[5]={{1,90},{2,80},{3,90},{4,70},{5,60}};int i,j,min;struct s t;
for(i=0;i<5-1;i++){min=i;for(j=i+1;j<5;j++)if(a[j].m<a[min].m)min=j;t=a[i];a[i]=a[min];a[min]=t;}
for(i=0;i<5;i++)printf("%d %d\n",a[i].r,a[i].m);}