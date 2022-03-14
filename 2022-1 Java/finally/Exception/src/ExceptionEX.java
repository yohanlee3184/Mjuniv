
public class ExceptionEX {
	public static int divide(int a, int b) throws Exception {
		if (b == 0) {
			throw (new Exception("Divide"));
		}
		return a / b;
	}

	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁
		try {
			int result;
			result = divide(3, 2);
			System.out.println((result));
			result = divide(3, 0);
			System.out.println((result));
			
		} catch (Exception e) {
			System.out.println("Error");
		}
	}
}
