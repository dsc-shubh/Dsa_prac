#include<stdio.h>
#include<stdlib.h>

struct binary_tree{
int d;

struct binary_tree *left;
struct binary_tree *right;

};

struct binary_tree *Insert(int,struct binary_tree*);
void inorder(struct binary_tree*);
void preorder(struct binary_tree*);
void postorder(struct binary_tree*);


void main(){

struct binary_tree *root=NULL;


int flag=1,ch,d;
while(flag){
printf("\nEnter Choice::\n1.Insert\n2.inorder traversal\n3.preorder\n4.postorder\n5.exit");
scanf("%d",&ch);

switch(ch){
case 1:printf("\nEnter data::");
scanf("%d",&d);
root=Insert(d,root);
break;

case 2:inorder(root);
break;

case 3:preorder(root);
break;

case 4:postorder(root);
break;

case 5:flag=0;
break;

default:printf("\nTry Again\n");

}
}
}


struct binary_tree *Insert(int d,struct binary_tree *r){
if(r==NULL)
{
r=(struct binary_tree*)malloc(sizeof(struct binary_tree));
r->d=d;
r->right=NULL;
r->left=NULL;
}

else if(d<r->d)
r->left=Insert(d,r->left);

else if(d>r->d)
r->right=Insert(d,r->right);
else
printf("\nduplicate key\n");

return r;
}



void inorder(struct binary_tree *r){
if(r==NULL)
return;

inorder(r->left);
printf("%d",r->d);
inorder(r->right);


}

void preorder(struct binary_tree *r){
if(r==NULL)
return;

printf("%d",r->d);
preorder(r->left);
preorder(r->right);


}

void postorder(struct binary_tree *r){
if(r==NULL)
return;

postorder(r->left);
postorder(r->right);
printf("%d",r->d);


}
























