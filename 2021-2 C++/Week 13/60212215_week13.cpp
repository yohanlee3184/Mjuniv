#include<iostream>
using namespace std;

template<class t1, class t2>
class GClass {
	t1 data1;
	t2 data2;
public:
	GClass();
	void set(t1 a, t2 b);
	void get(t1& a, t2& b);
};

template<class t1,class t2>
GClass<t1, t2>::GClass() {
	data1 = 0; data2 = 0;
}
template<class t1, class t2>
void GClass<t1, t2>::set(t1 a, t2 b){
	data1 = a; data2 = b;
}
template<class t1, class t2>
void GClass<t1, t2>::get(t1&a,t2&b) {
	a = data1; b = data2;
}

int main() {
	int a;
	double b;
	GClass<int, double>x;
	x.set(2, 0.5);
	x.get(a, b);
	cout << "a=" << a << '\t' << "b=" << b << endl;

	char c;
	float d;
	GClass<char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout << "c=" << c << '\t' << "d=" << d << endl;
}