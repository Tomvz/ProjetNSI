# ProjetNSI

Creation d'un simulateur de sudoku avec solveur.  
Etapes:  
- Generer une grille de sudoku  
- Créer une interface graphique  
- Implementer le solveur  

Structures de données :  
Tableaux  

Liste des fonctions et prototypage :  
- Class Grille :  
    public:
    - Grid(sf::RenderWindow* window) -> Constructeur, initialise la liste de liste representant le sudoku  
    - draw() -> Dessine dans la fenêtre  
    - getMap() -> Renvoie le Sudoku sous forme de tableau (liste de lsite)  
  private:
    - isValid(int n, int x, int y) -> Renvoie True ou False si le chiffre n peut etre posé aux coordonnées x y (utilisé pour la création de la grille).
