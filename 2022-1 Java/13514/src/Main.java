import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.ArrayList;

import javax.swing.JFrame;
import javax.swing.JPanel;

class MyMouseListener implements MouseListener {
	int x_1;
	int y_1;
	int x_2;
	int y_2;
	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO 자동 생성된 메소드 스텁

	}

	@Override
	public void mousePressed(MouseEvent e) {
		// TODO 자동 생성된 메소드 스텁
		x_1 = e.getX();
		y_1 = e.getY();
	}

	@Override
	public void mouseReleased(MouseEvent e) {
		// TODO 자동 생성된 메소드 스텁
		x_2 = e.getX();
		y_2 = e.getY();
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

class MyPanel extends JPanel {
	MyMouseListener mml = new MyMouseListener();
	public MyPanel() {
		addMouseListener(mml);
	}

	int num = 0;
	ArrayList<Figure> Figures = new ArrayList<>();

	void addFigures(int n, int x, int y, int w, int z) {
		switch (n) {
		case 0:
			Figures.add(new Rect(x, y, w, z));
			num++;
			break;
		case 1:
			Figures.add(new Oval(x, y, w, z));
			num++;
			break;
		case 2:
			Figures.add(new Line(x, y, w, z));
			num++;
			break;
		}

	}

	public void paint(Graphics g) {
		super.paint(g);
		g.drawRect(190, 20, 70, 70);
		g.drawRect(200, 30, 50, 50);

		g.drawRect(390, 20, 70, 70);
		g.drawOval(400, 30, 50, 50);

		g.drawRect(590, 20, 70, 70);
		g.drawLine(600, 30, 650, 80);

		for (int i = 0; i < num; i++) {
			Figures.get(i).draw(g);
		}
	}
}

class MyFrame extends JFrame {

	public MyFrame() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		int x1;
		int x2;
		int y1;
		int y2;
		MyFrame frame = new MyFrame();
		MyPanel panel = new MyPanel();
		frame.setSize(1000, 600);
		frame.setVisible(true);
		frame.setContentPane(panel);
		while (true) {
			if (panel.mml.x_1 > 190 && panel.mml.x_1 < 260&&panel.mml.y_1 > 20 && panel.mml.y_1 < 90) {
				x1 = panel.mml.x_1;
				x2 = panel.mml.x_2;
				y1 = panel.mml.y_1;
				y2 = panel.mml.y_2;
System.out.println("사각형");
				panel.addFigures(0, x1, y1, x2, y2);
			} else if (panel.mml.x_1> 390 && panel.mml.x_1 < 460&&panel.mml.y_1 > 20 && panel.mml.y_1 < 90 ) {
				x1 = panel.mml.x_1;
				x2 = panel.mml.x_2;
				y1 = panel.mml.y_1;
				y2 = panel.mml.y_2;
				System.out.println("원");
				panel.addFigures(1, x1, y1, x2, y2);
			} else if (panel.mml.x_1 > 590 && panel.mml.x_1 < 660&&panel.mml.y_1 > 20 && panel.mml.y_1 < 90 ) {
				x1 = panel.mml.x_1;
				x2 = panel.mml.x_2;
				y1 = panel.mml.y_1;
				y2 = panel.mml.y_2;
				System.out.println("직선");
				panel.addFigures(2, x1, y1, x2, y2);
			}
		}
	}

}
