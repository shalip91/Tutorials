#include <stdio.h>
#include <stdlib.h>



// Struct
struct node{
    int value;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head){
    node_t *temporary = head;

    printf("\n");
    while(temporary != NULL){
        printf("%d ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *creat_node(int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *node_to_insert(node_t *head, node_t *node_to_insert){
    node_to_insert->next = head;
    return node_to_insert;
}

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while(tmp != NULL){
        if(tmp->value == value) return tmp;
        tmp = tmp->next;
    }  
    return NULL;
}

void insert_after_node(node_t *insert_after, node_t *newnode){
    newnode->next = insert_after->next;
    insert_after->next = newnode;
}


int main()
{
    node_t *tmp;
    node_t *head;

    for(int i=0; i<20; i++){
        tmp = creat_node(2*i);
        head = node_to_insert(head, tmp);
    }

    tmp = find_node(head, 22);
    printf("\nthe value found is: %d", tmp->value);

    insert_after_node(tmp, creat_node(99999));
    printlist(head);
    
    return 0;
}
