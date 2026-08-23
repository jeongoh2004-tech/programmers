/*팩토리얼*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int multiply(int n){
    int answer=1;
    for(int i=1; i<=n; i++){
        answer*=i;
    }
    return answer;
}
int solution(int n) {
    int answer = 0;
    int i;
    for(i=1; ; i++){
        if(multiply(i)>n){
            break;
        }
    }
    answer=i-1;
    return answer;
}