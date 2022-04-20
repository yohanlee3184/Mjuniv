import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class MyBufferedFileInputStream {
	
	FileInputStream myic;
	
	private static int defaultCharBufferSize = 8192;
	int readBuffer=0;
	int i=0;
	byte[]buffer; 
	
	public MyBufferedFileInputStream(String name) throws FileNotFoundException {
		myic=new FileInputStream(name);
	}
	
	public void fill() throws IOException {
		i=0;
		buffer=new byte[defaultCharBufferSize];
		readBuffer=myic.read(buffer);
	}
	
	public int read() throws IOException {
	
	if(readBuffer==0) {
		fill();
	}
	if(i==readBuffer) {
		fill();
	}
	if(readBuffer==-1) {
		return -1;
	}
	return buffer[i++];
	}

	public void close() throws IOException {
		myic.close();
	}
	
}