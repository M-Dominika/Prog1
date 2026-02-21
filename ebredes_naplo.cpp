#include <iostream>
using namespace std;

int main(){

    struct{
        string nap;
        int ora;
    } ebredes_naplo[7];

    string napok[7] = {"Hetfo", "Kedd", "Szerda", "Csutortok", "Pentek", "Szombat", "Vasarnap" };
    int orak[7] = {8, 7, 7, 6, 8, 9, 9};

    for (int i = 0; i < 7; i++)
    {
        ebredes_naplo[i].nap = napok[i]; 
        ebredes_naplo[i].ora = orak[i]; 
    }

    cout << "Ebredesi naplo:" << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << ebredes_naplo[i].nap << ": " << ebredes_naplo[i].ora << " ora" << endl;
    }

}
