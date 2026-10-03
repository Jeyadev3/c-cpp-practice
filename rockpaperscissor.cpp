#include <iostream>
#include <ctime>
using namespace std;

int main(){
    cout << "---Rock Paper Scissor---" << '\n';
    int guess;
    int comp;
    srand(time(NULL));
    comp = (rand() % 3) + 1;
    do{
        cout << "1. Rock 2. Paper 3. Scissor 4.Exit" << '\n';
        cout << "Enter your guess between 1 and 4 :";
        cin >> guess;
        switch(guess){
            case 1:
                cout << "You choose Rock" << '\n';
                break;
            case 2:
                cout << "You choose Paper" << '\n';
                break;
            case 3:
                cout << "You choose Scissor" << '\n';
                break;
            case 4:
                cout << "Exiting...";
                break;
            default:
                cout << "Enter a valid choice(1/2/3)" << '\n';
                break;
        }
        if(guess > 0 && guess < 4){
            switch(comp){
            case 1:
                cout << "Computer choose Rock" << '\n';
                break;
            case 2:
                cout << "Computer choose Paper" << '\n';
                break;
            case 3:
                cout << "Computer choose Scissor" << '\n';
                break;
        }
        if((guess == 1 && comp == 3) || 
            (guess == 2 && comp == 1) ||
            (guess == 3 && comp == 2)){
            cout << "You won the game" << '\n';
        }
        else if(guess == comp){
            cout << "Its a Draw" << '\n';
        }
        else{
            cout << "You Lost the game" << '\n';
        }
    }
    }while(guess != 4);
}