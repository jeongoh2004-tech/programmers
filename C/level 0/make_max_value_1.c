/*최댓값 만들기(1)*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max=0;
    for(int i=0; i<numbers_len; i++){
        for(int j=i+1; j<numbers_len; j++){
            answer=numbers[i]*numbers[j];
            if(max<answer){
                max=answer;
            }
        }
    }
    return max;
}