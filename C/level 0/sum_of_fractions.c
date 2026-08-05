/*분수의 덧셈*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int dec(int x, int y);
int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(2*sizeof(int));
    *answer=numer1*denom2+ numer2*denom1;
    *(answer+1)=denom1*denom2;
    int x,y;
    int result;
    if(*answer>*(answer+1))
        result=dec(*answer, *(answer+1));
    else{
        result=dec(*(answer+1), *answer);
    }
    *answer/=result;
    *(answer+1)/=result;
    return answer;
}
int dec(int x, int y){
    if(x%y==0){
        return y;
    }
    else{
        return dec(y,x%y);
    }
}