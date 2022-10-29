//
// Created by ag088 on 10/29/2022.
//
#include "list.h"
void creatlist(List *l){
    l->size = 0;
}
int listempty(List *l){
    return (!l->size);
}
int listfull(List *l){
    return (l->size == MAX);
}
int listsize(List *l){
    return l->size;
}
void destroylist(List *l){
    l->size = 0;
}
void insertlist(List *l,int p,EntryType e){
    int i;
    for (int j = l->size-1; j >= p  ; --j) {
         l->entry[j+1] = l->entry[j];
    }
    l->entry[p] = e;
    l->size++;
}
void deletlist(List *l,int p,EntryType *e){
    *e = l->entry[p];
    int i;
    for (int j = p+1; j <= l->size-1 ; ++j) {
        l->entry[j-1]=l->entry[j];
    }
    l->size--;
}
void retrievelist(List *l,int p, EntryType *e){
    *e = l->entry[p];
}
void replacelist(List *l,int p, EntryType e){
    l->entry[p]=e;
}