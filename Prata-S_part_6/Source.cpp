#include <iostream>
#include <cctype>

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

int main() {
	setlocale(0, "");

	Task_1();

	system("pause");
	return 0;
}
