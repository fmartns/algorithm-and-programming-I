#include <iostream>

using namespace std;

int main()
{
    
    int quantidade;
    cout << "Deseja calcular a media de quantos números? ";
    cin >> quantidade;
    
    int numero;
    int total = 0;
    
    for(int i = 1; i<=quantidade; i++){
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;
        total = total + numero;
    }
    
    cout << "A media dos " << quantidade << " números, foi " << total/quantidade;
    
    
    return 0;
}