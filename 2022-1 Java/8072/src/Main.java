import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Queue qu = new Queue();
		Scanner sc = new Scanner(System.in);
		System.out.println("문장을 입력하시오");
		while (sc.hasNextLine()) {
			System.out.println("문장을 입력하시오.");
			String i = sc.nextLine();
			qu.add(i);
		}
		while (!qu.isEmpty()) {
			try {
				System.out.println(qu.front());
			} catch (Exception e) {
				// TODO 자동 생성된 catch 블록
				System.out.println(e.getMessage());
			}
			qu.remove();
		}

		try {
			String s = qu.front();
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}

	}

}
