import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// MyLinkedList에서는 적절한 예외 처리를 하게 하고,
		// main에서도 try catch를 한다. (실제로 예외는 발생하지 않더라도)

		MyLinkedList myList = new MyLinkedList();
		Scanner sc = new Scanner(System.in);

		while (sc.hasNext()) {
			myList.addFront(sc.next());
		}

		myList.addBack("xxx");
		myList.addBack("yyy");
		myList.addBack("zzz");

		try {
			myList.printForward();
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}
		try {
			System.out.println("Front: " + myList.peekFront());
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}
		try {
			System.out.println("Back: " + myList.peekBack());
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}

		try {
			myList.removeFront();
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}
		try {
			myList.removeBack();
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}
		try {
			myList.remove("xxx");
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}
		try {
			myList.printBackward();
		} catch (Exception e) {
			// TODO 자동 생성된 catch 블록
			System.out.println(e.getMessage());
		}

	}

}
