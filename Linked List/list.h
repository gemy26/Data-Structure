//
// Created by ag088 on 10/29/2022.
//

#ifndef LINKED_LIST_LIST_H
#define LINKED_LIST_LIST_H

#include <stddef.h>

typedef int EntryType;
typedef struct listnode {
    EntryType e;
    struct listnode *next;
}Node;
typedef struct  {
    int size;
    Node *head;
    //Node *current;
    //int currentpos;
}List;
void creatlist(List *pl);
void insertlist(List *pl, EntryType e, int pos);
int listempty(List *pl);
int listfull(List *pl);
int listsize(List *pl);
void destroylist(List *pl);
void deletlist(int pos,EntryType *e,List *pl);
void retrieve(int pos,List *l,EntryType *e);
void replacelist(int pos,List *l,EntryType e);
#endif //LINKED_LIST_LIST_H
