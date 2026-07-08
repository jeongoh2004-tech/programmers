/*두 수의 나눗셈*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", solution(num1, num2));
}
int solution(int num1, int num2) {
    int answer;
    double result;
    result=(double)num1/num2;
    result=result*1000;
    answer=(int)result;
    return answer;
}