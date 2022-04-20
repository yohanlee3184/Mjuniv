interface Comparer{
	boolean compare(Player one, Player two);
}
class AverageComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		// TODO 자동 생성된 메소드 스텁
		return one.average>two.average;
	}
	
}

class NameComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		
		return false;
	}
	
}

class Player{
	public String name;
	public double average;//타율
	public int age;
	public Player(String name, double average) {
		super();
		this.name=name;
		this.average=average;
	}
}


public class Main {
	public Player[] myPlayers;
public Main() {
	myPlayers =new Player[5];
	myPlayers[0]=new Player("김길동",0.3);
	myPlayers[1]=new Player("박길동",0.31);
	myPlayers[2]=new Player("이길동",0.32);
	myPlayers[3]=new Player("홍길동",0.33);
	myPlayers[4]=new Player("조길동",0.34);
}
public Player findMax(Comparer comparer) {
	int maxp=0;
	Player p =myPlayers[0];
	double maxav=myPlayers[0].average;
	for(int i=1;i<5;i++) {
		if(comparer.compare(p, myPlayers[i])) {
		p=myPlayers[i];
			maxp=i;
		}
	}
	return myPlayers[maxp];
}
	public static void main(String[] args) {
		Main s;
		System.out.println(s.findMax(new AverageComparer()));
		System.out.println(s.findMax(new NameComparer()));
	}

}

