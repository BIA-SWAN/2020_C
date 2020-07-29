#include <stdio.h>
int main() {
	int a = 1;
	int b = 2;
	
	a = scanf("T: ");
	
	if (a == b) {
		printf("A와 B는 같다.");
	} else {
		printf("A와 B는 같지 않다.");
	}
	
	printf("\n\n");
	
	switch(a) {
		case 1:
			printf("A는 1이다.");
			break;
		case 2:
			printf("A는 2이다.");
			break;
		default:
			printf("A는 1도, 2도 아니다.");
			break;
	}

}
