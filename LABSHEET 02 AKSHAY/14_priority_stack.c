
#include <stdio.h>
struct Task{int id,prio;};
struct Task stack[10];int top=-1;
void push(int id,int p){stack[++top].id=id;stack[top].prio=p;}
void pop(){if(top==-1){printf("Empty\n");return;}int max=0;for(int i=1;i<=top;i++)if(stack[i].prio>stack[max].prio)max=i;
printf("Exec Task%d\n",stack[max].id);for(int i=max;i<top;i++)stack[i]=stack[i+1];top--;}
int main(){push(1,2);push(2,5);push(3,5);pop();pop();pop();pop();return 0;}
