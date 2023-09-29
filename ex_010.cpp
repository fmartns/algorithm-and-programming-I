#include <iostream>

using namespace std;

int main(){

    int qntd;
    float valor;
    float total = 0;

    cout << "Quantidade de multas aplicadas: ";
    cin >> qntd;

    int cont = 1;

    while(cont <= qntd){
        cout << "Valor da multa " <<  cont << ": ";
        cin >> valor;
        total = total + valor;
        cont ++;
    }

    cout << "As multas totalizaram uma arrecadação de: R$ " << total;

    return 0;
}