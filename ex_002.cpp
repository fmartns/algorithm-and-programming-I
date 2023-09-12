#include <iostream>

using namespace std;

int main() 
{
    float altura;
    float peso;

    cout << "Enter your height (mt): ";
    cin >> altura;
    cout << "Enter your weight (kg): ";
    cin >> peso;

    float imc = (peso/(altura*altura));

    cout << "Your IMC is: " << imc << endl;

    if(imc < 18.5){
        cout << "Under weight";
    }
    else if(imc > 18.5 && imc < 24.9){
        cout << "Normal weight";
    }
    else if(imc > 25 && imc < 29.9){
        cout << "Overweight";
    }
    else if(imc > 30 && imc < 34.9){
        cout << "Class I obesity";
    }
    else if(imc > 35 && imc < 39.9){
        cout << "Class II obesity";
    }
    else if(imc >= 40){
        cout << "Class III obesity";
    }
    else{
        cout << "Não é um valor válido.";
    }

    return 0;
}