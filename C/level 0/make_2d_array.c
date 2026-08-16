/*2차원으로 만들기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int** solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=num_list_len/n;
    int** answer = (int**)malloc((len)*sizeof(int*));
    for(int i=0; i<len; i++){
        *(answer+i)=(int*)malloc(n*sizeof(int));
    }
    for(int i=0, k=0; i<len; i++){
        for(int j=0; j<n; j++, k++){
            *(*(answer+i)+j)=*(num_list+k);
        }
    }
    return answer;
}