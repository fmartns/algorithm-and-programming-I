#include <iostream>

using namespace std;

int main(){

    float salario;

    cout << "Enter your salary:";
    cin >> salario;

    if(salario <= 500){
        salario = salario + ((salario/100) * 15);
    }
    else if(salario > 500 && salario < 1000){
        salario = salario + ((salario/100) * 10);
    }
    else if(salario > 1000){
        salario = salario + ((salario/100) * 5);
    }
    else{
        cout << "error";
    }

    cout << "After the adjustment, your salary was " << salario;

    return 0;
}