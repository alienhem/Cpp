#include <stdio.h>

int hour, minute, hourAdd, minuteAdd;

void counter(){
	minute += minuteAdd;
	hour += minute/60;
	minute%=60;
	hour += hourAdd;
}

int main(void){
	int number;
	printf("�� ������ ���� �Է�: ");
	scanf("%d", &number);
	
	printf("\n");
	for(int i = 0; i < number; i++){
		int bun=0, gae=0; 
		printf("�� �Է�: ");
		scanf("%d", &bun);
		printf("���� ���� �Է�: ");
		scanf("%d", &gae);
		
		minuteAdd += bun*gae;
	}
	counter();
	
	printf("%dH %dM", hour, minute);
	
	return 0;
}
