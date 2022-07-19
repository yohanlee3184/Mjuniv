interface ListIterator {
	boolean hasNext();

	Object next();

	boolean hasPrevious();

	Object previous();

}

class Node<E> {
	public E data;
	public Node<E> next;
	public Node<E> prev;

	public Node(E data) {
		this.data = data;
		this.next = null;
		this.prev = null;
	}

}

public class MyLinkedList<E> {

	private Node<E> head;
	private Node<E> tail;
	private int size;

	public MyLinkedList() {
		head = null;
		tail = null;
		this.size = 0;
	}
	public void addFirst(E value) {
		Node<E> newNode = new Node<E>(value);	
		newNode.next = head;	
	 
		if (head != null) {
			head.prev = newNode;
		}
	    
		head = newNode;
		size++;
			
		if (head.next == null) {
			tail = head;
		}
	}
	
	public void add(E value) {
		Node<E> newNode = new Node<E>(value);	
	 
		if (size == 0) {	// 처음 넣는 노드일 경우 addFisrt로 추가
			addFirst(value);
			return;
		}
	 
		tail.next = newNode;
		newNode.prev = tail;
		tail = newNode;
		size++;
	}
	
	public int size() {
		return this.size;
	}

	class listIterator implements ListIterator {
		private Node next;
		private Node lastReturned;
		private int nextIndex = 0;
		listIterator(){
			next=head;
		}
		listIterator(int i){
			
			for(next=head;nextIndex<i-1;nextIndex++) {
				next=next.next;
			}
		}
		@Override
		public boolean hasNext() {
			return nextIndex < size();
		}

		@Override
		public Object next() {
			lastReturned=next;
			next=next.next;
			nextIndex++;
			return lastReturned.data;
		}

		@Override
		public boolean hasPrevious() {
			// TODO 자동 생성된 메소드 스텁
			return nextIndex>=0;
		}

		@Override
		public Object previous() {
			lastReturned=next;
			next=next.prev;
			nextIndex--;
			return lastReturned.data;
		}

	}

	public ListIterator listIterator() {
		// TODO 자동 생성된 메소드 스텁
		return new listIterator();
	}

	public ListIterator listIterator(int size) {
		// TODO 자동 생성된 메소드 스텁
		return new listIterator(size);
	}


}
