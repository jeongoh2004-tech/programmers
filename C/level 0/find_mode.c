/*최빈값 구하기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int max=0, max_num=0;
    for(int *p=array; p<array+array_len; p++){
        int count=0;
        for(int *q=array; q<array+array_len; q++){
            if(*p==*q){
                count++;
            }
        }
        if(max<count){
            max=count;
            max_num=*p;
        }
        else if(max==count){
            if(max_num!=*p)
                max_num=-1;
        }
    }
    answer=max_num;
    return answer;
}