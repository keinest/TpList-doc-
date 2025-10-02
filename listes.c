#include "listes.h"

// 1- Lire un élément dans une liste et supprimer toute les occurences dans la liste.

//==============================================================


// Initialisation d'une file

Queue initQueue()
{
    Queue qu = malloc(sizeof(struct list));
    qu -> head = NULL;
    qu -> lenght = 0;
    return qu;
}

// insertion des éléments dans une file

Queue appendQueue(Queue qu, float val)
{
    Node new_node = malloc(sizeof(node));
    new_node -> data = val;
    new_node -> next = NULL;
    
    if(qu -> head == NULL)
    {
        qu -> head = malloc(sizeof(node));
        qu -> head = new_node;
    }
    else
    {
        Node temp = qu -> head;
        while(temp -> next != NULL)
            temp = temp -> next;
        temp -> next = new_node;
    }
    qu -> lenght ++;
    return qu;
}

// Affichage de la file

void displayQueue(Queue qu)
{
    if(qu -> head == NULL)
    {
        printf("\nFile vide....\n");
        return;
    }
    Node temp = qu -> head;
    while(temp != NULL)
    {
        printf("%7.2f -> ",temp -> data);
        temp = temp -> next;
    }
    printf(" NULL\n\n");
}


// Suppression des occurences dans la file

Queue deleteQueueOccurence(Queue qu, float search)
{
    while(qu -> head != NULL && qu -> head -> data == search)
    {
        Node temp = qu -> head;
        qu -> head = qu -> head -> next;
        free(temp);
        qu -> lenght --;
    }

    if(qu -> head == NULL)
        return initQueue();
    
    Node temp = qu -> head;
    while(temp -> next != NULL)
    {
        if(temp -> next -> data == search)
        {
            Node save = temp -> next;
            temp -> next = temp -> next -> next;
            free(save);
            qu -> lenght --;
        }
        else 
            temp = temp -> next;
    }
    return qu;
}

// Destruction de la file.

Queue destroyQueue(Queue qu){
    if( qu -> head == NULL)
        return initQueue();
    Node temp = qu -> head;
    Node save = NULL;
    while(temp -> next != NULL)
    {
        save = temp -> next;
        free(temp);
        temp = save;
        qu -> lenght --;
    }
    free(temp);
    qu -> lenght --;
    return initQueue();
}

//==============================================================

// 2- Insertion d'un élément dans une liste simplement chaînée triée.

//==============================================================

// Verification si la liste est triee

bool veri_sortedQueue(Queue qu)
{
    if(qu -> head == NULL || qu -> head -> next == NULL)
        return true;
    Node temp = qu -> head;
    while(temp -> next != NULL)
    {
        if(temp -> data > temp -> next -> data)
            return false;
        temp = temp -> next;
    }
    return true;
}

//Trie des elements d'une liste non triee

Queue sortQueue(Queue qu)
{
    if(qu -> head == NULL || qu -> head -> next == NULL)
        return qu;
    
    Node temp = qu -> head;
    while(temp)
    {
        Node index = temp -> next;
        while(index)
        {
            if(temp -> data > index -> data)
            {
                float save = temp -> data;
                temp -> data = index -> data;
                index -> data = save;
            }
            index = index -> next;
        }
        temp = temp -> next;
    }

    return qu;
}

// Insertion pour une file triée
Queue appendQueueSort(Queue qu, float val){
    Node new_node = malloc(sizeof(Node));
    new_node -> data = val;
    new_node -> next = NULL;

    if(qu -> head == NULL)
    {
        qu -> head = malloc(sizeof(node));
        qu -> head = new_node;
    }else if(qu -> head -> data >= val)
    {
        new_node -> next = qu -> head;
        qu -> head = new_node;
    }else 
    {
        Node temp = qu -> head;
        while(temp != NULL)
        {
            if(temp -> data >= val)
            {
                new_node -> next = temp ;
                temp = new_node;
                break;
            }
            temp = temp -> next;
            if(temp -> next == NULL)
            {
                temp -> next = new_node;            
                break;
            }
        }
    }
    qu -> lenght ++;
    return qu;
}

