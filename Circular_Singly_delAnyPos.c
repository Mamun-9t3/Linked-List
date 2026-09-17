#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
struct node * head;

void add_to_empty(int data){
    head = malloc(sizeof(struct node));
    head->data = data;
    head->link = head;
};



void print (struct node* temp){
    do {
        printf("%d", temp->data);
        temp = temp->link;

    }while(temp!= head);
}

void del_any_pos(int pos){
    struct node * temp = head;
    struct node * ptr;
   if(head == NULL){
    printf("LL is empty");
   }
   int i;
   for(i = 1;i<pos-1;i++){
    temp=temp->link;
    
}
ptr = temp->link;

if (ptr == head){
    printf("Invalid pos");
    return;
}
temp->link = ptr->link;
free(ptr);


}

int main(){

    add_to_empty(1);
    struct node*node2 = (struct node*)malloc(sizeof(struct node)); 
    struct node*node3 = (struct node*)malloc(sizeof(struct node)); 
    node2->data = 2;
    node3->data = 3;
    head->link = node2;
    node2->link = node3;
    node3->link = head;

    del_any_pos(2);

    struct node *temp;
    temp = head;
    print(temp);
}

