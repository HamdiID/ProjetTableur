#include <stdio.h>
#include "liste.h"


void printInt(void *ptr){
int*ptrInt = (int*)ptr;
printf("%d",*ptrInt);
}

int main(){

node_t *l = list_create();

int a = 2;
int b = 3;

l=list_insert(l,&a);
l=list_insert(l,&b);
list_print(l,&printInt);

}

