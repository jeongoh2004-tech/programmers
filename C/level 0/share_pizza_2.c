/*피자 나눠 먹기(2)*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) { // n명과 피자판 * 6개 최소 공배수 찾으면됨
    int answer = 0;
    int i=6;
    while(1){
        if(i%n==0 && i%6==0){
            break;
        }
        i++;
    }
    answer=i/6;
    return answer;
}