
public class Dog {
private String name;
private String spec;
private String school=null;

	public Dog(String string, String string2) {
		name=string;
		spec=string2;
	}

	public void speak() {
		// TODO 자동 생성된 메소드 스텁
		if(school==null) {
			System.out.println(getName()+" "+getspec()+" 소속학교는 없습니다.");
			System.out.println("");
		}else {
		System.out.println(getName()+" "+getspec()+" 소속학교는 "+school);
		System.out.println("");}
	}

	public void rename(String string) {
		// TODO 자동 생성된 메소드 스텁
		name=string;
		
	}
	
	public String getName() {
		// TODO 자동 생성된 메소드 스텁
		return name;
	}
	public String getspec() {
		// TODO 자동 생성된 메소드 스텁
		
		return spec;
	}
	
	public void setSchool(String s) {
		school=s;
	}
	

}
