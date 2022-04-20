interface Comparer{
	boolean compare(Player one, Player two);
}
class AverageComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		// TODO 자동 생성된 메소드 스텁
		return one.average<two.average;
	}
	
}
class ReverseAverageComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		// TODO 자동 생성된 메소드 스텁
		return one.average>two.average;
	}
	
}
class AgeComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		// TODO 자동 생성된 메소드 스텁
		return one.age<two.age;
	}
	
}

class NameComparer implements Comparer{

	@Override
	public boolean compare(Player one, Player two) {
		int num=one.name.compareTo(two.name);
		return (num>0);
	}
	
}

class Player{
	public String name;
	public double average;//타율
	public int age;
	public Player(String name,int age,double average) {
		this.age=age;
		this.name=name;
		this.average=average;
	}
	
}
class Team {
	
	Player[] myPlayers;
	int num=0;
	
	public Team(int i) {
		myPlayers=new Player[i];
	}

	public void add(Player player) {
		myPlayers[num++]=player;
	}

	public String getBest(Comparer comparer) {
		int maxp=0;
		Player p =myPlayers[0];
		for(int i=1;i<num;i++) {
			if(comparer.compare(p, myPlayers[i])) {
			p=myPlayers[i];
				maxp=i;
			}
		}
		return myPlayers[maxp].name;
	}

	
}

public class Main{
	public static void main(String[] args){
		Team myTeam = new Team(20);  // 최대 20명
		myTeam.add(new Player("홍길동", 25, 0.25));
		myTeam.add(new Player("조길동", 35, 0.2));
		myTeam.add(new Player("정길동", 22, 0.33));
		myTeam.add(new Player("박길동", 27, 0.30));
		myTeam.add(new Player("김길동", 24, 0.35));
		
		System.out.println("이름이 가장 빠른 사람:" + myTeam.getBest(new NameComparer()));
        System.out.println("나이가 가장 많은 사람:"+ myTeam.getBest(new AgeComparer()));
		System.out.println("타율이 가장 높은 사람:" + myTeam.getBest(new AverageComparer()));
		System.out.println("타율이 가장 낮은 사람:" + myTeam.getBest(new ReverseAverageComparer()));
	}
}