// 3- Insertion d'un élément dans une liste doublement chaînée triée.
//==============================================================

// Initialisation de la liste doublement chaînée
Dlist initDlist()
{
    Dlist dl = malloc(sizeof(dlist));
    dl -> first = NULL;
    dl -> last = NULL;
    dl -> lenght = 0;
    return dl;
}

// Insertion et trie des éléments dans la liste
Dlist pushDlistSort(Dlist dl, float val)
{
    Dnode new_node = malloc(sizeof(dnode));
    new_node -> next = NULL;
    new_node -> prev = NULL;
    new_node -> data = val;

    if(dl -> first == NULL)
    {
        dl -> first = malloc(sizeof(dnode));
        dl -> last = malloc(sizeof(dnode));
        dl -> first = new_node;
        dl -> last = dl -> first;
    }else if(dl -> first -> data >= val)
    {
        new_node -> next = dl -> first;
        dl -> first -> prev = new_node;
        dl -> first = new_node;
    } else {
        Dnode temp = dl -> first ;
        while(temp != NULL){
            if(temp -> data >= val)
            {
                new_node -> next = temp;
                new_node -> prev = temp -> prev;
                temp -> prev -> next = new_node;
                temp -> prev = new_node;
                break;
            }
            if(temp -> next == NULL)
            {
                new_node -> prev = dl -> last;
                dl -> last -> next = new_node;
                dl -> last = new_node;
                break;
            }
            temp = temp -> next;
        }
    }
    dl -> lenght ++;
    return dl;
}

// Verification si la liste est triee
bool veri_DlistSorted(Dlist dl)
{
    if(dl -> first == NULL || dl -> first -> next == NULL)
        return true;
    Dnode temp = dl -> first;
    while(temp -> next != NULL)
    {
        if(temp -> data > temp -> next -> data)
            return false;
        temp = temp -> next;
    }
    return true;
}

// Trie des elements d'une liste non triee
Dlist sortDlist(Dlist dl)
{
    if(dl -> first == NULL || dl -> first -> next == NULL)
        return dl;
    
    Dnode temp = dl -> first;
    while(temp)
    {
        Dnode index = temp -> next;
        while(index)
        {
            if(temp -> data > index -> data)
            {
                float save = temp -> data;
                temp -> data = index -> data;
                index -> data = save;
            }
            index = index -> next;
        }
        temp = temp -> next;
    }

    return dl;
}

// Affichage en partant de la tête
void displayDlistFront(Dlist dl)
{
    Dnode temp = dl -> first;

    if(dl -> first == NULL)
    {
        printf("\nliste double vide....\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%7.2f -> ",temp -> data);
        temp = temp -> next;
    }
    printf(" NULL\n\n");

}

// Affichage en partant de la queue
void displayDlistBack(Dlist dl)
{
    Dnode temp = dl -> last;

    if(dl -> last == NULL)
    {
        printf("\nliste double vide....\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%7.2f -> ",temp -> data);
        temp = temp -> prev;
    }
    printf(" NULL\n\n");
}

// Destruction de la liste doublement chaînée
Dlist destroyDlist(Dlist dl)
{
    if(dl -> first == NULL)
        return initDlist();
    Dnode temp = dl -> first;
    if(temp -> next == NULL)
        free(temp);
    while(temp -> next != NULL)
    {
        Dnode save = temp;
        temp = temp -> next;
        free(save);
    }
    free(temp);
    return initDlist();
}




//==============================================================

// Initialisation de la liste circulaire 
Clist initClist()
{
    Clist cl = malloc(sizeof(clist));
    cl -> head = NULL;
    cl -> lenght = 0;
    return cl;
}

