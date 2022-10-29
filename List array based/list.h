//
// Created by ag088 on 10/29/2022.
//

#ifndef LIST_ARRAY_BASED_LIST_H
#define LIST_ARRAY_BASED_LIST_H
#define MAX 10
typedef int EntryType;
typedef struct {
    int size ;
    EntryType entry[MAX];
}List;
void creatlist( List *l);
int listempty(List *l);
int listfull(List *l);
int listsize(List *l);
void destroylist(List *l);
void insertlist(List *l,int p,EntryType e);
void deletlist(List *l,int p,EntryType *e);
void retrievelist(List *l,int p,EntryType *e);
void replacelist(List *l,int p, EntryType e);
#endif //LIST_ARRAY_BASED_LIST_H
