/*옷가게 할인 받기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = price;
    if(price>=500000){
        answer=(double)price/10*8;
    }
    else if(price>=300000){
        answer=(double)price/10*9;
    }
    else if(price>=100000){
        answer=(double)price/20*19;
    }
    return answer;
}