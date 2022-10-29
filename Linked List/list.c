//
// Created by ag088 on 10/29/2022.
//
#include <malloc.h>
#include "list.h"
void creatlist(List *pl){
    pl->size = 0;
    pl->head = NULL;
}
void insertlist(List *pl, EntryType e, int pos){
    Node *p = (Node*)malloc(sizeof (Node));
    Node *q = (Node*)malloc(sizeof (Node));
       p->e = e;
       p->next =NULL;
        if(pos == 0){
            p->next = pl->head;
            pl->head = p;
        }
        else
        {
            int i;
            for (q=pl->head, i = 0; i < pos-1 ; ++i) {
                q = q->next;
            }
           p->next = q->next ;
            q->next = p;
        }

        pl->size++;

}
int listempty(List *pl){
    return pl->head;
    // or return pl->size
}
int listfull(List *pl){
    return 0;
}
int listsize(List *pl){
    return pl->size;
}
void destroylist(List *pl){
    Node *q;
    while(pl->head){
        q = pl->head->next ;
        free(pl->head);
        pl->head = q;
    }
    pl->size = 0;
}

void deletlist(int pos,EntryType *e,List *pl){
    int i;
    Node *q,*tmp;
    if(pos == 0){
        *e =pl->head->e;
        tmp = pl->head->next;
        free(pl->head);
        pl->head = tmp;
    }
    else
    {
        for(i=0,q=pl->head;i < pos-1;i++){
            q=q->next;
        }
        *e = pl->head->e;
        tmp = q->next->next;
        free(q->next);
        q->next=tmp;
    }
    pl->size--;
}
void retrieve(int pos,List *l,EntryType *e){
    int i;
    Node *q;
    for(i=0,q=l->head;i<pos;i++){
        q = q->next;
    }
    *e = q->e;
}

void replacelist(int pos,List *l,EntryType e){
    int i;
    Node *q;
    for (i = 0,q=l->head; i < pos; ++i) {
        q = q->next;
    }
    q->e =e;
}