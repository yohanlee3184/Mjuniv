#include<iostream>

int main() {

	std::cout << "입력할 정수의 개수는?";
	int n;
	std::cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		std::cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << "번째 정수: ";
		std::cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)sum += p[i];

	std::cout << "평균 = " << sum / n << std::endl;

	delete[]p;
}