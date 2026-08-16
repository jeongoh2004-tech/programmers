/*공 던지기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    for(int i=0, count=0; count<k; i=i+2, count++){
        i%=numbers_len;
        if(count==(k-1)){
            answer=(i+1);
        }
    }
    return answer;
}