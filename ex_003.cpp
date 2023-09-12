#include <iostream>

using namespace std;

int main(){
    int option;

    cout << "Welcome to Koch Supermarket, see the promotional combo options:" << endl;
    cout << "[1] 10 French breads and a cheese" << endl;
    cout << "[2] A tube and a loaf of bread" << endl;
    cout << "[3] A milk and a sweet bread" << endl;
    cout << "[4] Suspiro" << endl;
    cout << "Escolha uma das opções citada acima: ";
    cin >> option;

    if(option == 1){
        cout << "You got 10% discount"; 
    }
    else if(option == 2){
        cout << "You got 15% discount"; 
    }
    else if (option == 3 || option == 4){
        cout << "You got 5% discount";
    }
    else{
        cout << "You did not choose a valid option.";
    }

    return 0;
}