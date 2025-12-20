
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess, number;
    int count = 0;

    srand(time(0));                 // random seed
    number = rand() % 100 + 1;       // number between 1 and 100

    cout << "Guess a number between 1 and 100\n";

    while (true) {
        cin >> guess;
        count++;

        if (guess < number) {
            cout << "Guess a greater number\n";
        } 
        else if (guess > number) {
            cout << "Guess a smaller number\n";
        } 
        else {
            cout << "You are correct!\n";
            break;
        }
    }

    cout << "You took " << count << " chances.\n";
    return 0;
}