
public class MyStringArray {
private String[] myString;
private int size=0;
	public MyStringArray(int i) {
		myString=new String[i];
	}

	public void add(String next) throws Exception {
		if(size==myString.length) {
			throw(new Exception ("크기초과"));}
		myString[size]=next;
		size++;
	}

	public int size() {
		return size;
	}

	public String elementAt(int i) throws Exception {
		if(size<=i) {
			throw(new Exception ("인덱스범위초과"));}
		return myString[i];
	}


}
