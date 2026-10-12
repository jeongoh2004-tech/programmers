/*인덱스 바꾸기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void swap(char *answer, char num1, char num2);
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(my_string);
    char* answer = (char*)malloc((len+1)*sizeof(char));
    strcpy(answer, my_string);
    swap(answer, num1, num2);
    return answer;
}
void swap(char *answer, char num1, char num2){
    char tmp=answer[num1];
    answer[num1]=answer[num2];
    answer[num2]=tmp;
}