// Insertion en tête
Clist insertInFront(Clist cl, float val)
{
    Node new_node = malloc(sizeof(node));
    new_node -> data = val;
    new_node -> next = NULL;
    
    if(cl -> head == NULL)
    {
        cl -> head = malloc(sizeof(node));
        cl -> head =  new_node;
    }
    else if(cl -> head -> next == NULL)
    {
        new_node -> next = cl -> head;
        cl -> head -> next = new_node;
    } 
    else 
    {
        new_node -> next = cl -> head;
        Node temp = cl -> head;
        while(temp -> next != new_node -> next)
            temp = temp -> next;
        temp -> next = new_node;
        cl -> head = new_node;

    }
    cl -> lenght ++;
    return cl;
}

// Insertion en fin
Clist insertInBack(Clist cl, float val)
{
    Node new_node = malloc(sizeof(node));
    new_node -> data = val;
    new_node -> next = NULL;
    
    if(cl -> head == NULL)
    {
        cl -> head = malloc(sizeof(node));
        cl -> head =  new_node;
    } 
    else if(cl -> head -> next == NULL)
    {
        new_node -> next = cl -> head;
        cl -> head -> next = new_node;
    } 
    else 
    {
        Node temp = cl -> head;
        new_node -> next = cl -> head;
        while(temp -> next != new_node -> next)
            temp = temp -> next;
        temp -> next = new_node;
    }
    cl -> lenght ++;
    return cl;
}

// Affichage de la liste circulaire
void DisplayClist(Clist cl)
{
    if(cl -> head == NULL)
    {
        printf("\nListe circulaire vide...\n");
        return;
    }
    if(cl -> head -> next == NULL)
    {
        printf(" ->%7.2f -> \n\n",cl -> head -> data);
        return;
    }      
    Node temp = cl -> head;
    printf(" ->");
    while(temp != cl -> head)
    {
        printf("%7.2f -> ",temp -> data);
        temp = temp -> next;
    }
    printf("\n\n");
}

// Dstruction de la liste chaînée circulaire 
Clist destroyClist(Clist cl)
{
    if(cl -> head == NULL)
        return initClist();
    Node temp = cl -> head;
    while(temp != cl -> head)
    {
        Node save = temp ;
        temp = temp -> next;
        free(save);
    } 
    free(temp);
    return initClist();  
}

//==============================================================
//5- Insertion en tête et en queue dans une liste doublement chaînée circulaire.


// Initialisation de la liste doublement chaînée circulaire 
Dclist initDclist()
{
    Dclist dc = malloc(sizeof(dclist));
    dc -> first = NULL;
    dc -> last = NULL;
    dc -> lenght = 0;
    return dc;
}

// insertion en début de liste
Dclist insertInFrontDclist(Dclist dc, float val)
{
    Dnode new_node = malloc(sizeof(dnode));
    new_node -> data = val;
    new_node -> next = NULL;
    new_node -> prev = NULL;

    if(dc -> first == NULL)
    {
        dc -> first = malloc(sizeof(dnode));
        dc -> last = malloc(sizeof(dnode));
        dc -> first = new_node;
        dc -> last = dc -> first;
    } else if( dc -> last -> prev == NULL)
    {
        new_node -> next = dc -> first;
        new_node -> prev = dc -> first;
        dc -> first -> next = new_node;
        dc -> first -> prev = new_node;
        dc -> first = new_node;
        dc -> last = dc -> first -> next;
    }else {
        new_node -> prev = dc -> last;
        new_node -> next = dc -> first;
        dc -> first -> prev = new_node;
        dc -> last -> next = new_node;
        dc -> first = new_node;
    }
    dc -> lenght ++;
    return dc;
}

