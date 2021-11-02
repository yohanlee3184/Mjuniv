#include<iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size); // s1 과 s2 를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize); // s1에서 s2 에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* p = new int[size * 2]; // 새로운 배열 생성
	if (!p) return NULL;

	for (int i = 0; i < size; i++) { p[i] = s1[i]; } // p 에 s1 복사
	for (int i = 0; i < size; i++) { p[i + 5] = s2[i]; } // p 에 s1 복사가 끝난 뒤에 이어서 s2 복사하기

	return p;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {

	int* p = new int[size * 2];
	if (!p) { retSize = 0; return NULL; }

	int k = 0; // 결과 배열에 대한 인덱스로 사용할 변수 선언

	for (int i = 0; i < size; i++) { // 배열 s1 의 각 항목에 대해서 검색을 시도


		int j;

		for (j = 0; j < size; j++) { // 배열 s2 의 항목 모두에 대해서 검색을 시도
			if (s1[i] == s2[j]) // s1 에 s2 의 값이 존재하면
				break;
		}
		if (j == size) { // s1 에 s2 값이 존재하지 않으면
			//배열 p 에 s1 의 값을 복사하고, 배열 p 에 대한 인덱스를 1 증가 시킴
			p[k] = s1[i];
			k++;
		}
	}

	retSize = k;

	if (retSize == 0) return NULL;

	int* q = new int[retSize]; // 결정된 retSize 로 동적 배열 다시 할당
	if (!q) { retSize = 0; return NULL; }

	for (int i = 0; i < retSize; i++) q[i] = p[i]; // p[] 배열을 q[] 배열에 복사
	delete[] p; // 동적 배열 p[] 반환

	return q;
}

int
main() {
	int x[5], y[5];
	cout << "정수를 5 개 입력하라.배열 x 에 삽입한다>>";
	for (int i = 0;i< 5; i++) cin >> x[i];

	cout << "정수를 5 개 입력하라.배열 y 에 삽입한다>>";
	for (int i = 0; i<5; i++) cin >> y[i];

	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << " ";
	cout << endl;

	int retSize;
	int* q = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "배열 x[] 에서 y[] 를 뺀 결과를 출력한다. 개수는" << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << q[i] << " ";
	cout << endl;

	delete[] p;
	delete[] q;
}