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
            p->next=NULL;
        }
    }
    temp=head;
    printf("%d",head->data);
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    return 0;
}
