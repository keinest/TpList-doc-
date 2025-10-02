# Gestion de Listes Chaînées en C

Ce projet est une application console en langage C qui démontre l'implémentation et la manipulation de diverses structures 
de données de listes chaînées. L'utilisateur peut interagir avec le programme via un menu pour effectuer des opérations 
sur différents types de listes.

## Table des matières

- [Description](#description)
- [Fonctionnalités](#fonctionnalités)
- [Structures de données implémentées](#structures-de-données-implémentées)
- [Structure des fichiers](#structure-des-fichiers)
- [Comment compiler et exécuter](#comment-compiler-et-exécuter)
- [Comment utiliser](#comment-utiliser)

## Description

Le programme fournit une interface en ligne de commande pour créer et manipuler quatre types principaux de listes chaînées. Il met en œuvre des opérations fondamentales telles que l'initialisation, l'insertion, la suppression, l'affichage et la destruction pour chaque type de liste, avec une validation robuste des entrées utilisateur pour garantir la stabilité.

## Fonctionnalités

- **Validation des entrées** : Vérifie si les entrées de l'utilisateur sont des nombres entiers ou des nombres à virgule flottante valides.
- **Interface à base de menus** : Navigation facile à travers les différentes fonctionnalités.
- **Gestion de la mémoire** : Fonctions dédiées pour allouer et libérer correctement la mémoire (`init`, `destroy`).

### Opérations par type de liste :

1.  **Liste Simplement Chaînée**
    - Création et ajout d'éléments.
    - Affichage de la liste.
    - Suppression de toutes les occurrences d'une valeur spécifique.
    - Insertion d'un élément dans une liste triée tout en conservant l'ordre.

2.  **Liste Doublement Chaînée**
    - Insertion d'éléments dans une liste triée.
    - Affichage de la liste de la tête à la queue (`Front`).
    - Affichage de la liste de la queue à la tête (`Back`).

3.  **Liste Circulaire Simplement Chaînée**
    - Insertion d'un nouvel élément en tête de liste (`Front`).
    - Insertion d'un nouvel élément en queue de liste (`Back`).
    - Affichage de la liste circulaire.

4.  **Liste Circulaire Doublement Chaînée**
    - Insertion d'un nouvel élément en tête de liste.
    - Insertion d'un nouvel élément en queue de liste.
    - Affichage de la liste depuis la tête.

## Structures de données implémentées

Le programme met en œuvre les structures de données suivantes :

- **`Queue`**: Une liste simplement chaînée (utilisée comme une file ou une liste générale).
- **`Dlist`**: Une liste doublement chaînée.
- **`Clist`**: Une liste circulaire simplement chaînée.
- **`Dclist`**: Une liste circulaire doublement chaînée.

Chaque structure gère des nœuds contenant des données de type `float`.

## Structure des fichiers

-   `main.c` : Contient le point d'entrée du programme (`main`), gère le menu utilisateur et les interactions.
-   `listes.h` : Fichier d'en-tête qui définit toutes les structures de données (`struct`) et les prototypes des fonctions utilisées dans le projet.
-   `listes.c` : Fichier source contenant l'implémentation de toutes les fonctions de manipulation des listes chaînées.
-   `Makefile` : Fichier de configuration pour automatiser la compilation et l'exécution.

## Comment compiler et exécuter

### Prérequis
Vous avez besoin des outils `make` et d'un compilateur C (par exemple, **GCC**) installés sur votre système. Sur la plupart des systèmes Linux, 
ils sont installés par défaut.

### Utilisation du Makefile (Méthode recommandée)
Le `Makefile` inclus simplifie le processus. Ouvrez un terminal dans le répertoire du projet et utilisez les commandes suivantes :

-   **Pour compiler le programme** (crée un exécutable nommé `gestion_listes`) :
    ```sh
    make
    ```

-   **Pour compiler et exécuter le programme** directement :
    ```sh
    make run
    ```

-   **Pour nettoyer le répertoire** (supprimer les fichiers compilés et l'exécutable) :
    ```sh
    make clean
    ```

### Méthode manuelle (sans Makefile)
Si vous ne souhaitez pas utiliser `make`, vous pouvez compiler manuellement avec GCC :
```sh
gcc -Wall -Wextra main.c listes.c -o gestion_listes

**Contributeurs**

.NGNOMBOUEPO PEDEDZOUE KEINEST
.IKENG HENGA FLORENT DAVID 
.NGUEFAH ZEUTCHA CAROL JUNIOR
.ESSENGUE BILOA MICHEL VICTORIEN 
.BIHOYA NSOH FRANCK EMMANNUEL 

