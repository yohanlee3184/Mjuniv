import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws Exception {
		// TODO 자동 생성된 메소드 스텁
		ObjVector myVector = new ObjVector(10);
		Scanner sc = new Scanner(System.in);
		myVector.add(sc.nextDouble());
		myVector.add(sc.nextDouble());
		myVector.add(sc.nextInt());
		myVector.add(sc.nextInt());

		System.out.println((Double) myVector.get(0));
		System.out.println((Double) myVector.get(1));
		System.out.println((Integer) myVector.get(2));
		System.out.println((Integer) myVector.get(3));

	}

}
