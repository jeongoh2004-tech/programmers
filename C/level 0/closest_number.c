/*가까운 수*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = array[0];
    int min=0;
    if(array[0]>n){
        min=array[0]-n;
    }
    else{
        min=n-array[0];
    }
    for(int i=1; i<array_len; i++){
        if(array[i]>n){
            if(min>(array[i]-n)){
                answer=array[i];
                min=array[i]-n;
            }
            else if(min==(array[i]-n)){
                if(answer>array[i]){
                    answer=array[i];
                }
            }
        }
        else{
            if(min>(n-array[i])){
                answer=array[i];
                min=n-array[i];
            }
            else if(min==(n-array[i])){
                if(answer>array[i]){
                    answer=array[i];
                }
            }
        }
    }
    return answer;
}