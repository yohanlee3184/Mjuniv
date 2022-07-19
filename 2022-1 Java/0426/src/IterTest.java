class List{
	public class Link{
		 Integer data;
	 Link next;
		 Link(Integer i, Link n){
			this.data = i; this.next = n;
		}
	}
	public Link first;
    public int max=0;
    public Link cursor;

	boolean isEmpty(){
		return first == null;
	}
	public void add(Integer i){
		Link l = new Link(i, first);
		first = l;
		max++;
	}
	
	
	
	public void out() {
		if (cursor==null) {
			cursor = first;
			System.out.print(" --> " + cursor.data);
			cursor = cursor.next;
		}else {
			System.out.print(" --> " + cursor.data);
			cursor = cursor.next;
		}
		
	}
	
	
}

class IterTest{
	public static void main(String[] args){
		List myList = new List();
		myList.add(1);
		myList.add(2);
		myList.add(3);
		myList.add(4);
		
		System.out.print("시작: ");
		myList.out();
		myList.out();
		myList.out();
		myList.out();
		System.out.println("");
		
	}
}
