#include <stdio.h>
int main(void) {
	int num;
	printf("Input any num : ");
	scanf_s("%d", &num, sizeof(num));
	if (num == 1) {
		printf("my name is kohongsik. \n");
		return 0;
	}
}