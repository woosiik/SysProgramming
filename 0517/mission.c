#include <stdio.h>
 
int main(){
    char a='A';
    
	while(1)
	{	
		printf("문자 입력 : \n");
	    scanf(" %c", &a);
		if(a >= 'A' && a <= 'Z'){
	        printf("%c의 소문자는 %c\n", a, a+32);
		}
		else if(a >= 'a' && a <= 'z') {
	        printf("%c의 대문자는 %c\n", a, a-32);
		}
		else if(a == '0'){
			break;
		}
	}
    return 0;
}
