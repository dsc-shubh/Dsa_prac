#include<stdio.h>
#include<stdlib.h>

struct node
{
int d;
struct node *next;
struct node *prev;
};

struct node *Create(int , struct node*);
void print(struct node*);
struct node *add(int ,struct node*);
void rev(struct node*);
struct node *add_start(int ,struct node*);

void main(){
struct node *head;
printf("\nEnter Choice");
int ch,data;
int flag=1;
while(flag){
printf("\n1.Create\n2.Add\n3.Print\n4.Print Reverse\n5.Add at start\n6.Exit ");
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

case 4:rev(head);
break;

case 5:printf("\nEnter Data");
scanf("%d",&data);
head=add_start(data,head);
break;

case 6:flag=0;
break;


default:printf("\nTry Again");

}
}
}

struct node *Create(int d, struct node* n){

struct node *temp=(struct node*)malloc(sizeof(struct node*));
temp->d=d;
temp->next=NULL;
temp->prev=NULL;
return temp;
}

struct node *add(int d, struct node *h){

struct node *temp,*t;
temp=(struct node*)malloc(sizeof(struct node));
temp->d=d;
t=h;
while(t->next!=NULL)
t=t->next;
t->next=temp;
temp->next=NULL;
temp->prev=t;

return h;
}


void print(struct node *h){
struct node *t;
t=h;
while(t!=NULL){
printf("%d ",t->d);
t=t->next;
}
}


void rev(struct node *h){
struct node *t;
t=h;
while(t->next!=NULL)
t=t->next;

do{
printf("%d ",t->d);
t=t->prev;
}while(t!=NULL);	

}

struct node *add_start(int d,struct node *h){
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->d=d;
temp->next=h;
h->prev-temp;
temp->prev=NULL;
return temp;


}












