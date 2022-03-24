
public class Point {
	private int x=0;
	private int y=0;
	public Point(int a,int b) {
		x=a;
		y=b;
	}
	public static double distance(Point a,Point b) {
		int p=Math.abs(b.x-a.x);
		int q=Math.abs(b.y-a.y);
		double t=Math.sqrt(p*p+q*q);
		
		return t;
	}
	

}
