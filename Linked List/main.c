#include <stdio.h>
#include "list.h"
int main() {
    List l;
    creatlist(&l);
    insertlist(&l,1,0);
    insertlist(&l,2,1);
    insertlist(&l,3,2);
    insertlist(&l,4,3);
    insertlist(&l,5,4);
    insertlist(&l,6,5);
    int x ;
    retrieve(4,&l,&x);
    printf("%d",x);
    return 0;
}
