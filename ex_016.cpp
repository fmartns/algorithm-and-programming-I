#include <iostream>

using namespace std;

int main()
{
    
    int num1, num2;
    cout << "Digite o número inicial: ";
    cin >> num1;
    cout << "Digite o número final: ";
    cin >> num2;
    
    cout << "Veja a listagem de números impares de " << num1 << " até " << num2 << endl;
    
    for(int i=num1; i<=num2; i++){
        if(i%2==1){
            cout << i << endl;
        }
    }
}