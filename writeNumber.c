#include <unistd.h>
#include "writeNumber.h"

void writeNumber(int num) {
    char digits[4];
    int i=0;
    if(num==0){
        char c='0';
        write(1,&c,1);
        return;
    }
    while(num>0){
        digits[i]=(num%10)+'0';
        num=num/10;
        i++;
    }
    while(i>0){
        i--;
        write(1,&digits[i],1);
    }
}