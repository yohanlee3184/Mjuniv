import sms_sender.*;

interface Logger{
	void sendLog(String message);
}

class SMSLogger implements Logger{

	MsgSender mySender;
	
	public SMSLogger(String phone) {
		mySender=new MsgSender(phone);
	}

	@Override
	public void sendLog(String message) {
		System.out.println(mySender.send(message));
	}  
	
}

class AtomicPlant{
	
	Logger myLogger;
	
	public AtomicPlant(Logger logger) {
		myLogger=logger;
	}
	
	public void checkTemparature() {
		myLogger.sendLog("objectadapter_이요한_java31");
	}
	
}
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SMSLogger myLogger = new SMSLogger("01085784321"); // 조세형교수 전번임
		AtomicPlant ap = new AtomicPlant(myLogger);
		ap.checkTemparature();
	}

}