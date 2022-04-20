import java.io.FileInputStream;
import java.io.IOException;

public class Main {
	
	public static void main(String[] args) throws IOException {
		int c;
		int count = 0;
		FileInputStream mystream1= new FileInputStream("one_mega.txt");
		long start_1=java.lang.System.currentTimeMillis();
		while ( ( c = mystream1.read()) != -1 ) {
		    if ( c==97 ) count++;
		}
		long end_1=java.lang.System.currentTimeMillis();
		System.out.println("Count : "+count);
		System.out.println("소요 된 Millis : " +(end_1-start_1)+"ms");
		mystream1.close();
		
		count=0;
		MyBufferedFileInputStream mystream2 = new MyBufferedFileInputStream ("one_mega.txt");
		long start_2=java.lang.System.currentTimeMillis();
		while ( ( c = mystream2 .read()) != -1) {
		    if ( c==97) count++;
		}
		long end_2=java.lang.System.currentTimeMillis();
		System.out.println("Count : "+count);
		System.out.println("소요 된 Millis : " +(end_2-start_2)+"ms");
		mystream2.close();
	}
}