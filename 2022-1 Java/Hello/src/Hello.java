public class Hello
{
    public static void main(String [] arg)
    {
    	System.out.println(""+fact(5));
    	System.out.println(""+fact(9));
    }
public static int fact(int num) {
	if(num==1) {
		return 1;
	}else {
		return num*fact(num-1);
	}
}
}

