/*컨트롤 제트*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int result = 0;
    int flag=1;
    for(char *p=s; ; p++){
        if(*p != 'Z' && *p!=' '){
            if(*p=='-'){
                flag=-1;
            }
            else{
                result=result*10+(*p-'0');
            }
        }
        else if(*p==' '){
            if(*(p+1)!='Z'){
                answer+=(flag*result);
            }
            result=0;
            flag=1;
        }
        if(*(p+1)=='\0'){
            answer+=(flag*result);
            break;
        }
    }
    return answer;
}