import java.awt.Graphics;

class Figure {

	public void draw(Graphics g) {
		// TODO 자동 생성된 메소드 스텁
	}

}

class Rect extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;
Rect(int x,int y, int h, int w){
	this.x=x;
	this.y=y;
	this.h=h;
	this.w=w;
}
	public void draw(Graphics g) {
		g.drawRect(x, y, h, w);
	}

}

class Oval extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;
	
	Oval(int x,int y, int h, int w){
		this.x=x;
		this.y=y;
		this.h=h;
		this.w=w;
	}

	public void draw(Graphics g) {
		g.drawOval(x, y, h, w);
	}
}

class Line extends Figure{
	int x = 0;
	int y = 0;
	int h = 0;
	int w = 0;
	
	Line(int x,int y, int h, int w){
		this.x=x;
		this.y=y;
		this.h=h;
		this.w=w;
	}

	public void draw(Graphics g) {
		g.drawLine(x, y, h, w);
	}
}


