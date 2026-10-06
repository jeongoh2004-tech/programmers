/*소인수분해*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100*sizeof(int));
    int count=0;
    for(int i=2; n!=1; i++){
        if(n%i==0){
            *(answer+count)=i;
            count++;
            n/=i;
            while(1){
                if(n%i==0){
                    n/=i;
                }
                else{
                    break;
                }
            }
        }
    }
    return answer;
}