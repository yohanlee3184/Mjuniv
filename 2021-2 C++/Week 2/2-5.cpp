#include<iostream>
#include<cstring>
using namespace std;

int main_03(){

	char passwd[11];
	cout << "���θ����� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> passwd;
		if (strcmp(passwd, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
	return 0;
}
