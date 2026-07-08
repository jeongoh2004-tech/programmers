/*피자 나눠 먹기(1)*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    answer=n/7;
    if(n%7!=0)
        answer++;
    return answer;
}