#include "processbar.h"

typedef void (*callback)(int);

void Dowload(callback cb)
{
    int total = 1000;
    int cur = 0;
    while(cur <= total)
    {
        usleep(100000);
        int rate = cur*100/total;
        cb(rate);
        cur += 10;
    }
    printf("\n");
}

int main()
{
    Dowload(processbar);
    
    return 0;
}


//int main()
//{
//    int cnt = 10;
//    while(cnt >= 0)
//    {
//        printf("%2d\r", cnt);
//        fflush(stdout);
//        sleep(1);
//        --cnt;
//    }
//    printf("\n");
//    return 0;
//}
