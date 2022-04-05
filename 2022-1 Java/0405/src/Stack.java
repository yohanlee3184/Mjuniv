
public class Stack extends TwoWayList {

	public void push(int i) {
		super.addRight(i);
	}

	public boolean isEmpty() {
		return super.isEmpty();
	}

	public int peek() throws Exception {
		return super.getRightItem();
	}

	public void pop() throws Exception {
		super.removeRight();
	}

	@Override
	public void addRight(Integer i) {
		return;
	}

	@Override
	public void addLeft(Integer i) {
		return;
	}

}
