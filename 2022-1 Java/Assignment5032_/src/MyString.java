
public class MyString {

	private char[] content;
	
	public MyString() {
		content=new char[0];
	}
	
	public MyString(char[] carray) {
		content = new char[carray.length];
		for(int i=0;i<carray.length;i++) {
			content[i]= carray[i];
		}
	}

	public MyString(String s) {
		content= new char[s.length()];
		content=s.toCharArray();
	}
	
	public int length() {
		return content.length;
	}

	public String toString() {
		String str=new String(content);
		return str;
	}
	public static MyString add(MyString a, MyString b) {
		String fin = a.toString() + b.toString();
		MyString c = new MyString(fin);
		return c;
	}
	public boolean equals(String s) {
		char[] comp=s.toCharArray();
		int n=content.length;
		if(n==comp.length) {
		int i=0;	
			while (n-- != 0) {
                if (comp[i]!=content[i]) return false;
                	i++;
            }
            return true;}
		return false;
	}

	public boolean equals(MyString s) {
		int n=content.length;
		if(n==s.content.length) {
		int i=0;	
			while (n-- != 0) {
                if (s.content[i]!=content[i]) return false;
                	i++;
            }
            return true;}
		return false;
	}
	public char charAt(int n) throws IndexOutOfBoundsException {
		return content[n];
	}
	
	public int indexOf(char c) {
		int n=content.length;
		int i=0;
			while (n-- != 0) {
                if (content[i]==c) return i;
                	i++;
            }
            return -1;
		
	}
	public int indexOf(String s) {
		int n=content.length;
		int i=0;
			while (n-- != 0) {
				if(isSubstr(i,s)) return i;
				i++;
            }
            return -1;
	}

	public boolean isSubstr(int index, String s) {
		char[] comp=s.toCharArray();
		int n=comp.length;
		int i=0;
			while (n-- != 0) {
                if (comp[i]!=content[index]) return false;
                	index++;
                	i++;
            }
            return true;}
	public MyString substring(int begin, int end) {
		if(begin<0) {begin=0;}
		if(end>content.length) {end=content.length;}
		int n=end-begin;
		char[] t=new char[n];
		int i=0;
		while(n--!=0) {
			t[i]=content[begin+i];
			i++;
			}
		MyString c = new MyString(t);
		return c;
	}

}
