#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main() {

    int line;
    int lNumber=1;

    fstream plik;
    plik.open("matrix.txt", ios::in);

    if(plik.good()==false)
    {
        cout << " file not exist" << endl;
    }





    plik.close();


    return 0;
}
