
public class DogSchool {
private Dog[] myDogs=new Dog[100];
private String name;
private int num=0;

	public DogSchool(String string) {
		name=string;
	}

public void register(Dog d1) {	
	myDogs[num]=d1;
	myDogs[num].setSchool(name);
	num++;
}

public void speak() {
	System.out.println("여기는 "+name+" 학생은:");
	for(int i=0;i<num;i++)
	System.out.println(myDogs[i].getName()+" "+myDogs[i].getspec()+" 소속학교는 "+name);
	System.out.println("");
}

}
