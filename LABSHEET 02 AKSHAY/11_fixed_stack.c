
#include <stdio.h>
#define SIZE 5
int stack[SIZE],top=-1;
void push(int x){if(top==SIZE-1){printf("Overflow\n");}else{stack[++top]=x;}}
void pop(){if(top==-1){printf("Underflow\n");}else{printf("Popped %d\n",stack[top--]);}}
void display(){for(int i=0;i<=top;i++)printf("%d ",stack[i]);printf("\n");}
int main(){push(10);push(20);display();pop();display();pop();pop();return 0;}
