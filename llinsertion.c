
#include <stdio.h>
struct node{
    int data;
    struct node*next;
}*head;
/*void insertatstart(){
   int k1;
   scanf("%d",&k1);
   struct node *temp=(struct node*)malloc(sizeof(struct node));
   temp->data=k1;
   temp->next=head;
   head=temp;
   struct node *p=head;
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
   
}*/
void insertatnpos(int pos){
    int i=1;
    struct node *x,*y,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int k;
    scanf("%d",&k);
    x=head;
    temp->data=k;
    while(i<pos-1){
        x=x->next;
}
    y=x->next;
    x->next=NULL;
    x->next=temp;
    temp->next=y;
    print();

}
int main()
{
    int n,i;
    scanf("%d",&n);
    head=NULL;
    struct node *temp,*p;
    for(i=0;i<n;i++){
        temp=(struct node*)malloc(sizeof(struct node));
        int k;
        scanf("%d",&k);
        temp->data=k;
        if(head==NULL){
            head=temp;
            p=temp;
        }
        else{
            p->next=temp;
            p=p->next;
        }
    }
    int pos;
    scanf("%d",&pos);
    //insertatstart();
    insertatnpos(pos);
    
}
void print(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

