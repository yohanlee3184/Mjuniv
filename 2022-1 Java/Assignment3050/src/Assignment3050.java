
public class Assignment3050 {
	public static int divide(int a, int b) throws Exception{
		if (b==0){throw new Exception("Divide");}
		return a/b;
	}

	public static void main(String[] args) {
		try {
			int result = 0;
			result=divide(3 , 2);
			System.out.println(result);
			result=divide(3 , 0);
			System.out.println(result);
			
		}catch(Exception e) {
			System.out.println("Error");
			return;
		}finally {
			System.out.println("end_1");
		}
		System.out.println("end_2");
	}

}
