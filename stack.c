#include<stdio.h>
#define Max 5
int stack[Max];
int top=-1;
void push(int value){
if(top==Max-1){
printf("Stack overflow! Cannot push %d\n",value);
}
else{
stack[++top]= value;
printf("%d pushed to stack\n",value);
}
}
void pop(){
if(top==-1){
printf("Stack underflow! cannot pop\n");
}else{
printf("%d popped from stack\n",stack[top--]);
}
}
void display(){
if(top==-1){
printf("Stack is empty");
}else{
printf("Stack elements:");
for(int i=top;i>=0;i--){
printf("%d",stack[i]);
}
printf("\n");
}
}
int main(){
int choice,value;
while(1){
 printf("\n-Stack Menu-\n");
printf("1.Push\n2.Pop\n3.Dispaly\n4.Exit\n");
printf("enter your choice");
scanf("%d",&choice);
switch(choice){    
case 1:
printf("Enter value to push:");
scanf("%d",&value);
push(value);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
return 0;
default:
printf("Invalid choice! Try again.\n");
}
}
}


