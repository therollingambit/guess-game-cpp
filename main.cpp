#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

void play_game(){
    int random = rand() % 21;
    cout << random << std::endl;
    cout << "Guess a number between 1 and 20: \n";
    int tries = 3;
    for (int i = 0; i < 3; i++){
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
        tries--;
        if (tries == 1){
            cout << "you have " << tries << " try left.\n";
            continue;
        }
        cout << "you have " << tries << " tries left.\n";
        continue;
    }
    cout << "Game Over.\n";
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