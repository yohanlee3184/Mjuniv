import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		Stack st = new Stack();
		Scanner sc=new Scanner(System.in);
		System.out.println("정수를 입력하시오");
		while(sc.hasNextInt()) {
			System.out.println("정수를 입력하시오");
        int i=sc.nextInt();
		st.add(i);
		}
        while (!st.isEmpty()){
            try {
				System.out.println(st.top());
			} catch (Exception e) {
				// TODO 자동 생성된 catch 블록
				System.out.println(e.getMessage());
			} 
            st.pop();
		}
 
			try {
				System.out.println(st.top());
			} catch (Exception e) {
				// TODO 자동 생성된 catch 블록
				System.out.println(e.getMessage());
			}
		
	}

}
