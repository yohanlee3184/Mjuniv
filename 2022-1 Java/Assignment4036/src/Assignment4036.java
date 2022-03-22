import java.io.IOException;

public class Assignment4036 {
	public static void main(String[] args) throws IOException {
		String s;
		s = getNext();
		while (!s.equals("")) {
			System.out.println(s);
			s = getNext();
		}
	}
	
	public static String getNext() throws IOException {
		String str="";
	    int c;
	    
	    do{ c=System.in.read();
	    
	    }while(Character.isWhitespace(c));
	    if(c==-1) {return "";}
	    
		while(c!=-1&&!Character.isWhitespace(c)) {
				str+=(char)c;
				c=System.in.read();
			} 
		return str;
	    }
}
