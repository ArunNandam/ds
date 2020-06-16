#include <stdio.h>
struct node{
    int data;
    struct node *next;
}*head;

int main()
{
    int n,i;
    scanf("%d",&n);
    head=NULL;
    struct node *temp,*p;
    for(i=0;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        int x;
        scanf("%d",&x);
        temp->data=x;
        temp->next=NULL;
        
        if(head==NULL){
            head=temp;
            p=head;
        }
        else{
            p->next=temp;
            p=p->next;
        }
    }
    //print(head);
    printrev(head);
    
    return 0;
}
void dele(int p){
    int i=1;
    struct node *t,*y;
    t=head;
    if(p==1){
    	head=t->next;
    	free(t);
	}else{
    while(i<p-1){
        t=t->next;
        i++;
    }
    
    y=t->next;
    t->next=y->next;
    free(y);
}
   print();
}
void print(struct node *temp){
    while(temp==NULL){
    	return;
    }
        printf("%d",temp->data);
        print(temp->next);
}
void printrev(struct node *temp){
    while(temp==NULL){
    	return;
    }
    printrev(temp->next); 
    printf("%d",temp->data);
        
}
