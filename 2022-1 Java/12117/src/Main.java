interface Printer{
	int select();
}
class SimpleBookPrinter implements Printer{

	@Override
	public int select() {
		// TODO 자동 생성된 메소드 스텁
		return 0;
	}
	
}

class PrettyBookPrinter implements Printer{

	@Override
	public int select() {
		// TODO 자동 생성된 메소드 스텁
		return 1;
	}
	
}

class Book{
	public String name;
	public String isbn;
	public String author;
	public int selected;

	public Book(String string, String string2, String string3) {
		name=string;
		isbn=string2;
		author=string3;
	}

	public void setPrinter(Printer printer) {
		selected=printer.select();
	}

	public void print() {
		if(selected==0) {
			System.out.println(name+"/"+author+"/"+isbn);
		}else if(selected==1) {
			System.out.println("***** Title: "+name);
			System.out.println("***** Author: "+author);
			System.out.println("***** ISBN: "+isbn);
		}
		
	}
	
}

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Book b1 = new Book("Java Book", "111-22-333333", "Jane Austin");
		System.out.println("첫번째 출력:");
		b1.setPrinter(new SimpleBookPrinter());
		b1.print();
		System.out.println("두번째 출력:");
		b1.setPrinter(new PrettyBookPrinter());
		b1.print();
	}

}