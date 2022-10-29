#include <stdio.h>
#include "list.h"
int main() {
   List l;
    creatlist(&l);
    insertlist(&l,0,1);
    insertlist(&l,1,2);
    insertlist(&l,2,3);
    insertlist(&l,3,4);
    insertlist(&l,4,5);
    insertlist(&l,5,6);
    insertlist(&l,6,7);
    EntryType e;
    retrievelist(&l,5,&e);
    printf("%d",e);
}
