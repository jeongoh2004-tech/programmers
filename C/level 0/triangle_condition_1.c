/*삼각형의 완성조건(1)*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 2;
    int max=sides[0];
    int max_flag=0;
    int sum=0;
    for(int i=1; i<sides_len; i++){
        if(max<sides[i]){
            max=sides[i];
            max_flag=i;
        }
    }
    for(int i=0; i<sides_len; i++){
        if(i!=max_flag){
            sum+=sides[i];
        }
    }
    if(sum>max){
        answer=1;
    }
    return answer;
}