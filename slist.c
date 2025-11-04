#include<stdio.h>
#include<stdib.h>
struct Node{
int data;
struct Node{
int data;
struct Node*next;
};
int main(){
struct Node*head=NULL;
struct Node*head=NULL;
struct Node*newNode=NULL;
int n,i,value;
printf("enter number of nodes:");
scvanf("%d",&n);
for(i=0;i<n;i++)
{
newNode=(struct Node*)malloc(sizeof(struct Node));
printf("enter data for mode:",i+1);
scanf("%d",&value);
newNode->data=value;
newNode->next=NULL;
if(head==NULL){
head=newNode;
temp=head;
}else{
temp->next=newNode;
temp=temp->next;
}
}
printf("\nSingly linked List:");
temp=head;
while(temp!=NULL){
print("%d->",temp->date);
temp=temp->next;
}
printf("NULL\n");
return 0;
}

