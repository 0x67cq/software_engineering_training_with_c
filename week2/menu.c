/**************************
 * a header
 *
**************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CMD_MAX_LENGTH 128

void help(){
    printf("this is help!\n");
}

void quit(){
    exit(0);
}

void unknowncmd(){
    printf("wrong cmd!\n");
}

void morehelp(){
    printf("Yes, you need more help!\n");
}

void lesshelp(){
    printf("you choose the less help!\n");
}

void smile(){
    printf("smile is a treasure!\n");
}

void ghost(){
    printf("a ghost!\n");
}

void version(){
    printf("This version is 1.0!\n");
}

int main(int argc, char** argv){
    // 如何开始第一行代码
    // 那一般肯定还是写逻辑伪代码
    
    char cmd[CMD_MAX_LENGTH];
    while(1){
        scanf("%s.", cmd);
        // 这样的N个else if分支语句的优化。可以进行记录
        // 当前的优化思路是， switch 
        // 并且这种特殊情况下，所有函数都是同一类的的时候。使用函数指针数组+switch or 函数指针链表遍历
        if (!strcmp("help", cmd)) {
            help();
        }else if (!strcmp("quit", cmd)){
            quit();
        }else if (!strcmp("morehelp", cmd)){
            morehelp();
        }else if (!strcmp("lesshelp", cmd)){
            lesshelp();
        }else if (!strcmp("smile", cmd)){
            smile();
        }else if (!strcmp("ghost", cmd)){
            ghost(0);
        }else if (!strcmp("candle", cmd)){
            candle(0);
        }else{
            unknowncmd();
        }
    }
    return 0;
}
