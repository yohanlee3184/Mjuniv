public class Person{
	private String name;
	private String id;  // 주민번호
	// 최대 10개의 계좌 정보를 가지도록 한다.
private Account[] myAccounts=new Account[10];
private int num=0;

	public Person(String string, String string2) {
		name=string;
		id=string2;
	}

	public void report(){
		System.out.println("이름 "+name+" "+id);
		System.out.println("소유 계좌:");
		for(int i=0;i<num;i++) {
			System.out.println("예금주 "+name+" "+id+" 잔액 "+myAccounts[i].getDepo());
		}
	}
	
	public void set(Account a){
		myAccounts[num++]=a;
		}
	
	public String getName() {
		return name;
	}
	public String getId() {
		return id;
	}
	
	
	
	
	
}
