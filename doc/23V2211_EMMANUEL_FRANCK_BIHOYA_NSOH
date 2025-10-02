### Rapport de Contributions au Projet de Gestion de Listes Chaînées

Ce document détaille mes contributions au projet de **Gestion de Listes Chaînées en C**, en 
me concentrant sur les listes doublement chaînées circulaires et la gestion de la mémoire.

---

### 1. Insertion dans une Liste Doublement Chaînée Circulaire

J'ai implémenté les fonctions `insertInFrontDclist` et `insertInBackDclist` pour gérer l'insertion 
d'éléments respectivement en tête et en queue d'une liste doublement chaînée circulaire.

- **Insertion en tête (`insertInFrontDclist`)** : Cette fonction crée un nouveau nœud et l'insère au début de 
la liste. Elle gère les cas d'une liste vide, d'une liste avec un seul élément, et d'une liste avec plusieurs 
éléments. Les pointeurs `next` et `prev` du nouveau nœud sont correctement ajustés pour maintenir la circularité
de la liste. Le pointeur `first` de la liste est mis à jour pour pointer vers le nouveau nœud.
- **Insertion en queue (`insertInBackDclist`)** : Similaire à l'insertion en tête, cette fonction ajoute un nouveau
nœud à la fin de la liste. Les pointeurs `next` et `prev` du nouveau nœud sont configurés pour pointer vers le premier
et le dernier nœud actuels. Le pointeur `last` de la liste est mis à jour pour pointer vers le nouveau nœud.

Dans les deux cas, la longueur de la liste (`dc -> lenght`) est incrémentée après chaque insertion.

---

### 2. Fonctions de Destruction des Listes

J'ai également implémenté des fonctions pour libérer la mémoire allouée dynamiquement pour les listes.
- **`destroyDlist`** : Cette fonction est conçue pour détruire une liste doublement chaînée non circulaire. Elle parcourt
la liste du premier au dernier élément, libérant chaque nœud de manière sécurisée. Après la libération de tous les nœuds,
la fonction réinitialise la liste, la préparant pour une nouvelle utilisation.
- **`destroyDclist`** : Cette fonction détruit une liste doublement chaînée circulaire. Elle gère le cas d'une liste vide
ou avec un seul élément. Pour les listes contenant plusieurs nœuds, elle parcourt la liste à partir du premier nœud, 
libérant chaque élément jusqu'à ce que tous les nœuds, à l'exception du dernier, soient libérés. La mémoire du dernier
nœud est ensuite libérée séparément, et la liste est réinitialisée.

Ces contributions sont cruciales pour prévenir les fuites de mémoire et garantir une gestion propre et efficace des ressources dans le programme.
