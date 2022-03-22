
public class MyStringBuffer {
	private char[] content;
    private int size;
	public MyStringBuffer() {
		content=new char[0];
		size=16;
	}

	public MyStringBuffer(String s) {		
			content= new char[s.length()];
			content=s.toCharArray();
			size =16+content.length;
	}

	public int length() {
		return content.length;
	}

	public int capacity() {
		return size;
	}
	public String toString() {
		String str=new String(content);
		return str;
	}

	public void append(MyStringBuffer t) {
		int len=content.length+t.content.length;
		char[] c=new char[len];
		for(int i=0;i<content.length;i++) {
			c[i]=content[i];
		}
		for(int i=0;i<t.content.length;i++) {
			c[i+content.length]=t.content[i];
		}
		content=c;
	}
	
	public void append(int x) {
		String num = String.valueOf(x);
        char[] t = num.toCharArray();
		int len=content.length+t.length;
		char[] c=new char[len];
		for(int i=0;i<content.length;i++) {
			c[i]=content[i];
		}
		for(int i =0;i<t.length;i++) {
			c[i+content.length]=t[i];
		}
		content=c;
		
	}

	public void delete(int x, int y) {

		int len=content.length-(y-x);
        char[] t = new char[len];
        int i=0;
        for(i=0;i<x;i++) {
        	t[i]=content[i];
        }
        
        for(;i<len;i++) {
        	t[i]=content[i+y-x];
        }
        content=t;
	}

	public void insert(int i, String string) {
		char[] arr= string.toCharArray();
		int len=arr.length+content.length;
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
		content=t;
	}

	public void reverse() {
		char[] t=new char[content.length];
		int i=0;
		int n=content.length-1;
			for(;i<content.length;i++) {
                t[i]=content[n];
                n--;
			}
			content=t;
	}

	public void trimToSize() {
		size=content.length;
	}



}
