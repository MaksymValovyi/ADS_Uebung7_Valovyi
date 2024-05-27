#include <iostream>
#include <ostream>
using namespace std;

class Damen
{
private:
    int numberOfQueens;
    //char schachBoard[][20];
    //int erg[];
    int * erg;
    

public:
    //constructor
    Damen(const int N){
        this->numberOfQueens = N;
        erg = new int[numberOfQueens];  //
        for(int i = 0; i < numberOfQueens; i++){
            erg[i] = -1;
        }
    };

    ~Damen();

    void initialize();
    bool platzfrei(int reihe, int spalte);
    bool platziereDame(int reihe);

};
