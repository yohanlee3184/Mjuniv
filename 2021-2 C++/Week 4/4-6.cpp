#include<iostream>

int main() {

	std::cout << "�Է��� ������ ������?";
	int n;
	std::cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		std::cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << "��° ����: ";
		std::cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)sum += p[i];

	std::cout << "��� = " << sum / n << std::endl;

	delete[]p;
}