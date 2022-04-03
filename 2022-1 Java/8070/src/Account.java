
public class Account {
private Person owner;
private int depo=0;
	
	public Account(Person p1) {
		owner=p1;
		owner.set(this);
		
	}

	public void deposit(int i) {
		// TODO 자동 생성된 메소드 스텁
		setDepo(i);
	}

	public void report() {
		System.out.println("예금주 "+owner.getName()+" "+owner.getId()+" 잔액 "+getDepo());
	}

	public int getDepo() {
		return depo;
	}

	public void setDepo(int depo) {
		this.depo = depo;
	}
	

}
