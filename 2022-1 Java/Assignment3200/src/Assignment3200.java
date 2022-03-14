import java.util.Scanner;

public class Assignment3200 {

	public static void main(String[] args) {
		String OneLine = null;
		int num=0;
		int sum=0;
		
		Scanner buf = new Scanner(System.in);
		OneLine=buf.nextLine();
		Scanner Int=new Scanner(OneLine);
		while(Int.hasNextInt()) {
			num=Int.nextInt();
			sum+=num;
		}
		
System.out.println("한 줄의 정수 합은 : "+sum);
	}

}
