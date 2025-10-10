
#include <stdio.h>
#include <string.h>
char history[5][50];int top=-1;
void save(char*s){if(top<4)strcpy(history[++top],s);}
void undo(){if(top==-1){printf("Nothing to undo\n");return;}printf("Undo to: %s\n",history[top--]);}
int main(){save("Hi");save("Hello");save("Hello World");undo();undo();undo();undo();return 0;}
