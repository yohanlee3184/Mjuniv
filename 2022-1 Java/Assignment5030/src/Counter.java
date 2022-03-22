
public class Counter {
	
	private int count;
	public void Bump() {count++;}	
	public void Reset() {count=0;}
	public void Show() {System.out.println("현재의 개수 : "+count);}
	
	public static void main(String[] args) {
	
		Counter c = new Counter();

		c.Reset();
		c.Bump();
		c.Bump();
		c.Bump();
		c.Bump();
		c.Bump();
		c.Show();

	}

}
