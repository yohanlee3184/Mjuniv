import java.util.Scanner;
class Unit{
	public boolean areYouThere(int x, int y) {
		// TODO 자동 생성된 메소드 스텁
		return false;
	}
	public void damage(int i) {
		// TODO 자동 생성된 메소드 스텁
	}
	
}
public class Main {
	Unit[] units=new Unit[40];
	int unitNum =0;
	
	public void run() {
		units[unitNum++] = new Tank(10,10);
		units[unitNum++] = new Tank(20,20);
		units[unitNum++] = new Soldier(5, 5);
		units[unitNum++] =new Soldier(3, 3);
		
		Scanner s = new Scanner(System.in);
		while (s.hasNextInt()) {
			int x = s.nextInt();
			if (s.hasNext()) {
				int y = s.nextInt();
				for (int i=0; i<unitNum; i++){
					if (units[i].areYouThere(x, y))
						units[i].damage(10);
				}
			} else break;
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Main m = new Main();
		m.run();
	}

}
