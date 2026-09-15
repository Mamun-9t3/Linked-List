#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    struct node* prev;
};

void add_to_list(struct node** head,int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data = data;
    temp->link= NULL;

    *head = temp;
    
};

int main(){
struct node*head = NULL;
add_to_list(&head, 45);

// while(head != NULL){
    printf("%d", head->data);
// }

return 0;
}