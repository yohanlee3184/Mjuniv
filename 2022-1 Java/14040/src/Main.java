
class FigVector {
	public Figure[] mf=new Figure[10];
	public int num=0;

	public void add(Object rect) {
		mf[num]=(Figure) rect;
		num++;
	}

	public void show() {
		for(int i=0;i<num;i++) {
			mf[i].show();
		}
		
	}
	

}

class Figure{
    public void show(){
        System.out.println("Figure 입니다.");
    }
}
class Rect extends Figure{
    @Override public void show(){
        System.out.println("사각형 입니다.");
    }
}
class Oval extends Figure{
    @Override public void show(){
        System.out.println("타원형 입니다.");
    }
}

public class Main{
	public static void main(String[] args){
		FigVector fv = new FigVector();
		fv.add(new Rect());
		fv.add(new Rect());
		fv.add(new Oval());
		fv.add(new Oval());
		fv.show();
	}
}


