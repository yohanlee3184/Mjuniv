#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main_01() {
	map<string, string> dic;

	dic.insert(make_pair("love", "사랑"));
	dic.insert(make_pair("apple", "사과"));
	dic["cherry"] = "체리";
	dic.insert(make_pair("strawberry", "딸기"));

	cout << "저장된 단어의 개수" << dic.size() << endl;

	string eng;
	while(true){
		cout << "찾고 싶은 단어>> ";
		getline(cin, eng);
		if (eng == "exit") break;
	
		if (dic.find(eng) == dic.end()) cout << "없음" << endl;
		else cout << dic[eng] << endl;
	
	}
	cout << "종료합니다" << endl;
	return 0;
}

/*int main() {
	vector<int>v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);

	cout << "v.size() = " << v.size() << endl;
	cout << "v.capacity() = " << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << endl;

	v[0] = 10;
	int n = v[2];
	v.at(2) = 5;

	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
		cout << endl;
	

}*/