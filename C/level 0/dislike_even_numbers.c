/*짝수는 싫어요*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int x=(n+1)/2;
    int* answer = (int*)malloc(x*sizeof(int));
    int a=1;
    for(int i=0; i<x; i++, a+2){
        answer[i]=a;
    }
    return answer;
}