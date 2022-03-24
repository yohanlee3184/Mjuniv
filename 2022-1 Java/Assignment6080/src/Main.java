import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner num=new Scanner(System.in);
		System.out.println("사각형을 만들기 위한 정수를 입력하시오.");
		System.out.println("왼쪽 위 x");
		int recta=num.nextInt();
		System.out.println("왼쪽 위 y");
		int rectb=num.nextInt();
		System.out.println("오른쪽 아래 x");
		int rectc=num.nextInt();
		System.out.println("오른쪽 아래 y");
		int rectd=num.nextInt();
		Rectangle myRect=new Rectangle(recta,rectb,rectc,rectd);
		Point myPoint=new Point(0,0);
		while(true) {
			
			System.out.println("테스트 할 두 정수를 입력시오.");
			if(num.hasNextInt()!=true) {System.out.println("End"); break;}
			myPoint.changePoint(num.nextInt(), num.nextInt());
			myPoint.test(myRect);
			
		}

	}

}
