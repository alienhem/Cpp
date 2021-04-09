#include <stdio.h>

int hour, minute, hourAdd, minuteAdd;

void counter(){
	minute += minuteAdd;
	hour += minute/60;
	minute%=60;
	hour += hourAdd;
}

int main(void){
	int days;
	while(1){
		printf("공부한 날짜 수 : ");
		scanf("%d", &days);
		printf("\n");
		printf("============================\n\n");
		
		for(int i=0; i<days; i++){
			printf("추가할 시와 분을 입력하세요(ex 5 10): ");
			scanf("%d %d", &hourAdd, &minuteAdd);
			
			counter();
			printf("현재 총 %dH %dM.\n\n", hour, minute);
		}
		
		printf("합계 %dH %dM\n", hour, minute);
		
		break;
	}
	
	return 0;
}
