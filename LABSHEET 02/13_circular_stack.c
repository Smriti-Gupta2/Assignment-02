
#include <stdio.h>
#define SIZE 5
int buf[SIZE],top=-1;
void push(int x){top=(top+1)%SIZE;buf[top]=x;}
void display(){for(int i=0;i<SIZE;i++)printf("%d ",buf[i]);printf("\n");}
int main(){for(int i=1;i<=7;i++){push(i);display();}return 0;}
