import java.util.Scanner;

public class StuApp {

	public static void main(String[] args) {
		Student[] myStudent = new Student[100];
		Scanner sc = new Scanner(System.in);
		int z = -1;
		do {
			z++;
			myStudent[z] = Student.getStudent(sc);

		} while (myStudent[z] != null);

		while (z-- != 0) {
			myStudent[z].show();
		}

	}
}
