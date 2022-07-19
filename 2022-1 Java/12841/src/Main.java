import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JFrame;
import javax.swing.JPanel;

class MyPanel extends JPanel {
	class MyMouseListener implements MouseListener{

		@Override
		public void mouseClicked(MouseEvent e) {
			// TODO 자동 생성된 메소드 스텁
			
		}

		@Override
		public void mousePressed(MouseEvent e) {
			// TODO 자동 생성된 메소드 스텁
			System.out.println("DOWN "+e.getX()+", "+e.getY());
		}

		@Override
		public void mouseReleased(MouseEvent e) {
			// TODO 자동 생성된 메소드 스텁
			System.out.println("UP "+e.getX()+", "+e.getY());
		}

		@Override
		public void mouseEntered(MouseEvent e) {
			// TODO 자동 생성된 메소드 스텁
			
		}

		@Override
		public void mouseExited(MouseEvent e) {
			// TODO 자동 생성된 메소드 스텁
			
		}
		
	}
	public MyPanel() {
		setBackground(new Color(200,255,255));
		addMouseListener(new MyMouseListener());
	}

	public void paint(Graphics g) {
		super.paint(g);
		g.drawRect(1, 1, 50, 50);
	}
}

class MyFrame extends JFrame {
	public MyFrame() {

	}
}

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		JFrame frame = new JFrame();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(500, 300);
		frame.setVisible(true);
		frame.setContentPane(new MyPanel());
	}

}
