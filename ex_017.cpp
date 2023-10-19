#include <iostream>

using namespace std;

int main()
{
    
    int quantidade, numero, menor;
    cout << "Quantos números você quer testar? ";
    cin >> quantidade;
    
    for(int i=1; i<=quantidade; i++){
        cout << "Digite o " << i << "º numero: ";
        cin >> numero;
        if(i==1){
            menor = numero;
        }
        if(numero<menor){
            menor = numero;
        }
    }
    
    cout << "O menor número digitado foi " << menor;
    
}