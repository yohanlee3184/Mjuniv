import java.awt.Graphics;
import java.util.ArrayList;
import java.util.Scanner;
import javax.swing.JFrame;
class Frame extends JFrame {
	int num=0;	
	public Frame(String Title) {
		super(Title);
		this.setSize(500,300);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	 ArrayList<Figure> Figures = new ArrayList<>();
	 void addFigures(int n, int x, int y, int w, int z, String s) {
		 switch(n) {
		 case 0:
			 Figures.add(new Rect(x,y,w,z));
			 num++;
			 break;
		 case 1:
			 Figures.add(new Oval(x,y,w,z));
			 num++;
			 break;
		 case 2:
			 Figures.add(new Line(x,y,w,z));
			 num++;
			 break;
		 case 3:
			 Figures.add(new string(s,w,z));
			 num++;
			 break;
		 } 
		 
	 }
	
	@Override public void paint(Graphics g) {
		super.paint(g);
		for(int i=0;i<num;i++) {
		Figures.get(i).draw(g);
	}
	}
}

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		Scanner sc = new Scanner(System.in);
		Frame f = new Frame("과제");
		int num=0;
		int x=0;
		int y=0;
		int w=0;
		int z=0;
		String s=null;
		while(sc.hasNextInt()) {
			num=sc.nextInt();
			if(num==3) {
				s=sc.next();
				w=sc.nextInt();
				z=sc.nextInt();
			}else {
				x=sc.nextInt();
				y=sc.nextInt();
				w=sc.nextInt();
				z=sc.nextInt();
			}
			f.addFigures(num,x,y,w,z,s);
		}
		f.repaint();
		f.setVisible(true);
	}

}
