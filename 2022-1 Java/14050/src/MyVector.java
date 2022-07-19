
public class MyVector<T> {
	
	private int index=0;
	private T[] buf;
	
	public MyVector(T i) {
		// TODO 자동 생성된 생성자 스텁
		buf=(T[]) new Object[100];  
		
	}

	public void insert(T i) {
		buf[index++]=i;
	}

	public int size() {
		// TODO 자동 생성된 메소드 스텁
		return index;
	}

	public T get(int i) {
		// TODO 자동 생성된 메소드 스텁
		return buf[i];
	}

}
