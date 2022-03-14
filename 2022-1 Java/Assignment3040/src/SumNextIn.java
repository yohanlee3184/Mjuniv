import java.util.Scanner;

public class SumNextIn {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int sum = 0;
		int num = 0;

		while (sc.hasNextInt()) {
			num = sc.nextInt();
			sum += num;
		}
		System.out.println("정수의 합은 : "+sum);
	}
}
