#include <iostream>

using namespace std;

int main(){

    int qntd;
    float nmr, total;
    cout << "Quantos numeros voce quer digitar? ";
    cin >> qntd;

    int cont = 1;

    while(cont <= qntd){

        cout << "Digite o numero " << cont << ": ";
        cin >> nmr;
        total = total + nmr;
        cont++;
    }

    cout << "A media dos " << qntd << " numeros informados, e de " << total/qntd;

    return 0;
}