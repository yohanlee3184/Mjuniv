class Link {
	public int data;
	public Link next;

	public Link(int data, Link link) {
		this.data = data;
		next = link;
	}
}

public class Stack {
	private Link firstLink;
	
	public Stack() {
		firstLink=null;
	}

	public void add(int i) {
		Link buf=new Link(i,firstLink);
		firstLink=buf;
		}

	

	public int top() throws Exception  {
		if(firstLink==null) {
			throw(new Exception ("오류: Stack이 비었습니다."));
		}
		return firstLink.data; 
	}

	 public boolean isEmpty() {

		if(firstLink==null) {
			return true;
		}
		return false;
	}

	public void pop() {	
		if (firstLink != null) firstLink = firstLink.next; 
		}
	}

