#include <stdio.h>
int main() {
	int a = 1;
	int b = 2;
	
	a = scanf("T: ");
	
	if (a == b) {
		printf("A�� B�� ����.");
	} else {
		printf("A�� B�� ���� �ʴ�.");
	}
	
	printf("\n\n");
	
	switch(a) {
		case 1:
			printf("A�� 1�̴�.");
			break;
		case 2:
			printf("A�� 2�̴�.");
			break;
		default:
			printf("A�� 1��, 2�� �ƴϴ�.");
			break;
	}

}
