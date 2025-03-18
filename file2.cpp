#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;
    int perulanganWhile = 0;
    int perulanganDoWhile = 0;
    // Perulangan while
    cout << "Perulangan dengan while" << endl;
    srand(time(0));
    x = rand() % 10;
    cout << "Nilai awal x = " << x << endl;
    while(x < 7){
        cout << "nilai x = " << x << " Lari keliling lapangan!" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }while(x < 7);
    cout << "Nilai akhir x = " << x << endl;
    cout << "Jumlah perulangan = " << perulanganDoWhile << endl;
    cout << endl;
    cout << "Perulangan dengan do while" << endl;
    do{
        cout << "nilai x = " << x << " Lari keliling lapangan!" << endl;
        x = rand() % 10;
        perulanganDoWhile++;
    }while(x < 7);
    cout << "Nilai akhir x = " << endl;
    cout << "Jumlah perulangan = " << perulanganDoWhile << endl;
}