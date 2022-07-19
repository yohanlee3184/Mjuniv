import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		long Start1 = System.currentTimeMillis();
		Vector<Integer> myVector = new Vector<Integer>();
		for (int i = 0; i < 100000; i++) {
			myVector.add(i);
		}
		for (int i = 0; i < 10000; i++) myVector.get(i);
		for (int i = myVector.size()-1; i >= 0; i--) myVector.remove(i);
		long End1=System.currentTimeMillis();
		
		System.out.println(End1-Start1+"ms");

		long Start2=System.currentTimeMillis();
		LinkedList<Integer> myLinkedList = new LinkedList<Integer>();
		for (int i = 0; i < 100000; i++) {
			myLinkedList.add(i);
		}
		for (int i = 0; i < 10000; i++) myLinkedList.get(i);
		for (int i = myLinkedList.size()-1; i >= 0; i--) myLinkedList.remove(i);
		long End2=System.currentTimeMillis();
		
		System.out.println(End2-Start2+"ms");

	}

}
