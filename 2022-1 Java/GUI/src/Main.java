import java.awt.Font;
import java.awt.Graphics;

import javax.swing.JFrame;

class MyFrame extends JFrame {
	public MyFrame(String Title) {
		super(Title);
		this.setSize(500, 300);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		Font myFont=new Font("굴림체",Font.PLAIN,32);
		this.setFont(myFont);
	}
	//	void draw() {
	//		Graphics g=this.getGraphics();
	//		g.drawRect(100,100,50,50);
	//		System.out.println("실행됨");
	//	}
	@Override public void paint(Graphics g) {
		super.paint(g);
		g.drawRect(100,100,100,50);
		g.drawOval(100,100,100,50);
		g.drawLine(100,100,200,150);
		g.drawString("Hello", 100, 100);
	}
}
	public class Main {
		public static void main(String[] args) {
			// TODO 자동 생성된 메소드 스텁
			MyFrame f = new MyFrame("그림판 프레임");
			f.setVisible(true);
			
		}
	}

