import java.util.NoSuchElementException;
import java.util.Scanner;

public class Student {
	private int num = 0;
	private String name = null;
	private double score = 0.0;

	public Student(int a, String b, double c) {
		this.num = a;
		this.name = b;
		this.score = c;
	}

	public void show() {
		System.out.println("학생 이름 : " + name + ", 학번 : " + num + ", 성적 : " + score);
	}

	public static Student getStudent(Scanner sc) {
		System.out.println("학생의 이름과 학번, 성적을 순서대로 입력하세요.");

		try {
			if (sc.hasNextLine() == false) {
				return null;
			} else {
				if (sc.hasNext() == false) {
					return null;
				}
				String c = sc.next();
				if (sc.hasNext() == false) {
					return null;
				}
				int z = sc.nextInt();
				if (sc.hasNext() == false) {
					return null;
				}
				double x = sc.nextDouble();
				Student data = new Student(z, c, x);
				return data;
			}
		} catch (NoSuchElementException e) {
			return null;
		}
	}

}
