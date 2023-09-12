#include <iostream>

using namespace std;

int main(){

    float n1;
    float n2;
    int f;

    cout << "Test grade 1: ";
    cin >> n1;
    cout << "Test grade 2: ";
    cin >> n2;
    cout << "Number of absences: ";
    cin >> f;

    float m = ((n1+n2)/2);

    if(m >= 7 && f < 10){
        cout << "Approved!";
    }
    else if(m > 5 && m < 6.9 && f < 10){
        cout << "Recuperation!";
    }
    else if(m < 5  || f > 10){
        cout << "Disapproved!";
    }
    else{
        cout << "Erro";
    }

    return 0;
}