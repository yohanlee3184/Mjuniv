
public class Main {

	public static void main(String[] args) {
		char charArray[] = { '가', '나', '다' };
		MyString s = new MyString("Hello");
		MyString t = new MyString(" world");
		MyString u = new MyString(charArray);
		System.out.println("1. " + u);
		System.out.println("2. " + s);
		s = MyString.add(s, t); 
		System.out.println("3. " + s);
		System.out.println("4. " + s.equals("Hello")); 
		System.out.println("5. " + s.equals("Hello world")); 
		System.out.println("6. " + s.equals(new MyString("Hello world"))); 
		System.out.println("7. " + s.length());
		System.out.println("8. " + s.charAt(6)); 
		try {
			System.out.println("9. " + s.charAt(99));
		} catch (IndexOutOfBoundsException e) {
			System.out.println("9. " + "인덱스 오류");
		}
		System.out.println("10. " + s.indexOf('w')); 
		System.out.println("11. " + s.indexOf('x'));  
		System.out.println("12. " + s.indexOf("rld"));  
		System.out.println("13. " + s.indexOf("wol"));
		System.out.println("14. " + s.substring(2,5));
		System.out.println("15. " + s.substring(-1, 100));
	}

}
