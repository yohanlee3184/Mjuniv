abstract class Rectangle<E>{
	private E width;
	private E height;
	
	abstract E area();
	
	public Rectangle(E width, E height) {
		this.width = width;
		this.height = height;
	}
	public E getWidth() {
		return width;
	}
	public E getHeight() {
		return height;
	}
	
	public String toString() {
		return "사각형 " + width + " X " + height;
	}
}
	
// IntRectangle은 Rectangle을 추상 클래스로 한 뒤 상속을 받는다.
class IntRectangle extends Rectangle<Integer>{

	public IntRectangle(Integer width, Integer height) {
		super(width, height);
		// TODO 자동 생성된 생성자 스텁
	}

	public Integer area() {
		// TODO 자동 생성된 메소드 스텁
		return getWidth()*getHeight();
	}
	
}

class DblRectangle extends Rectangle<Double>{

	public DblRectangle(Double d, Double e) {
		super(d, e);
		// TODO 자동 생성된 생성자 스텁
	}

	public Double area() {
		// TODO 자동 생성된 메소드 스텁
		return getWidth()*getHeight();
	}
	
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		IntRectangle myRectangle = new IntRectangle(2, 3);
		System.out.println(myRectangle);
		System.out.println("면적: " + myRectangle.area());
		
		DblRectangle myDoubleRectangle = new DblRectangle(2.5, 3.5);
		System.out.println(myDoubleRectangle);
		System.out.println("면적: " + myDoubleRectangle.area());
	}

}