typedef struct Cell {
    size_t status ; //0 ou 1
    char symbol ; //O ou X
    //char evolution[10] ;
} Cell;

Cell initCell (size_t s) ;

Cell** initEmptyGrid () ;
Cell** initGrid ();
void freeGrid (Cell** grid) ;

void nextRound (Cell** grid);
size_t countNeighboursAlive (Cell** grid, short i, short j);
Cell updateCell (size_t previousState, size_t neighboursAlive) ;

Cell** copyGrid (Cell** toCopy);
// if (status == 1) printf("X") ;
// else printf("O") ;
//
// printf("%c", symbol) => X ou O
