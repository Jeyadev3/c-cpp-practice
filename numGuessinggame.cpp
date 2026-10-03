#include <iostream>

int main(){
    int guess;
    int tries = 0;
    int num;

    std::cout << "---Welcome to Number Guessing Game---\n";
    srand(time(NULL));
    num = rand() % 100 + 1;
    do{
        std::cout << "Enter your Guess :";
        std::cin >> guess;
        int diff = abs(guess - num);
        tries++;

        if(diff < 5 && diff > 0){
            std::cout << "TOO CLOSE\n";
        }
        else if(diff < 10 && diff > 0 && guess > num){
            std::cout << "CLOSE. Try a little Lower\n";
        }
        else if(diff < 10 && diff > 0 && guess < num){
            std::cout << "CLOSE. Try a little Higher\n";
        }
        else if(guess > num){
            std::cout << "TOO HIGH\n";
        }
        else if(guess < num){
            std::cout << "TOO LOW\n";
        }
        else{
            std::cout << "Your guess is right. The Correct Number is " << num;
        }

    }while(num != guess);

    std::cout << "\nYou total no of guesses are :" << tries;

}