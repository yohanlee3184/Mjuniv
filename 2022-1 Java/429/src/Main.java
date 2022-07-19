import java.util.ArrayList;

class Dog extends Pet{
//	String name;
	public Dog(String name) {
		super(name);
	}
	public String toString() {
		return "멍멍이 "  + super.toString();
	}
}

class Cat extends Pet{
//	String name;
	public Cat(String name) {
		super(name);
	}
	public String toString() {
		return "야옹이 "  + super.toString();
	}
}

class Pet{
	String name;
	public Pet(String name) {
		this.name=name;
	}
	@Override public String toString() {
		return name;
	}
}

class School<T extends Pet>{
	ArrayList<T> PetList = new ArrayList<>();
	public void add(T d) {
		PetList.add(d);
	}
	public void show() {
		for (T d: PetList) {
			System.out.println(d);
		}
	}
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		School<String> stringSchool=new School<String>();
		School<Dog> dogSchool = new School<>();
		School<Cat> catSchool = new School<>();
		dogSchool.add(new Dog("aaa"));
		dogSchool.add(new Dog("bbb"));
//		dogSchool.add(new Cat("bbb"));

		catSchool.add(new Cat("ccc"));
		catSchool.add(new Cat("ddd"));
		dogSchool.show();
		catSchool.show();
	}

}
