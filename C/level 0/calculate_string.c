/*문자열 계산하기*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int len=strlen(my_string);
    int sum=0, flag=1;
    int answer = 0;
    for(char *p=my_string; p<my_string+len; p++){
        if(*p>='0' && *p<='9'){
            sum=sum*10+(*p-'0');
        }
        else if(*p=='+' || *p=='-'){
            answer=answer+flag*sum;
            sum=0;
            if(*p=='+'){
                flag=1;
            }
            else{
                flag=-1;
            }
        }
    }
    answer=answer+flag*sum;
    return answer;
}