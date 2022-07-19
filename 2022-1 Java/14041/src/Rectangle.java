
public class Rectangle<T> {

	private T height;
	private T width;
	
	public Rectangle(T i, T j) {
		width=i;
		height=j;
	}
	
	public void print() {
		System.out.println("사각형의 밑변 "+width+" 높이 "+height);
	}

}
