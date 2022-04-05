
public class MyQueue extends MyLinkedList{

	
	
	public void insert(String next) {
		
		if (link == null) {
			link = new Node(next);
			return;
		}
		Node cur = link;
		while (cur.next != null) {
			cur = cur.next;
		}
		Node node = new Node(next);
		cur.next = node;
		node.prev = cur;
		
	}

	public String peek() {
		// TODO 자동 생성된 메소드 스텁
		return link.data;
	}

	public void remove() {
		// TODO 자동 생성된 메소드 스텁
		if (link != null)
			link = link.next;
		if (link == null) {
			return;
		}
		    link.prev=null;
	}
	

	public boolean isEmpty() {
		return link==null;
	}
	
	public void addFront(String string) {
		return;
	}

	public void addBack(String string) {
		return;
	}

	public void printForward() {
		return;
	}

	public void printBackward()  {
		return;
	}

	public void removeFront(){
		return;
	}

	public void removeBack() {
		return;
	}

	
}
