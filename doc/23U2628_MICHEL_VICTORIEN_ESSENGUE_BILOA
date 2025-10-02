### Rapport de Contributions au Projet de Gestion de Listes Chaînées

Ce document présente mes contributions au projet de **Gestion de Listes Chaînées en C**, 
en mettant l'accent sur les listes simplement chaînées circulaires et la gestion de la mémoire.

---

### 1. Insertion dans une Liste Simplement Chaînée Circulaire

J'ai implémenté les fonctions `insertInFront` et `insertInBack` pour gérer l'insertion d'éléments respectivement en 
tête et en queue d'une liste simplement chaînée circulaire.

- **Insertion en tête (`insertInFront`)** : Cette fonction crée un nouveau nœud et le place au début de la liste. 
Elle gère les cas d'une liste vide et d'une liste avec un seul élément, et assure que le dernier nœud de la liste 
pointe correctement vers le nouveau premier nœud pour maintenir la circularité. Le pointeur `head` de la liste est
mis à jour pour pointer vers le nouvel élément inséré.
- **Insertion en queue (`insertInBack`)** : Similaire à l'insertion en tête, cette fonction ajoute un nouveau nœud
à la fin de la liste. Les pointeurs sont correctement ajustés de manière à ce que le dernier nœud pointe vers le 
nouveau nœud, et le nouveau nœud pointe vers la tête de la liste pour maintenir la circularité.

Dans les deux cas, la longueur de la liste (`cl -> lenght`) est incrémentée après chaque insertion.

---

### 2. Fonction de Destruction des Listes

J'ai également implémenté la fonction `destroyClist` pour libérer la mémoire allouée dynamiquement pour
une liste simplement chaînée circulaire.

- **`destroyClist`** : Cette fonction est conçue pour détruire la liste de manière sécurisée et éviter les fuites 
de mémoire. Elle parcourt la liste à partir de la tête, libérant chaque nœud un par un jusqu'à ce que tous les éléments
soient supprimés. La fonction gère le cas d'une liste vide ou d'une liste avec un seul élément. Après la libération de 
tous les nœuds, la liste est réinitialisée.

Ces contributions sont essentielles pour garantir une gestion de la mémoire propre et efficace dans le programme, 
tout en fournissant une fonctionnalité clé pour la manipulation des listes circulaires.
