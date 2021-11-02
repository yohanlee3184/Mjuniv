#include<iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size); // s1 �� s2 �� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* remove(int s1[], int s2[], int size, int& retSize); // s1���� s2 �� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* p = new int[size * 2]; // ���ο� �迭 ����
	if (!p) return NULL;

	for (int i = 0; i < size; i++) { p[i] = s1[i]; } // p �� s1 ����
	for (int i = 0; i < size; i++) { p[i + 5] = s2[i]; } // p �� s1 ���簡 ���� �ڿ� �̾ s2 �����ϱ�

	return p;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {

	int* p = new int[size * 2];
	if (!p) { retSize = 0; return NULL; }

	int k = 0; // ��� �迭�� ���� �ε����� ����� ���� ����

	for (int i = 0; i < size; i++) { // �迭 s1 �� �� �׸� ���ؼ� �˻��� �õ�


		int j;

		for (j = 0; j < size; j++) { // �迭 s2 �� �׸� ��ο� ���ؼ� �˻��� �õ�
			if (s1[i] == s2[j]) // s1 �� s2 �� ���� �����ϸ�
				break;
		}
		if (j == size) { // s1 �� s2 ���� �������� ������
			//�迭 p �� s1 �� ���� �����ϰ�, �迭 p �� ���� �ε����� 1 ���� ��Ŵ
			p[k] = s1[i];
			k++;
		}
	}

	retSize = k;

	if (retSize == 0) return NULL;

	int* q = new int[retSize]; // ������ retSize �� ���� �迭 �ٽ� �Ҵ�
	if (!q) { retSize = 0; return NULL; }

	for (int i = 0; i < retSize; i++) q[i] = p[i]; // p[] �迭�� q[] �迭�� ����
	delete[] p; // ���� �迭 p[] ��ȯ

	return q;
}

int
main() {
	int x[5], y[5];
	cout << "������ 5 �� �Է��϶�.�迭 x �� �����Ѵ�>>";
	for (int i = 0;i< 5; i++) cin >> x[i];

	cout << "������ 5 �� �Է��϶�.�迭 y �� �����Ѵ�>>";
	for (int i = 0; i<5; i++) cin >> y[i];

	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << " ";
	cout << endl;

	int retSize;
	int* q = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "�迭 x[] ���� y[] �� �� ����� ����Ѵ�. ������" << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << q[i] << " ";
	cout << endl;

	delete[] p;
	delete[] q;
}