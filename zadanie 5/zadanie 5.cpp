// zadanie 5.cpp : Э
/* Написать функцию, которая определяет, является ли «счастливым» шестизначное число
*/

#include <iostream>

#include <iostream>
#include <windows.h>
using namespace std;

bool isHappy(int a) {
	int sum1, sum2;
	sum1 = a %10 + (a / 10 % 10) + (a / 100 % 10);
	sum2 = a / 1000 % 10 + (a / 10000 % 10) + (a/100000) % 10;
    if (sum1 == sum2) 
    {
        return true;
    }
     return false;	
}

int main()
{
    int a;

    cout<<"Enter a 6-digit integer: ";
    cin>>a;

    if (a < 100000 || a > 999999)
    {
       cout << "You are entering the wrong number" << endl;
      
    }
    cout <<a <<(isHappy(a) ? " is" : " is not") << " lucky number" << endl;
}
