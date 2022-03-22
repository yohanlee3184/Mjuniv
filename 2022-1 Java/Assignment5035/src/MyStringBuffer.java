
public class MyStringBuffer {
	private char[] content;
    
	public MyStringBuffer() {
		content=new char[16];
	}

	public MyStringBuffer(String s) {		
			content= new char[16+s.length()];
			char [] buf=s.toCharArray();
			int i=0;
			for(;i<buf.length;i++) {
				content[i]=buf[i];
			}
	}

	public int length() {
		int i=0;
		if(content.length>=16) {
		while(content[i]!='\0') {
			i++;
		}}else {
			i=content.length;
		}
		
		return i;
	}

	public int capacity() {
		return content.length;
	}
	
	public String toString() {
		String str=new String(content,0,length());
		return str;
	}

	public void append(MyStringBuffer t) {
		int len=length()+t.length();
		int len2=length();
		if(len>capacity()) 
		{
		char[] c=new char[16+len];
		for(int i=0;i<length();i++) {
			c[i]=content[i];
		}
		for(int i=0;i<t.length();i++) {
			c[i+length()]=t.content[i];
		}
		content=c;}else {
			
			for(int i=0;i<t.length();i++) {
				content[i+len2]=t.content[i];
			}
		}
	}
	
	public void append(int x) {
		String num = String.valueOf(x);
        char[] t = num.toCharArray();
		int len=length()+t.length;
		int len2=length();
		if(len>capacity()) {
		char[] c=new char[len];
		for(int i=0;i<length();i++) {
			c[i]=content[i];
		}
		for(int i =0;i<t.length;i++) {
			c[i+length()]=t[i];
		}
		content=c;}else {
			for(int i=0;i<t.length;i++) {
				content[i+len2]=t[i];
			}
		}
		
	}

	public void delete(int x, int y) {

		int len=length()-(y-x);
		int len2=length();
        int i=0;
        for(i=0;i<x;i++) {
        	content[i]=content[i];
        }
        
        for(;i<len;i++) {
        	content[i]=content[i+y-x];
        }
        
        for(;i<len2;i++) {
        	content[i]='\0';
        }
  
	}

	public void insert(int i, String string) {
		char[] arr= string.toCharArray();
		int len=arr.length+length();
		char[] t=new char[len];
		int x=0;
		int y=0;
		int z=0;
		for(;x<i;x++) {
			t[x]=content[x];
			z++;
		}
		for(;x<i+arr.length;x++) {
			t[x]=arr[y];
			y++;
		}
		for(;x<len;x++) {
			t[x]=content[z];
			z++;
		}
		for(int p=0;p<len;p++) {
			content[p]=t[p];
		}
	}

	public void reverse() {
		char[] t=new char[length()];
		int i=0;
		int n=length()-1;
			for(;i<length();i++) {
                t[i]=content[n];
                n--;
			}
			for(i=0;i<length();i++) {
                content[i]=t[i];
			}
			
	}

	public void trimToSize() {
		String str=new String(content,0,length());
		char[]trim=str.toCharArray();
				content=trim;
	}



}
