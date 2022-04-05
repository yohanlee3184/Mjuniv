import java.awt.Color;

class Rectangle{
	public String title;
	public Rectangle(String title) {
		this.title = title;
	}
}
class ColoredRectangle extends Rectangle{
public Color Color;

	public ColoredRectangle(String title, java.awt.Color color) {
		super(title);
		this.Color=color;
	}


	public void show() {
	System.out.println(title+", " +Color);
	}

}

public class Main {
	public static void main(String[] args) {
		ColoredRectangle myrect = 
			new ColoredRectangle("평범한 사각형", Color.green);
		myrect.show();
	}

}
