import java.util.Scanner;

public class MyIntArray {
	private int[] myInt;
	private int size = 0;

	public MyIntArray() {
		myInt = new int[4];
	}

	public void add(Scanner sc) {
		if (size == myInt.length) {
			int[] save = new int[size * 2];
			for (int i = 0; i < myInt.length; i++) {
				save[i] = myInt[i];
			}
			myInt = save;
		}
		myInt[size] = sc.nextInt();
		size++;
	}

	public void intervalAdd(Scanner sc) {
		size++;
		if (size == myInt.length) {
			int[] t = new int[myInt.length * 2];
			for (int i = 0; i < size; i++) {
				t[i] = myInt[i];
			}
		myInt=t;
		}
		int next = sc.nextInt();
		int i;
		int[] save = new int[myInt.length];
		for (i = 0; i < next; i++) {
			save[i] = myInt[i];
		}
		save[next] = sc.nextInt();
		i++;
		for (; i < size; i++) {
			save[i] = myInt[i-1];
		}
		myInt = save;
		
	}
	
	public void intervalDel(Scanner sc) {
		
		int del = sc.nextInt();
		int i;
		int[] save = new int[myInt.length];
		for (i = 0; i < del; i++) {
			save[i] = myInt[i];
		}
		i++;
		size--;
		for (; i < size+1; i++) {
			save[i-1] = myInt[i];
		}
		myInt = save;
		
		if (size <= myInt.length*1/4) {
			int[] t = new int[myInt.length * 1/2];
			for (int j = 0; j < size; j++) {
				t[j] = myInt[j];
			}
			myInt = t;
		}
	}

	public void sortDown() {
		int[] save = new int[myInt.length];
		int z = size;
		int i = 0;
		while (z-- != 0) {
			save[i] = myInt[z];
			i++;
		}
		myInt=save;
	}
	public void printAll() {
		System.out.print("* 크기 "+myInt.length+" 사용 "+size+" 내용 ");
		for(int i=0;i<size;i++) {
			System.out.print(myInt[i]+" ");
		}
		System.out.println("끝");
	}
}
