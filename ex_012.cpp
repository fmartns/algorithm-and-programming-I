#include <iostream>

using namespace std;

int main(){

    float eucalipto = 1.10;
    eucalipto = eucalipto * 100;
    float palmeira = 1.50;
    palmeira = palmeira * 100;
    int ano = 0;

    while(palmeira > eucalipto){
        eucalipto = eucalipto + 3;
        palmeira = palmeira + 2;
        ano++;
    }

    cout << "Sao necessarios " << ano << " anos para que eucalipto passe da palmeira.";

}