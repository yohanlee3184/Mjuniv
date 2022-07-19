public class Main extends Thread {
	String name;
	int interval;

	@Override
	public void run() {
		try {
			for (int i = 0; i < 5; i++) {
				System.out.println(name);
				sleep(interval);
			}
		} catch (Exception e) {
		}
	}

	Main(String name, int interval) {
		this.name = name;
		this.interval=interval;
	}

	public static void main(String[] args) {
		Thread t1 = new Main("apple",1000);
		Thread t2 = new Main("banana",2000);
		t1.start();
		t2.start();
	}
}
