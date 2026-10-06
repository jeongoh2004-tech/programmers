/*문자열 정렬하기(1)*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100*sizeof(int));
    int len=strlen(my_string);
    int j=0;
    for(int i=0; i<len; i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            answer[j]=(my_string[i]-'0');
            j++;
        }
    }
    for(int i=0; i<j-1; i++){
        for(int k=0; k<j-1-i; k++){
            if(answer[k]>answer[k+1]){
                int tmp=answer[k];
                answer[k]=answer[k+1];
                answer[k+1]=tmp;
            }
        }
    }
    return answer;
}