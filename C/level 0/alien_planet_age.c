/*외계 행성의 나이*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(5*sizeof(char));
    int i=0;
    while(age){
        answer[i]='a'+age%10;
        age=age/10;
        i++;
    }
    char *pa=answer; char *pb=answer+i-1;
    for(int j=0; j<i/2; j++){
        char tmp=*pa;
        *pa=*pb;
        *pb=tmp;
        pa++;
        pb--;
    }
    answer[i]='\0';
    return answer;
}