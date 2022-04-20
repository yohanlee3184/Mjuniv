// p_1105의 배열 버전이다. Collection 을 아직 안 배운 경우를 대비.
import java.util.Scanner;

class Dog extends unit{
	private String name;
	public Dog(String name) {
		this.name = name;
	}
	public void run() {
		System.out.println(name + " running");
	}
}
class Fish extends unit{
	private String name;
	public Fish(String name) {
		this.name = name;
	}
	public void swim() {
		System.out.println(name + " swimming");
	}
}
class unit{
	public unit(){
	}
	public void swim() {
		
	}
	public void run() {
		// TODO 자동 생성된 메소드 스텁
	}
}
public class Main {
	unit[] unitList = new unit[40];
	
	int numberOfunit = 0;
	
	public void create() {
		Scanner s = new Scanner(System.in);
		unitList[numberOfunit++] = new Fish(s.next());
		unitList[numberOfunit++] = new Fish(s.next());
		unitList[numberOfunit++] = new Dog(s.next());
		unitList[numberOfunit++] =new Dog(s.next());
	}

	public void move() {
		for (int i = 0; i < numberOfunit; i++) {
			unitList[i].swim();
		}
		for (int i = 0; i < numberOfunit; i++) {
			unitList[i].run();
		}
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Main m = new Main();
		m.create();
		m.move();
	}

}

