import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class Main {

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		BufferedImage img=null;
		
		try {
			img=ImageIO.read(new File("DUKE.PNG"));
			
		}catch(IOException e) {
			System.out.println("Cannot open image file.");
		}
		JLabel lb=new JLabel(new ImageIcon(img));
		JFrame frame = new JFrame();
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().add(lb);
		frame.setSize(500, 300);
		frame.setVisible(true);
	}

}