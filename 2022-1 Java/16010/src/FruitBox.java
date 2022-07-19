import java.util.*;   // Vector나 ArrayList를 위해 import한다.

class Fruit extends Things {
	//String name;
	Fruit(String name){
		super(name);
	}
	
}

class Apple extends Fruit{
	Apple(String name){
		super(name);
	}
	@Override public void show(){
		System.out.println("사과입니다. ");
		super.show();
	}
}

class Banana extends Fruit{
	Banana(String name){
		super(name);
	}
	public void show(){
		System.out.println("바나나입니다: ");
		super.show();
	}
}
class Things{
	String name;
	public Things(String name) {
		this.name=name;
	}
	public void show() {
		System.out.println("이름은: " + name);
	}
}
class GeneralBox extends Things{
	// myList 는 Vector나 ArrayList를 이용한다. 적당한 크기의 배열도 OK
	ArrayList<Things> myList=new ArrayList<>();
	//String name;
	
	GeneralBox(String name){
		super(name);
	}
	public void add(Things f){
		myList.add(f);
	}
	public void show(){
		System.out.println("[상자입니다. 이름은: " + name);
		System.out.println("내용물은:");
		for (int i=0; i<myList.size(); i++){
			 myList.get(i).show();
		}
	}
}

class Main{
    public static void main(String[] args){
        GeneralBox b1 = new GeneralBox("큰 상자");
        GeneralBox b2 = new GeneralBox("작은 상자");
        b1.add(new Apple("김사과"));
        b1.add(new Banana("홍바나나"));
        b2.add(new Apple("이사과"));
        b1.add(b2);
        b1.add(new Apple("박 사과"));
        b1.add(new Apple("최 사과"));
        b1.add(new Banana("박 바나나"));
        b1.show();
    }
}
