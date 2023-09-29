#include <iostream>

using namespace std;

int main(){

    int n1;
    cout << "Digite um numero: ";
    cin >> n1;

    int n2;
    cout << "Digite outro numero: ";
    cin >> n2;

    int total = 0;

    while(n1 <= n2){
        total = total + n1;
        n1++;
    }

    cout << "A soma da sequencia de numeros inteiros entre os numeros escolhidos foi " << total;

    return 0;
}