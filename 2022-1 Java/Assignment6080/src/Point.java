
public class Point {
	
private int x=0;
private int y=0;

public Point(int a,int b){
x=a;
y=b;
}
public void changePoint(int a,int b) {
	x=a;
	y=b;
}

public void test(Rectangle t) {
	if(Rectangle.getPointlX(t)<=x&&Rectangle.getPointrX(t)>=x&&Rectangle.getPointlY(t)<=y&&Rectangle.getPointrY(t)>=y) {
		System.out.println("yes");
	}else {
		System.out.println("no");
	}
	
}

}
