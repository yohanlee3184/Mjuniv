#include<stdio.h>


int rfibo(int n) {

	if (n == 1 || n == 2) return 1; 
	else {
		return rfibo(n - 1) + rfibo(n - 2);
	}
}


int main(void) {

	for (int i = 1; rfibo(i)<1000; i++) {
		
		printf("%d ¹øÂ° fibonacci number = %d\n", i, rfibo(i));

	}

	return 0;
}