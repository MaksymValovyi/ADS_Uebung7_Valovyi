//n = anzahl damen
#include <iostream>
#include "Damen.cpp"
using namespace std;

int main(int argc, char const *argv[])
{

    int n = 0; // anzahl damen
    cout << "Anzahl Damen: ";
    cin >> n;
    Damen d(n);
    d.initialize();
    d.platziereDame(0);
    d.initialize();

    return 0;
}


