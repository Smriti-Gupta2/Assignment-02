
#include <stdio.h>
#define SIZE 10
int arr[SIZE],top1=-1,top2=SIZE;
void push1(int x){if(top1+1==top2){printf("Overflow\n");return;}arr[++top1]=x;}
void push2(int x){if(top2-1==top1){printf("Overflow\n");return;}arr[--top2]=x;}
void pop1(){if(top1==-1){printf("Under1\n");return;}printf("Pop1=%d\n",arr[top1--]);}
void pop2(){if(top2==SIZE){printf("Under2\n");return;}printf("Pop2=%d\n",arr[top2++]);}
void display(){for(int i=0;i<SIZE;i++)printf("%d ",arr[i]);printf("\n");}
int main(){push1(1);push2(9);push1(2);push2(8);display();pop1();pop2();return 0;}