// insertion en fin de liste
Dclist insertInBackDclist(Dclist dc, float val)
{
    Dnode new_node = malloc(sizeof(dnode));
    new_node -> data = val;
    new_node -> next = NULL;
    new_node -> prev = NULL;

    if(dc -> first == NULL)
    {
        dc -> first = malloc(sizeof(dnode));
        dc -> last = malloc(sizeof(dnode));
        dc -> first = new_node;
        dc -> last = dc -> first;
    } else if( dc -> last -> prev == NULL)
    {
        new_node -> next = dc -> last;
        new_node -> prev = dc -> last;
        dc -> last -> next = new_node;
        dc -> last -> prev = new_node;
        dc -> last = new_node;
        dc -> first = dc -> last -> prev;
    }else 
    {
        new_node -> prev = dc -> last;
        new_node -> next = dc -> first;
        dc -> first -> prev = new_node;
        dc -> last -> next = new_node;
        dc -> last = new_node;
    }
    dc -> lenght ++;
    return dc;
}
// Affichage par la queue
void DisplayDclistBack(Dclist dc)
{
    Dnode temp = dc -> last;

    if(dc -> last == NULL)
    {
        printf("\nliste double circulaire vide....\n");
        return;
    }
    printf("<->");
    while(temp != dc -> first)
    {
        printf("%7.2f <- >",temp -> data);
        temp = temp -> prev;
    }
    printf("%7.2f <- >",temp -> data);
    printf("\n\n");
}

// Affichage par la tête
void DisplayDclistFront(Dclist dc)
{
    Dnode temp = dc -> first;

    if(dc -> first == NULL)
    {
        printf("\nliste double circulaire vide....\n");
        return;
    }
    printf("<->");
    while(temp != dc -> last)
    {
        printf("%7.2f <- >",temp -> data);
        temp = temp -> next;
    }
    printf("%7.2f <- >",temp -> data);
    printf("\n\n");
}

// Destruction de la liste chaînée circulaire
Dclist destroyDclist(Dclist dc)
{
    if(dc -> first == NULL)
        return initDclist();
    Dnode temp = dc -> first;
    if(temp -> next == NULL)
        free(temp);
    while(temp -> next != dc -> last)
    {
        Dnode save = temp;
        temp = temp -> next;
        free(save);
    }
    free(temp);
    return initDclist();
}

// Affichage du menu utilisateur

void userMenu()
{
    CLEAN;
    printf("\t\t========================================\n");
    printf("\t\t\tGESTION DE LISTES CHAINEES\n");
    printf("\t\t========================================\n");
    printf("\t1. Listes Simplement Chainees\n");
    printf("\t2. Listes Doublements Chainees Triees\n");
    printf("\t3. Listes Circulaires Simplement Chainees\n");
    printf("\t4. Listes Circulaires Doublements Chainees\n");
    printf("\t0. Quitter\n");
    printf("\n\tVotre choix : ");
}
// ===============================================

bool veri_value_enter(char *str)
{
    int i = 0;
    int dot_count = 0;
    if(str[0] == '\0') return false;

    if(str[0] == '-' || str[0] == '+') i = 1;

    while(str[i] != '\0')
    {
        if(str[i] == '.')
        {
            dot_count++;
            if(dot_count > 1) return false;
        }
        else if(str[i] < '0' || str[i] > '9')
        {
            return false;
        }
        i++;
    }
    return true;
}

/* Verifie si une chaine de caractere est un nombre entier */

bool veri_user_enter(char *str)
{
    int i = 0;
    if(str[0] == '\0') return false;

    if(str[0] == '-' || str[0] == '+') i = 1;

    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return false;
        i++;
    }
    return true;
}

/* Convertie une chaine de caractere en nombre entier */

int convert_user_enter(char *str)
{
    return atoi(str);
}

/* Convertie une chaine de caractere en nombre reel */

float convert_value_enter(char *value)
{
    return atof(value);
}

void stop()
{
    printf("\033[1m\033[31m\t\t\t<Entrer>\033[0m\033[1m");
    if(getchar() == '\n')
        getchar();
}

//==============================================================