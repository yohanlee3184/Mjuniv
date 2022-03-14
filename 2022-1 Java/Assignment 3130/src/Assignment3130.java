import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Assignment3130 {

	public static void main(String[] args) throws FileNotFoundException {

		int sum=0;
		
		for(int i=0;i<args.length;i++) {
		
			File doc =new File(args[i]);
			Scanner obj=new Scanner(doc);
			while(obj.hasNextInt()) {
				sum+=obj.nextInt();
			}
			
		}
		
		
	}

}
