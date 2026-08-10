/*구슬을 나누는 경우의 수*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer = 0;
    double result=1;
    for(int i=share+1; i<=balls; i++){
        result=result*i/(i-share);
    }
    answer=result;
    return answer;
}
