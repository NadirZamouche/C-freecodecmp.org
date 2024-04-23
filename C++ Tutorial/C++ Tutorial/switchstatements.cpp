#include <iostream>

using namespace std;

string get_day_of_week(int day_num)
{
    string day_name;

    switch(day_num){
    case 1:
        day_name = "Montag";
        break;
    case 2:
        day_name = "Dienstag";
        break;
    case 3:
        day_name = "Mittwoch";
        break;
    case 4:
        day_name = "Donnerstag";
        break;
    case 5:
        day_name = "Freitag";
        break;
    case 6:
        day_name = "Samstag";
        break;
    case 7:
        day_name = "Sonntag";
        break;
    default:
        day_name = "Invalid day number";
        break;
    }

    return day_name;

}

int main()
{
    cout << get_day_of_week(5);
    return 0;
}
