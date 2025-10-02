#ifndef __LIST_UTILS_H__
#define __LIST_UTILS_H__

#define CLEAN system("cls||clear")

/*

    1- Lire un élément dans une liste et supprimer toute les occurences dans la liste.
    2- Insertion d'un élément dans une liste simplement chaînée triée.
    3- Insertion d'un élément dans une liste doublement chaînée triée.
    4- Insertion en tête et en queue dans une liste simplement chaînée circulaire.
    5- Insertion en tête et en queue dans une liste doublement chaînée circulaire.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>

typedef struct node 
{
    float data;
    struct node *next;
} node, *Node;

typedef struct list 
{
    Node head;
    int lenght;
}*Queue;

// Liste doublement chaînée

typedef struct dnode
{
    float data;
    struct dnode* next;
    struct dnode* prev;
} dnode, *Dnode;

typedef struct dlist
{
    Dnode first;
    Dnode last;
    int lenght;
} dlist, *Dlist;


// Liste chaînée circulaire
typedef struct clist 
{
    Node head;
    int lenght;
} clist, *Clist;


// Liste doublement chaînée circulaire

typedef struct dclist 
{
    Dnode first;
    Dnode last;
    float lenght;
} dclist, *Dclist;


// 1- Lire un élément dans une liste et supprimer toute les occurences dans la liste (Pile et File).

Queue initQueue();
Queue appendQueue(Queue ,float);
void displayQueue(Queue );
Queue deleteQueueOccurence(Queue , float );
Queue destroyQueue(Queue );

// 2- Insertion d'un élément dans une liste simplement chaînée triée.

Queue appendQueueSort(Queue ,float);
bool veri_sortedQueue(Queue );
Queue sortQueue(Queue );

// Liste doublement chaînée
// 3- Insertion d'un élément dans une liste doublement chaînée triée.

Dlist initDlist();
Dlist pushDlistSort(Dlist , float);
bool veri_DlistSorted(Dlist );
Dlist sortDlist(Dlist );
void displayDlistFront(Dlist );
void displayDlistBack(Dlist );
Dlist destroyDlist(Dlist );


// Chaînée circulaire
// 4- Insertion en tête et en queue dans une liste simplement chaînée circulaire.

Clist initClist();
Clist insertInFront(Clist , float );
Clist insertInBack(Clist , float );
void DisplayClist(Clist );
Clist destroyClist(Clist );

// Doublement chaînée circulaire
//5- Insertion en tête et en queue dans une liste doublement chaînée circulaire.

Dclist initDclist();
Dclist insertInFrontDclist(Dclist , float );
Dclist insertInBackDclist(Dclist , float );
void DisplayDclistFront(Dclist );
void DisplayDclistBack(Dclist );
Dclist destroyDclist(Dclist );


//Menu utilisateur

void userMenu();
void stop();

// Controle des entrees utilisateurs

extern bool veri_value_enter(char *); 
extern bool veri_user_enter(char *);
extern int convert_user_enter(char *);
extern float convert_value_enter(char *);


#endif