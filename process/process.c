#include"process.h"
#include <stdio.h>
char style[S_Num]={'-','.','#','>','<'};
void ProncessOn()
{
    int cnt=0;
    char bar[NUM];
    memset(bar,'\0',sizeof(bar));
    const char* label="|\\-/";
    while(cnt<=100)
    {
     printf("[%-100s][%d%%][%c]\r",bar,cnt,label[cnt%4]);
     fflush(stdout);
     bar[cnt++]=style[N];
     usleep(50000);


    }
    printf("\n");
}
