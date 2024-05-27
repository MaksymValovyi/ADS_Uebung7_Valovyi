#include "Damen.h"
#include <iostream> 

using namespace std;

//show SchachBoard
void Damen::initialize(){
    for (int i = 0; i < numberOfQueens; i++)
    {
        for( int j = 0; j < numberOfQueens; j++){
            if(erg[i] == j){
                cout << "D";
            }else{
                cout << "_" ;
            }
        }
        cout << endl;
        
    }
    cout << "ENDE" << endl;
    cout << endl;
}

bool Damen::platzfrei(int reihe, int spalte){
    for (int i = 0; i < reihe; i++){
        if(erg[i] == spalte) return false;
        if(erg[i] + i == spalte + reihe) return false;
        if(erg[i] - i == spalte - reihe) return false;
    }
    return true;
}

bool Damen::platziereDame(int reihe){
    if (reihe == numberOfQueens)
        return true;
    for (int spalte=0; spalte<numberOfQueens; spalte++){
        if (platzfrei(reihe, spalte)){
            initialize();
            erg[reihe] = spalte;
            if (platziereDame(reihe + 1))
            {
                return true;
            }
            erg[reihe] = -1;
        }
    }
    return false;
}


Damen::~Damen()
{
    for(int i = 0; i < numberOfQueens; i++){
            erg[i] = 0;
    }

    delete erg;
    
    this->numberOfQueens = 0;
}