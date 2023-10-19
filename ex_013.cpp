#include <iostream>

using namespace std;

int main()
{
    
    int idade;
    int maiorIdade = 0;
    
    int pessoas;
    cout << "Digite o número de pessoas: ";
    cin >> pessoas;

    for(int i = 1; i<=pessoas; i++){
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;
        if(idade >= 18) {
            maiorIdade++;
        }
    }
    
    cout << maiorIdade << " pessoas são maior de idade";
    
    return 0;
}