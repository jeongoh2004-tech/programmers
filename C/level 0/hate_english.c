/*영어가 싫어요*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    int flag=0;
    char *ch[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while(numbers[flag]!='\0'){
        for(int i=0; i<10; i++){
            if(strncmp(numbers+flag, ch[i], strlen(ch[i]))==0){
                answer=answer*10+i;
                flag+=strlen(ch[i]);
                break;
            }
        }
    }
    return answer;
}