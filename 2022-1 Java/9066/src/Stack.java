import java.util.LinkedList;

class Stack extends LinkedList{
	
	@Override
	 public boolean add(Object e) {
        push(e);
        return true;
    }
	
	
	
	@Override 
	public void addLast(Object o) {
		throw(new UnsupportedOperationException ("UnsupportedOperationException"));
	}
	 
	public void addAdd(Object o) {
		throw(new UnsupportedOperationException ("UnsupportedOperationException"));
	}
	
	@Override 
	public Object getFirst() {
		throw(new UnsupportedOperationException ("UnsupportedOperationException"));
	}
	@Override 
	public Object getLast() {
		throw(new UnsupportedOperationException ("UnsupportedOperationException"));
	}
	
}
