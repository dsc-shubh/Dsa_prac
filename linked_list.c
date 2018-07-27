#include<stdio.h>
#include<stdlib.h>

struct node
{
int d;
struct node *n;
};

struct node *Create(int , struct node*);
void print(struct node*);
struct node *add(int ,struct node*);

void main(){
struct node *head;
printf("\nEnter Choice");
int ch,data;
int flag=1;
while(flag){
printf("\n1.Create\n2.Add\n3.Print\n4.Exit ");
scanf("%d",&ch);
switch(ch){
case 1:printf("\nEnter Data");
scanf("%d",&data);
head=Create(data,head);
break;

case 2:printf("\nEnter Data");
scanf("%d",&data);
head=add(data,head);
break;

case 3:print(head);
break;

case 4:flag=0;
break;


default:printf("\nTry Again");

}
}
}

struct node *Create(int d, struct node* n){

struct node *temp=(struct node*)malloc(sizeof(struct node*));
temp->d=d;
temp->n=NULL;
return temp;
}

struct node *add(int d, struct node *h){

struct node *temp,*t;
temp=(struct node*)malloc(sizeof(struct node));
temp->d=d;
t=h;
while(t->n!=NULL)
t=t->n;
t->n=temp;
temp->n=NULL;

return h;
}


void print(struct node *h){
struct node *t;
t=h;
while(t!=NULL){
printf("%d",t->d);
t=t->n;
}
}

