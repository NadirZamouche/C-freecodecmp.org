#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* "Simple betting game"
 "Jack Queen King" - computer shuffles these cards randomly
 Player has to guess the position of queen:
 If he:
    - wins : he takes 3*bet.
    - looses : he looses the bet amount.
 Player has $100 initially and can play as many times as he
 wants until he runs out of cash.
*/

int cash = 100;
void play(int bet){
    char *C = (char*)malloc(10000*sizeof(char));//C++: C = new char[3];
    C[0]= 'J'; C[1]='Q'; C[2]='K';
    cout << "Shuffling ...\n";
    srand(time(NULL));// seeding random number generator
    for(int i=0;i<3;i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp=C[x];
        C[x]=C[y];
        C[y]=temp;
    }
    int playersGuess;
    cout << "What is the position of queen: 1, 2 or 3 ? ";
    cin >> playersGuess;
    cout << "Result = " << C[0] << " " << C[1] << " " << C[2] << endl;
    if(C[playersGuess - 1] == 'Q'){
        cash += 3*bet;
        cout << "You won ! $" << 3*bet <<" - Total cash: $" << cash << endl;
    } else {
        cash -= bet;
        cout << "You lost ! $" << bet <<" - Total cash: $" << cash << endl;
    }
    cout << "*******************************************\n\n";
    free(C);//delete[] C;
}
int main(){
    cout << "**Welcome to the Virtual Casino**\n\n";
    cout << "Total cash = $" <<cash << endl;
    int bet;
    while(cash > 0){
    cout << "What is your bet? $";
    cin >> bet;
    /*if(bet == 0 || bet > cash) break;*/
    while(bet == 0 || bet > cash){
    cout << "Invalid bet: $";
    cin >> bet;
    }
    play(bet);
    }
    return 0;
}
