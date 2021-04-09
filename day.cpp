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
	printf("분 종류의 개수 입력: ");
	scanf("%d", &number);
	
	printf("\n");
	for(int i = 0; i < number; i++){
		int bun=0, gae=0; 
		printf("분 입력: ");
		scanf("%d", &bun);
		printf("분의 개수 입력: ");
		scanf("%d", &gae);
		
		minuteAdd += bun*gae;
	}
	counter();
	
	printf("%dH %dM", hour, minute);
	
	return 0;
}
