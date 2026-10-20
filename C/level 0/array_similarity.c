/*배열의 유사도*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// s1_len은 배열 s1의 길이입니다.
// s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    for(char **p=s1; p<s1+s1_len; p++){
        for(char **q=s2; q<s2+s2_len; q++){
            if(strcmp(*p, *q)==0){
                answer++;
                break;
            }
        }
    }
    return answer;
}