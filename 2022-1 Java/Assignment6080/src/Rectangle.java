
public class Rectangle {
private int lX=0;
private int lY=0;
private int rX=0;
private int rY=0;

public Rectangle(int a, int b, int c, int d) {
	lX=a;
	lY=b;
	rX=c;
	rY=d;
}

public static int getPointlX(Rectangle t) {
	return t.lX;
}
public static int getPointlY(Rectangle t) {
	return t.lY;
}
public static int getPointrX(Rectangle t) {
	return t.rX;
}
public static int getPointrY(Rectangle t){
	return t.rY;
}
	
}
