import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		
		Scanner num=new Scanner(System.in);
		System.out.println("첫번째 점 입니다. 두 개의 정수(x좌표와 y좌표)를 입력하시오.");
		int x=num.nextInt();
		int y=num.nextInt();
		Point first=new Point(x,y);
		System.out.println("두번째 점 입니다. 두 개의 정수(x좌표와 y좌표)를 입력하시오.");
		x=num.nextInt();
		y=num.nextInt();
		Point second=new Point (x,y);
		System.out.println("두 점의 거리는 "+Point.distance(first,second)+"입니다." );
		
		
	}

}
