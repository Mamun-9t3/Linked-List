#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
    struct node* prev;
};
struct node* head = NULL;

void createNode(int data){
    struct node * temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = temp;
    temp->prev = temp;
    head= temp;
};




int main(){
    createNode(1);
    // add_to_beg(2);
    printf("%d", head->data);
    return 0;
}