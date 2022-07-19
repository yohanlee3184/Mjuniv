interface Sort {
	
	public boolean mySort (Student s1, Student s2);
	
}

class idSort implements Sort{

	@Override
	public boolean mySort(Student s1, Student s2) {
		// TODO 자동 생성된 메소드 스텁
		return s1.getId().compareTo(s2.getId()) > 0;
	}
	
}

class gpaSort implements Sort{

	@Override
	public boolean mySort(Student s1, Student s2) {
		// TODO 자동 생성된 메소드 스텁
		return s1.getGpa()<s2.getGpa();
	}
	
}

class nameSort implements Sort{

	@Override
	public boolean mySort(Student s1, Student s2) {
		// TODO 자동 생성된 메소드 스텁
		return s1.getName().compareTo(s2.getName()) > 0;
	}
	
}


public class School {
	
	private Student[] students;
	private int size;
	private int maxSize;
	
	public School(int size) {
		maxSize = size;
		students = new Student[size];
		size = 0;  // empty
	}
	
	public void add(Student p) {
		if (size >= maxSize) return;
		students[size++] = p;
	}
	
	public void sort(Sort s) {
		
		for (int last=size-1; last>=0; last--) {
			for (int i=0; i<last; i++) {
				// 현재로서는 이름의 오름 차순으로만 정렬할 수 있다.
				if (s.mySort(students[i],students[i+1])) {
					Student p = students[i];
					students[i] = students[i+1];
					students[i+1] = p;
				}
			}
		}
	}
	
	
	public void print() {
		for (int i=0; i<size; i++) {
			System.out.println(students[i]);
		}
	}
}
