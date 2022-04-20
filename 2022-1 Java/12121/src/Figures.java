interface Comparer{
	boolean compare(Figure one, Figure two);
}

class WidthComparer implements Comparer{

	@Override
	public boolean compare(Figure one, Figure two) {
		// TODO 자동 생성된 메소드 스텁
		return one.width()<two.width();
	}
	
}
class AreaComparer implements Comparer{

	@Override
	public boolean compare(Figure one, Figure two) {
		// TODO 자동 생성된 메소드 스텁
		return one.size()<two.size();
	}
	
}

public class Figures {
Figure[] myFigures;
int num=0;
	public Figures(int i) {
		myFigures=new Figure[i];
	}

	public void add(int kind, int width, int height) {
		if(kind==0) {
			myFigures[num++]=new tri(width,height);
		}else if(kind==1) {
			myFigures[num++]=new squ(width,height);
		}else {
			return;
		}
	}

	public void listAll() {
		for(int i=0;i<num;i++) {
	System.out.println(myFigures[i].kind()+" "+myFigures[i].width()+" "+myFigures[i].height()+" "+myFigures[i].size());
	}

	}

	public void sort(Comparer comparer) {
		Figure temp=new Figure();
		
		for(int i=0; i<num; i++) {
			for(int j=i+1; j<num; j++) {
				if(comparer.compare(myFigures[i], myFigures[j])) { //내림차순
					temp = myFigures[i];
					myFigures[i] = myFigures[j];
					myFigures[j] = temp;
				}
			}
		}
		
		
	}
}
class Figure {

	public String kind() {
		// TODO 자동 생성된 메소드 스텁
		return null;
	}

	public int height() {
		// TODO 자동 생성된 메소드 스텁
		return 0;
	}

	public int width() {
		// TODO 자동 생성된 메소드 스텁
		return 0;
	}

	public int size() {
		// TODO 자동 생성된 메소드 스텁
		return 0;
	}
	
}
class tri extends Figure{
public int width;
public int height;
	
	public tri(int width, int height) {
		this.width=width;
		this.height=height;
	}
	@Override
	public String kind() {
		return "삼각형";
	}
	@Override
	public int width() {
		return width;
	}
	@Override
	public int height() {
		return height;
	}
	@Override
	public int size() {
		return width*height/2;
	}
	
}
class squ extends Figure{
	public int width;
	public int height;

	public squ(int width, int height) {
		this.width=width;
		this.height=height;
	}
	@Override
	public String kind() {
		return "사각형";
	}
	@Override
	public int size() {
		return width*height;
	}
	
	@Override
	public int width() {
		return width;
	}
	@Override
	public int height() {
		return height;
	}
	
}
