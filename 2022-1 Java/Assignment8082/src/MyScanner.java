import java.io.IOException;
import java.io.InputStream;

public class MyScanner {
	private InputStream c;
	private int mark =0;
	
	public MyScanner(InputStream in) {
		c=in;
	}
	
	public boolean hasNextInt() throws IOException  {
		int i=0;
		if(c.markSupported()!=true) {
				i=0;
				if((i=c.read())!=-1&&i>=48&&i<=57) {
					c.skip(-1);
					return true;
				}
			}else {
				i=0;
				c.mark(mark);
				if((i=c.read())!=-1&&i>=48&&i<=57) {
					c.reset();
					return true;
				}
			mark=0;
			}
		return false;
		}

	public int nextInt() {
		
		try {
			int i=0;
			String str="";
			while(true) {
				i=c.read();
				if(Character.isWhitespace(i)) {
					break;
				}
				str+=(char)i;
			}
			if(str=="") {
				mark=0;
				return 0;
			}
			i=Integer.parseInt(str);
			return i;
		} catch (IOException e) {
			return 0;
		}
		
	}

	public boolean hasNext() {
		if(c.markSupported()!=true) {
			try {
				int i=0;
				if((i=c.read())!=-1&&Character.isWhitespace(i)!=true) {
					c.skip(-1);
					return true;
				}
			} catch (IOException e) {
				return false;
			}
			return false;
		}else {
			try {
			int i=0;
			c.mark(mark);
			if((i=c.read())!=-1&&Character.isWhitespace(i)!=true) {
				c.reset();
				return true;
			}
		} catch (IOException e) {
			// TODO 자동 생성된 catch 블록
			return false;
		}
		mark=0;
		return false;
		}
	}

	public String next() {
		try {
			int i=c.read();
			String str="";
			while(i!=-1&&!Character.isWhitespace(i)) {
				str+=(char)i;
				i=c.read();
			} 
				if(c.markSupported()!=true) {
					c.read();
				}
			return str;
		} catch (IOException e) {
			System.out.println("오류");
			return null;
		}
}
}
