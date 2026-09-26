#include<iostream>
using namespace std;
int main() {
    const int n = 50;
    int guess, attempt = 0;
    do {
        cout << "Enter your first guess:" << endl;
        cin >> guess;
        if (guess == n) {
            cout << "**********Cogratulations You won***********\nyour guess is correct" << endl;
        }
        else if (guess > n && guess <= 60) {
            cout << "Your guess is so close try lower number" << endl;
        }
        else if (guess > 60) {
            cout << "Your guess is way off try lower number" << endl;
        }
        else if (guess >= 35) {
            cout << "Your guess is so close higher numbers" << endl;
        }
        else if (guess < 35) {
            cout << "Your guess is way off try higher numbers" << endl;
        }
        attempt++;
    } while (guess != n && attempt < 5);
    if (guess == n) {
        cout << "You used " << attempt << " attempts";
    }
    else {
        cout << "You ran out of guesses\n" << "The number was " << n << "\n***********Better luck next time***********";
    }
    return 0;
}