import java.io.IOException;
import java.io.InputStream;

public class MyScanner {
	private InputStream c;
	private int mark = 0;

	public MyScanner(InputStream in) {
		c = in;
	}

	public boolean hasNextInt() throws IOException {
		int t;
		do {
			t = c.read();
		} while (Character.isWhitespace(t));
		if (t != -1 && t >= 48 && t <= 57) {
			c.skip(-1);
			return true;
		}
		return false;
	}

	public int nextInt() throws IOException {
		int i = 0;
		String str = "";
		while (true) {
			i = c.read();
			if (Character.isWhitespace(i)) {
				break;
			}
			str += (char) i;
		}
		i = Integer.parseInt(str);
		return i;
	}

	public boolean hasNext() throws IOException {
		int t;
		do {
			t = c.read();
		} while (Character.isWhitespace(t));
		if (t != -1) {
			c.skip(-1);
			return true;
		}
		return false;
	}
	
	public String next() throws IOException {
		int i = 0;
		String str = "";
		while(!Character.isWhitespace(i)) {
			str+=(char)i;
			i=c.read();
		} 
		return str;
	}
}