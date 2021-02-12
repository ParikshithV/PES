#include <stdio.h>

#define max 5

struct stackStr{
    int stack[max];
    int top;
};

typedef struct stackStr STACK;
STACK s;

//int stack[max], top;
void display();
void push();
int pop();

int main() {
  int i = 0;
  int choice=0, ret;
  s.top=-1;

  while(1){
    printf("\nEnter choice\n");
    printf("1: Display\n");
    printf("2: Push\n");
    printf("3: Pop\n");
    scanf("%d",&choice);

    switch (choice) {
      case 1:
        display();
      break;
      case 2:
        printf("Enter element to insert: " );
        scanf("%d",&i);
        push(i);
      break;
      case 3:
        ret=pop();
        if(ret==-1)
          printf("No element to pop");
        else
          printf("Element removed");
      break;
      default: printf("Invalid choice" );
      break;
    }
  }
  return 0;
}

void display(){
  int i=0;
  if (s.top==-1){
    printf("stack is empty\n");
    return;
  }
  for (int i = s.top; i >= 0; i--) {
    printf("\n%d",s.stack[i]);
  }
}

void push(int ele){
  if(s.top==max-1){
    printf("Stack overflow\n");
    return;
  }
  s.top++;
  s.stack[s.top]=ele;
}

int pop(){
  int deletedi;
  if (s.top==-1){
    printf("stack underflow, ");
    return -1;
  }
  deletedi=s.stack[s.top];
  s.top--;
  return deletedi;
}
