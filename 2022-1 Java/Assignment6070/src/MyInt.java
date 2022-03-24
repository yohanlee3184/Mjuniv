
public class MyInt {
private int num=0;

public MyInt(int a) {
	num=a;
}
	
	public static MyInt add(MyInt a,MyInt b) {
		MyInt t=new MyInt(a.num+b.num);
		return t;
	}
	
public void addTo(MyInt a) {
		num=num+a.num;
	}

public void println() {
	System.out.println("점은 : "+num);
}

}
