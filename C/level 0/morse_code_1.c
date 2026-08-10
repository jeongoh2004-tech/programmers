/*모스부호(1)*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count=0;
    char ch[1001];
    strcpy(ch, letter);
    char *mos[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int len=strlen(ch);
    for(int i=0; i<len+1; i++){
        if(ch[i]==' '){
            count++;
            ch[i]='\0';
        }
        else if(ch[i]=='\0'){
            count++;
        }
    }
    char* answer = (char*)malloc((count+1)*sizeof(char));
    if(answer==NULL){
        printf("fail");
        return NULL;
    }
    int m=0;
    for(int i=0, j=0; i<len+1; i++){
        if(ch[i]=='\0'){
            for(int k=0; k<26; k++){
                if(strcmp((ch+j), (mos[k]))==0){
                    answer[m]='a'+k;
                    m++;
                    break;
                }
            }
            j=i+1;
        }
    }
    answer[count]='\0';
    return answer;
}
/* strtok 사용법
char str[] = "hello world C";
char *p;
p = strtok(str, " "); //hello\0world\0C라고 생각해서 제일 처음 문자열(hello)의 시작 주소 반환
while (p != NULL) {
    printf("%s\n", p); //hello 출력
    p = strtok(NULL, " "); // 여기서 그 다음 문자열의 시작 주소를 찾음(world);
}
*/
/* strtok 사용해서 구현
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count=0;
    char ch[1001];
    strcpy(ch, letter);
    char *mos[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int len=strlen(ch);
    for(int i=0; i<len+1; i++){
        if(ch[i]==' '){
            count++;
        }
        else if(ch[i]=='\0'){
            count++;
        }
    }
    char* answer = (char*)malloc((count+1)*sizeof(char));
    if(answer==NULL){
        printf("fail");
        return NULL;
    }
    char *p=strtok(ch, " ");
    int j=0;
    while(p!=NULL){
        for(int i=0; i<26; i++){
            if(strcmp(p, mos[i])==0){
                answer[j]='a'+i;
                j++;
                break;
            }
        }
        p=strtok(NULL, " ");
    }
    answer[count]='\0';
    return answer;
}
*/