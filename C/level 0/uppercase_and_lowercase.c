/*대문자와 소문자*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(my_string);
    char* answer = (char*)malloc((len+1)*sizeof(char));
    strcpy(answer, my_string);
    for(char *p=answer; p<answer+len; p++){
        if(*p>='A' && *p<='Z'){
            *p=*p-'A'+'a';
        }
        else{
            *p=*p-'a'+'A';
        }
    }
    return answer;
}