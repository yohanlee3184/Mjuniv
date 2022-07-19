import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

class MyComparator implements Comparator<String>{
	public int compare(String o1, String o2) {
		
		char a=o1.charAt(0);
		char b=o2.charAt(0);
		
		return a-b;
	}
	
}

class LengthComparator implements Comparator<String>{
	public int compare(String o1, String o2) {
		
		int a=o1.length();
		int b=o2.length();
		
		return a-b;
	}
	
}

public class SortMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<String> myList = new ArrayList<String>();
		Scanner myScanner = new Scanner(System.in);
		while (myScanner.hasNext()) {
			myList.add(myScanner.next());
		}
		myList.sort(new MyComparator());
		for (String s: myList) {
			System.out.println(s);
		}
		
		myList.sort(new LengthComparator());
			for (String s: myList) {
				System.out.println(s);
		}
	}

}