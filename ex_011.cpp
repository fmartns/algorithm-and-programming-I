#include <iostream>

using namespace std;

int main(){

    int fatorial;
    cout << "Digite um numero inteiro: ";
    cin >> fatorial;

    int cont = fatorial;
    int total = fatorial;

    while (cont > 1){
        cont--;
        total = total * cont;
    }

    cout << "Fatorial de " << fatorial << ": " << total;
    
    

    return 0;
}