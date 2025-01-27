// zadanie 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;
enum Suit
{
    Hearts = 3,
    Diamonds = 4,
    Clubs = 5,
    Spades = 6
};

int main()
{
    int intUserSuitCard;
    enum suit userSuitCard;
    int userCardAdvantage;
    char advantages[] = { ' ', 'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };

    cout << "Enter suit card: " << endl <<
        "Hearts = 3" << endl <<
        "Diamonds = 4" << endl <<
        "Clubs = 5" << endl <<
        "Spades = 6" << endl;
    cin >> intUserSuitCard;
    userSuitCard = (enum suit)intUserSuitCard;

    if (userSuitCard != Hearts && userSuitCard != Diamonds &&
        userSuitCard != Clubs && userSuitCard != Spades)
    {
        cout << "Incorrect choice" << endl;
        return 1;
    }

    cout << "Enter card advantage: " << endl <<
        "1 - ace \t 2 - two \t 3 - three" << endl <<
        "4 - four \t 5 - five \t 6 - six" << endl <<
        "7 - seven \t 8 - eight \t 9 - nine" << endl <<
        "10 - ten \t 11 - jack \t 12 - queen" << endl <<
        "13 - king" << endl;
    cin >> userCardAdvantage;

    if (userCardAdvantage < 1 || userCardAdvantage > 13)
    {
        cout << "Incorrect choice" << endl;
        return 2;
    }

    printCard(userSuitCard, advantages[userCardAdvantage]);
    return 0;
}