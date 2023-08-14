#include "processbar.h"

//v2
const char* lable = "|/-\\";
char bar[NUM];
void processbar(int rate)
{
    if(rate < 0 || rate > 100) return;//如果rate小于0或者大于一百说明程序出现了问题，直接return
    int len = strlen(lable);
    printf("[%-100s][%d%%][%c]\r", bar, rate, lable[rate%len]);//rate模上lable的长度不会造成越界
    fflush(stdout);//清理缓存区
    bar[rate++] = BODY;
}


//v1
//const char* lable = "|/-\\";

//void processbar(int speed)
//{
//    int len = strlen(lable);
//    char arr[NUM];
//    memset(arr, '\0', sizeof(arr));
//    int count = 0;
//    while(count <= TOP)
//    {
//        printf("[%-100s][%d%%][%c]\r", arr, count, lable[count%len]);
//        fflush(stdout);
//        arr[count++] = STELE;
//        usleep(speed);
//    }
//    printf("\n");
//}
