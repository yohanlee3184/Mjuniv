#include<iostream>
#include<cstring>
using namespace std;

int main_03(){

	char passwd[11];
	cout << "프로르램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> passwd;
		if (strcmp(passwd, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
	}
	return 0;
}
