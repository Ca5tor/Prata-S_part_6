#include <iostream>
#include <cctype>

using namespace std;

void Task_1() {
	char ch;

	cout << "Enter character (not ru), '@' character to complete " << endl;

	while (cin >> ch, ch != '@'){					// ��������� �������� ���� �� ����� ����� ������ '@'
		if (isalpha(ch)) {							// ���� ������ ���������
			if (islower(ch))						// ���� ������ � ������ ��������
				cout << " -> " <<(char)toupper(ch);	// ������� ��� � ������� ��������
	
			else if (isupper(ch))					// ���� ������ � ������� ��������
				cout << " -> " << (char)tolower(ch);// ������� ��� � ������ ��������
						
		}
		else cout << " -> " << ch << endl;			// ����� ������� ��� ����

		cout << endl;
	}

}

int main() {
	setlocale(0, "");

	Task_1();

	system("pause");
	return 0;
}