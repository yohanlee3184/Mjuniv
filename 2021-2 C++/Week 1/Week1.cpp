#include<iostream>
using namespace std;

int main() {
	int score, div;
	cout << "점수를 입력하시오 >>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}
	if (score >= 90)cout << "A 입니다";
	else if (score >= 80)cout << "B 입니다";
	else if (score >= 70)cout << "C 입니다";
	else if (score >= 60)cout << "D 입니다";
	else cout << "F 입니다";

	div = score / 10;
	switch (div) {

	case 10:
	case 9:
		cout << "A 입니다"; break;
	case 8:
		cout << "B 입니다"; break;
	case 7:
		cout << "C 입니다"; break;
	case 6:
		cout << "D 입니다"; break;
	default:
		cout << "F 입니다"; break;

	}
}