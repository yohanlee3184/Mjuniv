import java.awt.Graphics;

class Figure {

}

class Rect extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;

	void draw(Graphics g) {
		g.drawRect(x, y, h, w);
	}

}

class Oval extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;

	void draw(Graphics g) {
		g.drawOval(x, y, h, w);
	}
}

class Line extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;

	void draw(Graphics g) {
		g.drawLine(x, y, h, w);
	}
}

class string extends Figure{
	String s;
	int h = 0;
	int w = 0;

	void draw(Graphics g) {
		g.drawString(s, h, w);
	}
}