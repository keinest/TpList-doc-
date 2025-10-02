#include "listes.h"

int main()
{
    char enter[100];
    do
    {
        printf("\033[1m");
        userMenu();
        scanf(" %99[^\n]", enter);
        
        while(!veri_user_enter(enter))
        {
            printf("Format de nombre entier invalide ! Reessayez : ");
            stop();
            userMenu();
            scanf(" %99[^\n]", enter);
        }

        int choice = convert_user_enter(enter);
        switch(choice)
        {
            case 1:
            {
                CLEAN;
                printf("\t\t========================================\n");
                printf("\t\t\tLISTES SIMPLEMENT CHAINEES\n");
                printf("\t\t========================================\n");
                printf("\t1. Lire un element dans une liste et supprimer toute les occurences dans la liste (File)\n");
                printf("\t2. Insertion d'un element dans une liste simplement chainee triee\n");
                printf("\t0. Retour au menu precedent\n");
                printf("\n\tVotre choix : ");
                scanf(" %99[^\n]", enter);
                
                while(!veri_user_enter(enter))
                {
                    printf("Format de nombre entier invalide ! Reessayez : ");
                    stop();
                    CLEAN;
                    printf("\t\t========================================\n");
                    printf("\t\t\tLISTES SIMPLEMENT CHAINEES\n");
                    printf("\t\t========================================\n");
                    printf("\t1. Lire un element dans une liste et supprimer toute les occurences dans la liste (Pile et File)\n");
                    printf("\t2. Insertion d'un element dans une liste simplement chainee triee\n");
                    printf("\t0. Retour au menu precedent\n");
                    printf("\n\tVotre choix : ");
                    scanf(" %99[^\n]", enter);
                }
                int sub_choice = convert_user_enter(enter);
                switch(sub_choice)
                {
                    case 1:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Queue qu = initQueue();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            qu = appendQueue(qu, convert_value_enter(enter));
                        }

                        displayQueue(qu);
                        printf("Entrer la valeur a supprimer de la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_value_enter(enter))
                        {
                            printf("Format de nombre invalide ! Reessayez : ");
                            stop();
                            printf("Entrer la valeur a supprimer de la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        
                        qu = deleteQueueOccurence(qu,convert_value_enter(enter));
                        displayQueue(qu);
                        qu = destroyQueue(qu);
                        stop();
                    }
                    break;
                    case 2:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Queue qu = initQueue();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            qu = appendQueue(qu, convert_value_enter(enter));
                        }
                        
                        displayQueue(qu);

                        if(!veri_sortedQueue(qu))
                        {
                            printf("La liste n'est pas triee !\n");
                            printf("Tri de la liste...\n");
                            sleep(1);
                            qu = sortQueue(qu);
                            printf("Liste triee avec succes !\n");
                            displayQueue(qu);
                        }
                        else
                            printf("La liste est triee !\n");
                        displayQueue(qu);
                        printf("Entrer la valeur a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_value_enter(enter))
                        {
                            printf("Format de nombre invalide ! Reessayez : ");
                            printf("Entrer la valeur a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        qu = appendQueueSort(qu,convert_value_enter(enter));
                        displayQueue(qu);
                        qu = destroyQueue(qu);
                        stop();
                    }
                    break;
                    case 0:
                        CLEAN;
                    break;
                    default:
                        printf("Choix invalide ! Reessayez...\n");
                        stop();
                }   
            }
            break;
            case 2:
            {
                CLEAN;
                printf("\t\t========================================\n");
                printf("\t\t\tLISTES DOUBLEMENT CHAINEES\n");
                printf("\t\t========================================\n");
                printf("\t1. Insertion d'un element dans une liste doublement chainee triee\n");
                printf("\t0. Retour au menu precedent\n");
                printf("\n\tVotre choix : ");
                scanf(" %99[^\n]", enter);
                
                while(!veri_user_enter(enter))
                {
                    printf("Format de nombre entier invalide ! Reessayez : ");
                    stop();
                    CLEAN;
                    printf("\t\t========================================\n");
                    printf("\t\t\tLISTES DOUBLEMENT CHAINEES\n");
                    printf("\t\t========================================\n");
                    printf("\t1. Insertion d'un element dans une liste doublement chainee triee\n");
                    printf("\t0. Retour au menu precedent\n");
                    printf("\n\tVotre choix : ");
                    scanf(" %99[^\n]", enter);
                }
                int sub_choice = convert_user_enter(enter);
                switch(sub_choice)
                {
                    case 1:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Dlist dl = initDlist();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            dl = pushDlistSort(dl, convert_value_enter(enter));
                        }
                        printf("Affichage de la liste dans le sens avant : \n");
                        displayDlistFront(dl);
                        printf("\n\nAffichage de la liste dans le sens arriere : \n");
                        displayDlistBack(dl);

                        if(!veri_DlistSorted(dl))
                        {
                            printf("La liste n'est pas triee !\n");
                            printf("Tri de la liste...\n");
                            sleep(1);
                            dl = sortDlist(dl);
                            printf("Liste triee avec succes !\n");
                            displayDlistFront(dl);
                            printf("\n\nAffichage de la liste dans le sens arriere : \n");
                            displayDlistBack(dl);
                        }
                        else
                            printf("La liste est triee !\n");
                        printf("Affichage de la liste dans le sens avant : \n");
                        displayDlistFront(dl);
                        printf("\n\nAffichage de la liste dans le sens arriere : \n");
                        displayDlistBack(dl);

                        printf("Entrer la valeur a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_value_enter(enter))
                        {
                            printf("Format de nombre invalide ! Reessayez : ");
                            stop();
                            printf("Entrer la valeur a inserer dans la liste : ");     
                            scanf(" %99[^\n]", enter);
                        }
                        dl = pushDlistSort(dl,convert_value_enter(enter));
                        printf("Affichage de la liste dans le sens avant : \n");
                        displayDlistFront(dl);
                        printf("\n\nAffichage de la liste dans le sens arriere : \n");
                        displayDlistBack(dl);
                        dl = destroyDlist(dl);
                        stop();
                    }
                    break;
                    case 0:
                        CLEAN;
                    break;
                    default:
                        printf("Choix invalide ! Reessayez...\n");
                        stop();
                }
            }
            break;
            case 3:
            {
                CLEAN;
                printf("\t\t========================================\n");
                printf("\t\t\tLISTES CIRCULAIRES SIMPLEMENT CHAINEES\n");
                printf("\t\t========================================\n");
                printf("\t1. Insertion en tete dans une liste simplement chainee circulaire\n");
                printf("\t2. Insertion en queue dans une liste simplement chainee circulaire\n");
                printf("\t0. Retour au menu precedent\n");
                printf("\n\tVotre choix : ");
                scanf(" %99[^\n]", enter);
                
                while(!veri_user_enter(enter))
                {
                    printf("Format de nombre entier invalide ! Reessayez : ");
                    stop();
                    CLEAN;
                    printf("\t\t========================================\n");
                    printf("\t\t\tLISTES CIRCULAIRES SIMPLEMENT CHAINEES\n");
                    printf("\t\t========================================\n");
                    printf("\t1. Insertion en tete dans une liste simplement chainee circulaire\n");
                    printf("\t2. Insertion en queue dans une liste simplement chainee circulaire\n");
                    printf("\t0. Retour au menu precedent\n");
                    printf("\n\tVotre choix : ");
                    scanf(" %99[^\n]", enter);
                }
                int sub_choice = convert_user_enter(enter);
                switch(sub_choice)
                {
                    case 1:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Clist cl = initClist();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                        }
                        DisplayClist(cl);
                        stop();
                        cl = destroyClist(cl);
                    }
                    break;
                    case 2:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Clist cl = initClist();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            cl = insertInBack(cl, convert_value_enter(enter));
                            DisplayClist(cl);
                        }
                    }
                    break;
                    case 0:
                        CLEAN;
                    break;
                    default:
                        printf("Choix invalide ! Reessayez...\n");
                        stop();
                }
            }
            break;
            case 4:
            {
                CLEAN;
                printf("\t\t========================================\n");
                printf("\t\t\tLISTES CIRCULAIRES DOUBLEMENT CHAINEES\n");
                printf("\t\t========================================\n");
                printf("\t1. Insertion en tete dans une liste doublement chainee circulaire\n");
                printf("\t2. Insertion en queue dans une liste doublement chainee circulaire\n");
                printf("\t0. Retour au menu precedent\n");
                printf("\n\tVotre choix : ");
                scanf(" %99[^\n]", enter);
                
                while(!veri_user_enter(enter))
                {
                    printf("Format de nombre entier invalide ! Reessayez : ");
                    stop();
                    CLEAN;
                    printf("\t\t========================================\n");
                    printf("\t\t\tLISTES CIRCULAIRES DOUBLEMENT CHAINEES\n");
                    printf("\t\t========================================\n");
                    printf("\t1. Insertion en tete dans une liste doublement chainee circulaire\n");
                    printf("\t2. Insertion en queue dans une liste doublement chainee circulaire\n");
                    printf("\t0. Retour au menu precedent\n");
                    printf("\n\tVotre choix : ");
                    scanf(" %99[^\n]", enter);
                }
                int sub_choice = convert_user_enter(enter);
                switch(sub_choice)
                {
                    case 1:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Dclist dc = initDclist();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            dc = insertInFrontDclist(dc, convert_value_enter(enter));
                        }
                        DisplayDclistFront(dc);
                        dc = destroyDclist(dc);
                    }
                    break;
                    case 2:
                    {
                        printf("Entrer le nombres d'elements a inserer dans la liste : ");
                        scanf(" %99[^\n]", enter);
                        while(!veri_user_enter(enter))
                        {
                            printf("Format de nombre entier invalide ! Reessayez : ");
                            stop();
                            printf("Entrer le nombres d'elements a inserer dans la liste : ");
                            scanf(" %99[^\n]", enter);
                        }
                        int n = convert_user_enter(enter);
                        Dclist dc = initDclist();
                        for(int i = 0; i < n; i++)
                        {
                            printf("Element %d : ", i+1);
                            scanf(" %99[^\n]", enter);
                            while(!veri_value_enter(enter))
                            {
                                printf("Format de nombre invalide ! Reessayez : ");
                                stop();
                                printf("Element %d : ", i+1);
                                scanf(" %99[^\n]", enter); 
                            }
                            dc = insertInBackDclist(dc, convert_value_enter(enter));
                        }
                        DisplayDclistFront(dc);
                        dc = destroyDclist(dc);
                    }
                    break;
                    case 0:
                        CLEAN;
                    break;
                    default:
                        printf("Choix invalide ! Reessayez...\n");
                        stop();
                }
            }
            break;
            case 0:
                CLEAN;
                printf("Fermeture du programme...\n");
                sleep(1);
                return 0;
            break;
            default:
                printf("Choix invalide ! Reessayez...\n");
                stop();
        }
    }while(1);
}
