
public class Assignment4032 {

	public static void main(String[] args) {
		
		int testNum=0;
		Integer testNum2=0;
		
		long intStartTime = System.currentTimeMillis();
		for (int i = 0; i < Integer.MAX_VALUE; i++) {
			testNum++;
		}
		long intStopTime = System.currentTimeMillis();
		
		System.out.println(intStopTime-intStartTime);
		
		long IntStartTime = System.currentTimeMillis();
		for (int i = 0; i < Integer.MAX_VALUE; i++) {
			testNum2++;
		}
		long IntStopTime = System.currentTimeMillis();
		
		System.out.println(IntStopTime-IntStartTime);
		
	}

}
