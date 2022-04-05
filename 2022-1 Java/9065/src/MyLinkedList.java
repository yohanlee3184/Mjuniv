class Node {
	public String data;
	public Node next;
	public Node prev;
	public Node(String data) {
		this.data = data;
	}
}

public class MyLinkedList {

	protected Node link = null;
	
	public boolean isEmpty() {
		return link==null;
	}

	public void addFront(String string) {
		if (link == null) {
			link = new Node(string);
			return;
		}

		Node node = new Node(string);
		node.next = link;
		link.prev = node;
		link = node;
	}

	public void addBack(String string) {
		if (link == null) {
			link = new Node(string);
			return;
		}
		Node cur = link;
		while (cur.next != null) {
			cur = cur.next;
		}
		Node node = new Node(string);
		cur.next = node;
		node.prev = cur;
	}

	public void printForward() throws Exception {
		if(link==null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		Node buf = link;
		while (buf != null) {
			System.out.println(buf.data);
			buf = buf.next;
		}
	}

	public void printBackward() throws Exception {
		if(link==null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		Node cur = link;
		while (cur.next != null) {
			cur = cur.next;
		}
		while (cur != null) {
			System.out.println(cur.data);
			cur = cur.prev;
		}

	}

	public String peekFront() throws Exception {
		if (link == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		return link.data;
	}

	public String peekBack() throws Exception {
		if (link == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		Node cur = link;
		while (cur.next != null) {
			cur = cur.next;
		}
		return cur.data;
	}

	public void removeFront() throws Exception {
		if (link == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		if (link != null)
			link = link.next;
		link.prev = null;
	}

	public void removeBack() throws Exception {
		if (link == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		Node cur = link;
		while (link.next != null) {
			link = link.next;
		}
		if (link != null)
			link = link.prev;
		link.next = null;
		link = cur;
	}

	public void remove(String string) throws Exception {
		if (link == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		    Node cur = link;
		    while(cur.data!=string) {
		    	if (cur.next == null) {
		            return;
		        }
		    	cur=cur.next;
		    }
		    Node prev = cur.prev;
		    Node next = cur.next;
		    if (prev == null) {
		        link = next;
		    } else if (next == null) {
		        prev.next = null;
		    } else {
		        prev.next = next;
		        next.prev = prev;
		    }

	}

}