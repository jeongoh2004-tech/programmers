/*개미 군단*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int ant_a=5, ant_b=3, count=0;
    count=hp/ant_a;
    hp%=ant_a;
    count=count+hp/ant_b;
    count=count+hp%ant_b;
    return count;
}