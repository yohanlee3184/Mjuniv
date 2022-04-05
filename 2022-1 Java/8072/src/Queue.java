class Node {

	public String data;
	public Node next;

	public Node(String data, Node node) {
		this.data = data;
		next = node;
	}
}

public class Queue {

	private Node front, rear;

	public Queue() {
		rear = front = null;
	}

	public void add(String i) {

		Node buf = new Node(i, null);

		if (isEmpty()) {
			front = rear = buf;
		} else {
			rear.next = buf;
			rear = rear.next;
		}

	}

	public boolean isEmpty() {
		return front == null;
	}

	public String front() throws Exception {
		if (front == null) {
			throw (new Exception("오류: LinkedList가 비었습니다."));
		}
		return front.data;
	}

	public void remove() {
		if (front != null)
			front = front.next;
	}
}
