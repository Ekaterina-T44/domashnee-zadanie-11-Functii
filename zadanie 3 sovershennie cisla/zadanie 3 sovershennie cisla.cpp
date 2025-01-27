
/* Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.*/

#include <iostream>
using namespace std;

bool isPerfect(int n) {
	int sum = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			sum += i;
			if (i * i != n) {
				sum += n / i;
			}
		}
	}
	return sum == n && n != 1;
}

void findPerfectNum(int start, int end) {
	for (int i = start; i <= end; i++) {
		if (isPerfect(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}
int main()
{
	int start, end;
	cout << "enter start of end of the inteval:\n";
	cin >> start >> end;
	cout << "perfect number in the interval [" << start <<","<< end << "] - ";
	findPerfectNum(start, end);
	return 0;
}