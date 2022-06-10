#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int value;
    struct list *next;     			            //address of the next item of the list
}list;


list *create(){

    list *new = (list *)malloc(sizeof(list));   //cuz malloc is a function that returns a void type pointer
    return new;
}

list *insert_in_begining(int new_value, list *l){

    list *new_item = create();                      //create an item for the list
    new_item->value = new_value;                    //add the value passed to the item of the list

    if(l == NULL){
        l = new_item;                           //l appoints to the initial item address
        new_item->next = NULL;
    }
    else{
        new_item->next = l;
        l = new_item;
    }

    return l;
}

void print(list *l)
{
    list *aux = l;
    while(aux != NULL){
        printf("%d\n",aux->value);
        aux=aux->next;
    }
}


int main(){

    list *l = NULL; //a variable that initially appoints to null, but if we add an item
                    //it will appoints to the initial item address.
    l = insert_in_begining(3, l);
    l = insert_in_begining(7, l);
    l = insert_in_begining(1, l);
    print(l);
    return 0;
}

