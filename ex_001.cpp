#include <iostream>

using namespace std;

int main()
{
    int dia;
    cout<<"choose your day of the week: ";
    cin>>dia;
    if(dia == 1){
        cout<<"monday";
    }
    else if(dia == 2){
        cout<<"tuesday";
    }
    else if(dia == 3){
        cout<<"wednesday";
    }
    else if(dia == 4){
        cout<<"thursday";
    }
    else if(dia == 5){
        cout<<"friday";
    }
    else if(dia == 6){
        cout<<"saturday";
    }
    else if(dia == 7){
        cout<<"sunday";
    }
    else{
        cout<<"The number does not correspond to any day of the week.";
    }

    return 0;
}
