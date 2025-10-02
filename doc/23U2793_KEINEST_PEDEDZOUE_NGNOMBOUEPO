# Rapport de Contributions au Projet de Gestion de Listes Chaînées

Ce document détaille mes contributions au projet de **Gestion de Listes Chaînées en C**. 
J'ai a été chargé de l'organisation générale du programme, de l'implémentation de fonctionnalités clés pour les listes simplement 
chaînées et de la mise en place d'outils pour la compilation et le contrôle des entrées utilisateur.

---

## 1. Organisation du Programme

j'ai pris en charge la structuration du fichier `main.c`. Ce fichier sert de point d'entrée du programme et est responsable 
de l'interface utilisateur interactive. Il présente un menu principal qui guide l'utilisateur à travers différentes options 
pour manipuler des listes chaînées, notamment les listes simplement chaînées, doublement chaînées, circulaires, et doublement 
chaînées circulaires. Le code utilise une boucle `do-while` pour permettre à l'utilisateur de continuer à interagir avec le 
menu après chaque opération.

Le `main.c` inclut également des appels aux fonctions de validation des entrées utilisateur pour s'assurer que les valeurs 
saisies sont conformes au format attendu.

---

## 2. Fonction de Suppression des Occurrences

j'ai implémenté la fonction `deleteQueueOccurence` dans le fichier `listes.c`, qui permet de supprimer 
toutes les occurrences d'une valeur spécifique dans une liste simplement chaînée.

Cette fonction gère deux cas distincts :
- La suppression des éléments en tête de la liste : elle parcourt la liste et supprime les nœuds tant que la valeur 
recherchée se trouve au début.
- La suppression des éléments ailleurs dans la liste : elle parcourt la liste et supprime les nœuds correspondants en 
ajustant les pointeurs de l'élément précédent pour qu'il pointe vers l'élément suivant. La mémoire allouée pour les nœuds
supprimés est libérée à l'aide de `free()`.

---

## 3. Fonctions de Validation et de Vérification

### Validation des Entrées Utilisateur
Deux fonctions ont été développées pour valider les entrées de l'utilisateur :
- `veri_user_enter(char *str)` : Cette fonction vérifie si une chaîne de caractères ne contient que des chiffres, gérant 
également les signes `+` ou `-` au début, pour s'assurer qu'il s'agit d'un nombre entier valide.
- `veri_value_enter(char *str)` : Cette fonction étend la validation pour inclure les nombres réels (`float`), en vérifiant 
la présence d'un seul point (`.`) en plus des chiffres et des signes `+` ou `-`.

### Vérification de l'Ordre Croissant
j'ai également créé des fonctions pour vérifier si les listes sont triées dans l'ordre croissant :
- `veri_sortedQueue(Queue qu)` : Pour les listes simplement chaînées, cette fonction parcourt la liste et renvoie `false` si un élément est 
supérieur à l'élément suivant.
- `veri_DlistSorted(Dlist dl)` : De manière similaire, cette fonction vérifie l'ordre de tri pour les listes doublement 
chaînées.

---

## 4. Gestion de la Compilation avec Makefile

[cite_start]Un `Makefile` a été créé pour automatiser le processus de compilation du programme[cite: 1]. [cite_start]Ce script définit les variables pour le compilateur (`CC`), les options de compilation (`CFLAGS`), le nom de l'exécutable (`EXEC`), les fichiers sources (`SRCS`) et les fichiers objets (`OBJS`)[cite: 1]. Il contient les règles suivantes :
- [cite_start]`all` : Règle par défaut qui construit l'exécutable final (`gestion_listes`)[cite: 1].
- [cite_start]`$(EXEC)` : Règle pour lier les fichiers objets et créer l'exécutable[cite: 1].
- [cite_start]`run` : Règle qui compile et exécute le programme en une seule commande[cite: 1].
- [cite_start]`clean` : Règle pour supprimer les fichiers objets et l'exécutable générés, ce qui est utile pour un nouveau processus de construction[cite: 1].
