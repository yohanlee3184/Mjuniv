#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};


class PersonManager {
	Person* p; // Person�� ���� ��
	int size;//?
public:
	PersonManager(int n) {
		size = n;
		p = new Person[n];
		string name;
		string tel;
		cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "��� " << i + 1 << ">> ";
			cin >> name >> tel;

			p[i].set(name, tel);
		}
	}
	void show() {

		cout << "��� ����� �̸��� ";

		for (int i = 0; i < 3; i++) {
			cout << p[i].getName() << " ";
		}
		cout << endl;
	}
	void search() {
		cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
		string search;
		cin >> search;
		for (int i = 0; i < 3; i++) {
			if (search == p[i].getName()) {
				cout << "��ȭ��ȣ�� " << p[i].getTel();
				return;
			}
		}
		cout << "���� ����Դϴ�" << endl;
	}
	~PersonManager() {
		delete[] p;
	}

};

int main() {
	PersonManager manager(3);
	manager.search();
	manager.show();
	
}