import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class AddFiles {

	public static void main(String[] args) throws FileNotFoundException {

		int num=0;
		int sum=0;
		
		for(int i=0;i<args.length;i++) {
			
			File doc =new File(args[i]);
			Scanner obj=new Scanner(doc);
			while(obj.hasNextInt()) {
				num=obj.nextInt();
				sum+=num;
			}
			
		}
		System.out.println("정수의 합은 : "+sum);
	}

}