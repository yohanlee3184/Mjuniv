
public class MyMap<T1, T2> {

	public T1[] t1 = (T1[]) new Object[10000];
	public T2[] t2 = (T2[]) new Object[10000];
	int size = 0;

	public void put(T1 s, T2 string) {
		t1[size] = s;
		t2[size] = string;
		size++;
	}

	public int size() {
		return size;
	}

	public T2 get(T1 k) {
		T1 buf=k;
		T2 temp = null;
		int i = 0;
		while (i <=9999) {
			if (t1[i] == buf) {
				temp = t2[i];
			}
				i++;
			}
		return temp;
	}
}