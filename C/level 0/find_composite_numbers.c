/*합성수 찾기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=4; i<=n; i++){
        int count=0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count!=0){
            answer+=1;
        }
    }
    return answer;
}