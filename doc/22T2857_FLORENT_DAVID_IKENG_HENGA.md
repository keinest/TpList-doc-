### Rapport de Contributions au Projet de Gestion de Listes Chaînées

Ce document présente mes contributions au projet de **Gestion de Listes Chaînées en C**, 
axées sur l'insertion dans des listes doublement chaînées triées et la gestion de la mémoire pour les 
listes simplement chaînées.

---

### 1. Insertion dans une Liste Doublement Chaînée Triée

J'ai implémenté la fonction `pushDlistSort` dans le fichier `listes.c`. Cette fonction est
responsable de l'insertion d'un nouvel élément dans une liste doublement chaînée tout en maintenant son ordre de 
tri croissant. L'algorithme d'insertion gère plusieurs cas pour garantir que le nouvel élément est placé correctement :

* **Liste vide** : Si la liste est vide, le nouvel élément devient le premier et le dernier élément.
* **Insertion en tête** : Si la valeur à insérer est inférieure à celle du premier élément, le nouveau nœud est inséré 
au début de la liste.
* **Insertion au milieu** : La fonction parcourt la liste jusqu'à trouver l'emplacement approprié pour insérer le nouvel
élément. Elle ajuste les pointeurs `next` et `prev` des nœuds adjacents pour préserver la structure doublement chaînée de
la liste.
* **Insertion en fin** : Si la valeur à insérer est supérieure à celle du dernier élément, le nouveau nœud est ajouté à 
la fin de la liste.

Après chaque insertion, la longueur de la liste (`dl -> lenght`) est incrémentée.

---

### 2. Fonctions de Destruction des Listes Simplement Chaînées

J'ai également mis en œuvre une fonction essentielle de gestion de la mémoire, `destroyQueue`, qui se trouve
dans `listes.c`. Cette fonction est conçue pour libérer l'espace mémoire alloué dynamiquement pour une liste simplement 
chaînée (`Queue`). Elle parcourt la liste à partir du premier nœud, libérant chaque élément un par un de manière sécurisée.

Cette fonction est cruciale pour prévenir les fuites de mémoire et s'assurer que les ressources système sont correctement gérées après utilisation. Une fois tous les nœuds libérés, la liste est réinitialisée.
