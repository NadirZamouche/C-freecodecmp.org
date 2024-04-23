#include <iostream>

using namespace std;

int main()
{
    bool isMale = 0;
    bool isTall = 0;
    if(isMale && isTall){
        cout << "You are a tall male";
    }else if(isMale && !isTall){
        cout << "You are a short male";
    }else if(!isMale && isTall){
        cout << "You are a tall female";
    }else{
        cout << "You are a short female";
    }
    return 0;
}

/*
int main()
{
    bool isMale = true;
    bool isTall = 0;
    if(isMale || isTall){
        cout << "You are a tall male";
    }else {
        cout << "You are not a male";
    }
    return 0;
}
*/
