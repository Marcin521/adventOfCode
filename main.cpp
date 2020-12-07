#include <iostream>
#include <fstream>
#include <string>


using namespace std;

string temat[199];
int score[199];

int main() {

    int number;
    int line;
    int lNumber=1;

    fstream plik;
    plik.open("matrix.txt", ios::in);

    if(plik.good()==false)
    {
        cout << " file not exist" << endl;
    }

    string linia;


    int nr_linii=1;
    int i = 0;

    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: temat[i]=linia;                     break;
        }
        i++;
    }

    plik.close();

    for(int i=0; i<200; i++)
    {
        cout << "temat " << temat[i]<< endl;
        score[i] = stoi(temat[i]);

    }

    return 0;
}
