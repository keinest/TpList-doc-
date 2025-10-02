### Rapport de Contributions au Projet de Gestion de Listes Chaînées

Ce document présente mes contributions au projet de **Gestion de Listes Chaînées en C**.
Je me suis concentré ses efforts sur l'implémentation de l'insertion dans des listes triées ainsi que sur les 
fonctions de conversion des entrées utilisateur.

---

### 1. Insertion dans une Liste Simplement Chaînée Triée

J'ai implémenté la fonction `appendQueueSort` dans le fichier `listes.c`, dont le rôle est d'insérer un nouvel 
élément tout en maintenant la liste triée dans l'ordre croissant. L'algorithme gère plusieurs cas pour placer le nouvel
élément correctement :

* **Liste vide** : Le nouveau nœud devient la tête de la liste.
* **Insertion en tête** : Si la valeur à insérer est inférieure ou égale à celle du premier élément, le nouveau nœud 
est inséré au début de la liste.
* **Insertion au milieu ou à la fin** : La fonction parcourt la liste jusqu'à trouver l'emplacement approprié pour le
nouvel élément, en veillant à ce que l'ordre de tri soit préservé.

La fonction incrémente la longueur de la liste après chaque insertion. De plus, le développeur a également contribué 
à la fonction de tri `sortQueue`, qui permet de trier une liste non ordonnée.

---

### 2. Fonctions de Conversion des Entrées Utilisateur

Deux fonctions ont été développées pour convertir les entrées utilisateur de chaînes de caractères en valeurs numériques.

* **`convert_user_enter(char *str)`** : Cette fonction prend une chaîne de caractères en entrée et la convertit en 
un nombre entier. Elle utilise la fonction standard `atoi` pour effectuer la conversion.
* **`convert_value_enter(char *value)`** : Cette fonction convertit une chaîne de caractères en un nombre à 
virgule flottante (`float`). Elle utilise la fonction standard `atof` pour gérer les nombres réels.

Ces fonctions de conversion sont essentielles pour traiter les données numériques que l'utilisateur saisit, 
garantissant qu'elles sont dans un format utilisable avant d'être insérées ou traitées par les fonctions de 
gestion des listes.
