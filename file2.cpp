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
