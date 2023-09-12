#include <iostream>

using namespace std;

int main(){

    int time1;
    int time2;

    cout << "Enter the number of goals for the first team:";
    cin >> time1;
    cout << "Enter the number of goals for the second team:";
    cin >> time2;

    cout << "The result was: " << endl;
    cout << time1 << " x " << time2 << endl; 

    if(time1 > time2){
        cout << "Team 1 won!";
    }
    else if (time1 < time2){
        cout << "Team 2 won!";
    }
    else{
        cout << "draw in the game!";
    }

    return 0;
}