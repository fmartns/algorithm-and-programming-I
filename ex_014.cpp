#include <iostream>

using namespace std;

int main()
{
    
    int numero, tabuada;
    
    cout << "De qual número deseja saber a tabuda? ";
    cin >> tabuada;
    
    cout << "Até qual número devo mostrar? ";
    cin >> numero;
    
    for(int i=0; i<=numero; i++){
        cout << tabuada << '*' << i << '=' << tabuada*i << endl;
    }
    
    return 0;
}