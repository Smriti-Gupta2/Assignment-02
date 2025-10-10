
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{char url[50];struct Node*next;};
struct Node*top=NULL;
void push(char*url){struct Node*new=(struct Node*)malloc(sizeof(struct Node));strcpy(new->url,url);new->next=top;top=new;}
void pop(){if(!top){printf("No history\n");return;}printf("Back from %s\n",top->url);struct Node*tmp=top;top=top->next;free(tmp);}
void display(){struct Node*cur=top;while(cur){printf("%s ",cur->url);cur=cur->next;}printf("\n");}
int main(){push("A.com");push("B.com");display();pop();display();pop();pop();return 0;}
