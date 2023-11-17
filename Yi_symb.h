#include<iostream>
#include<Yi_database.h>
using namespace std;

typedef struct
{
    /* data */
    int y[6];//由下至上0~5 1开0闭 from down-side to up-side 1 break 0 contain
    int element[6];//金木水火土 12345
    int qin_6[6];//我子财官印 12345
    int gong;//乾兑离震巽坎艮坤12345678
    int shi=99;//01234567
    int upside,downside,ShiY;
}symb;