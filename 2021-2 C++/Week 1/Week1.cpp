#include<iostream>
using namespace std;

int main() {
	int score, div;
	cout << "������ �Է��Ͻÿ� >>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}
	if (score >= 90)cout << "A �Դϴ�";
	else if (score >= 80)cout << "B �Դϴ�";
	else if (score >= 70)cout << "C �Դϴ�";
	else if (score >= 60)cout << "D �Դϴ�";
	else cout << "F �Դϴ�";

	div = score / 10;
	switch (div) {

	case 10:
	case 9:
		cout << "A �Դϴ�"; break;
	case 8:
		cout << "B �Դϴ�"; break;
	case 7:
		cout << "C �Դϴ�"; break;
	case 6:
		cout << "D �Դϴ�"; break;
	default:
		cout << "F �Դϴ�"; break;

	}
}