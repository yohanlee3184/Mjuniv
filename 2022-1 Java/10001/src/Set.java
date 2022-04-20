
public class Set extends List {
	@Override
	public void add(int n){
        if(!super.includes(n))super.add(n);
  }
	@Override
    public void show(){
        super.show();
        }
}
