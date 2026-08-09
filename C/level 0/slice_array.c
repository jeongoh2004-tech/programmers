/*배열 자르기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=num2-num1+1;
    int* answer = (int*)malloc((len+1)*sizeof(int));
    if(answer==NULL){
        printf("fail");
        return NULL;
    }
    for(int i=num1, j=0; i<=num2; i++, j++){
        answer[j]=numbers[i];
    }
    answer[len]='\0';
    return answer;
}