/**************************
 * a header
 *
**************************/
// 如何做模块化 
// 1. 区分出这个项目里， 哪些代码是变化的，哪些代码是不变的，将变化的代码剥离出来
// 一般而言，就是出现了。 容易变化的数据结构与一般不变化的算法（代码逻辑）
// 在这段代码下，如果我要再增加一个命令，我必须增加一个新函数，
// 除此之外我还必须修改mian函数内部的else逻辑。涉及面太广，所以这不是一个很好的写法
// 因为它把所有的数据和逻辑都混杂在一起。
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define CMD_MAX_LENGTH 128
typedef void (* fp) ();
// 修改点1 增加命令结构体

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
        //
        // 问题： 没有把数据从逻辑操作中分离出来，导致需求变更的时候耦合太大不易于修改
        // 
        fp f = help;
        if (!strcmp("help", cmd)) {
            f();
        }else if (!strcmp("quit", cmd)){
            quit();
        }else if (!strcmp("morehelp", cmd)){
            morehelp();
        }else if (!strcmp("lesshelp", cmd)){
            lesshelp();
        }else if (!strcmp("smile", cmd)){
            smile();
        }else if (!strcmp("ghost", cmd)){
            ghost();
        }else if (!strcmp("candle", cmd)){
            version();
        }else{
            unknowncmd();
        }
    }
    return 0;
}
