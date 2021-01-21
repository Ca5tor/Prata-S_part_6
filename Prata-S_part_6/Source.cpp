#include <iostream>
#include <cctype>
#include <array>

using namespace std;

void Task_1() {
	char ch;

	cout << "Enter character (not ru), '@' character to complete " << endl;

	while (cin >> ch, ch != '@'){					// Принимаем значения пока не будет введён символ '@'
		if (isalpha(ch)) {					// Если символ буквенный
			if (islower(ch))				// Если символ в нижнем регистре
				cout << " -> " <<(char)toupper(ch);	// выводим его в верхнем регистре
	
			else if (isupper(ch))				// Если символ в верхнем регистре
				cout << " -> " << (char)tolower(ch);	// выводим его в нижнем регистре
						
		}
		else cout << " -> " << ch << endl;			// Иначе выводим как есть

		cout << endl;
	}

}

void Task_2() {
	int SIZE = 10;
	double* var = new double[SIZE];	// Объявляем динамический массив типа double длиной 10

	cout << "Enter the amount of donation:" << endl;

	for (int i = 0; i < SIZE; i++){
		cout << "#" << i + 1 <<" donation:  ";
			cin >> var[i];
		cout << endl;
	}

	double sred_num = 0;

	for (int i = 0; i < SIZE; i++)
		sred_num += var[i];

	sred_num /= SIZE;

	cout << "Average number = " << sred_num << endl;

	int iter = 0;

	for (int i = 0; i < SIZE; i++)
		if (var[i] > sred_num) 
			iter++;

	cout << "More than average values = " << iter << endl;
	
	delete[] var;
}

int main() {
	setlocale(0, "");

	Task_2();

	system("pause");
	return 0;
}
