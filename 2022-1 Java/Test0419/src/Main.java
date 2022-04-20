interface Logger{
	void writeLog(String message);
}

class Printer {
	public void print(String msg) {
		System.out.println("프린터가 출력: " + msg);
	}
}

class PrintLogger extends Printer implements Logger{

	@Override
	public void writeLog(String message) {
		print(message);
	}  
	
}

class AtomicPlant{
	Logger myLogger;
	public AtomicPlant(Logger logger) {
		myLogger=logger;
	}
	public void checkTemparature() {
		myLogger.writeLog("66도");
	}
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		PrintLogger myLogger = new PrintLogger();
		AtomicPlant ap = new AtomicPlant(myLogger);
		ap.checkTemparature();
	}

}