#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max 10

int stack[max], top=-1;
void display(int []);
void push(int [], int);
int pop();

int main() {
  char expr[max], outputString, stringadd[max];
  printf("Enter expression: ");
  scanf("%s",&expr);
  int lim = strlen(expr), i, len, counter=0;
  for(i=0; i<lem+1; i++){
    if(isalpha(expr[i])){
      strcat(outputString,expr[i]);
      counter++;
    }
    else if(expr[i]=="("){
      push(stack, "(");
    }
    else if(expr[i]=="^"){
      push(stack, expr[i]);
    }
    else if(expr[i]=="/" || expr[i]=="*"){
      if (stack[top]=="+" || expr[i]=="-"){
        strcat(outputString,expr[i]);
        counter++;
      }
      else{
        top++;
        push(stack, top);
      }
    }
    else if(expr[i]==")"){
      while(stack[top]!="("){
        strcat(outputString,expr[i]);
        counter++;
        pop();
      }
    }
  }
  printf("Postfix expression is: %d",outputString);
  return 0;
}

void display(int stack[]){
  int i=0;
  if (top==-1){
    printf("stack is empty\n");
    return;
  }
  for (int i = top; i >= 0; i--) {
    printf("\n%d",stack[i]);
  }
}

void push(int stack[], int item){
  if(top==max-1){
    printf("\nStack full");
    return;
  }
  top++;
  stack[top]=item;
}

int pop(){
  int deletedi;
  if (top==-1){
    printf("stack is empty");
    return -1;
  }
}
