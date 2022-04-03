import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		MyIntArray t=new MyIntArray(); 
		while(sc.hasNext()) {
		switch(sc.next()) {
		case"a": t.add(sc);
		break;
		case"i":t.intervalAdd(sc);
			break;
		case"s":t.sortDown();	
			break;
		case"p":t.printAll();
			break;
		case"x":t.intervalDel(sc);
			break;
		}}

	}

}
