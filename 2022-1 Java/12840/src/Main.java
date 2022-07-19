import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JFrame;

class MyFrame extends JFrame {
	public MyFrame() {
		getContentPane().setBackground(Color.yellow);
	}

	public void paint(Graphics g) {
		super.paint(g);
		getContentPane().getGraphics().drawRect(1, 1, 50, 50);
	}
}

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		JFrame frame = new MyFrame();
		frame.setSize(500, 300);
		frame.setVisible(true);
	}

}
