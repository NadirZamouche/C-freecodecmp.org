#include <iostream>

using namespace std;

int main()
{
    int secret_number  = 29;
    int number;
    int count_n = 0;
    int limit = 4;
    bool out_of_guesses = false;

    while (secret_number  != number && !out_of_guesses){
        if(count_n<=limit){
            cout << " Can you guess the secret number? ( " << limit - count_n + 1 << " attempts remaining...): ";
            cin >> number;
            count_n++;
        } else {
            out_of_guesses = true;
        }
    }

    if(out_of_guesses){
        cout << " Good luck next time " << endl;
    } else {
        cout << " Nice work! " << endl;
    }

    return 0;
}
