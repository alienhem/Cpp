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
		printf("������ ��¥ �� : ");
		scanf("%d", &days);
		printf("\n");
		printf("============================\n\n");
		
		for(int i=0; i<days; i++){
			printf("�߰��� �ÿ� ���� �Է��ϼ���(ex 5 10): ");
			scanf("%d %d", &hourAdd, &minuteAdd);
			
			counter();
			printf("���� �� %dH %dM.\n\n", hour, minute);
		}
		
		printf("�հ� %dH %dM\n", hour, minute);
		
		break;
	}
	
	return 0;
}
