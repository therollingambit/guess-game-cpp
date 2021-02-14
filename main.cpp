#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

void play_game(){
    int random = rand() % 251;
    cout << random << std::endl;
    cout << "Guess a number between 1 and 250: \n";
    while (true){
        int guess;
        cin >> guess;
        if (guess == random) {
            cout << "You win!\n";
            break;
        }
        else if (guess < random) 
            cout << "number too low. Try again.\n";
        else 
            cout << "number too high. Try again.\n";
    }
}

int main(){
    
    srand(time(NULL)); //seed for random int
    int choice;

    do {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;

        switch (choice){
        case 0:
            cout << "adios!\n";
            return 0;
        case 1:
            play_game();
            break;
        }
    }while(choice != 0);

    
}