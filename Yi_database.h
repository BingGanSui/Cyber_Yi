#include<iostream>
#include<string>
using namespace std;
/*
五行
木wood1
火fire2
土soil3
金metal4
水water5

*/
int WuXing_GuaGong[8][6] = {//本宫卦五行
    {5, 3, 1, 2, 3, 4},
    {3, 1, 5, 3, 4, 2},
    {1, 5, 3, 4, 2, 3},
    {5, 3, 1, 5, 3, 4},
    {5, 3, 4, 3, 2, 1},
    {3, 1, 2, 3, 4, 3},
    {2, 1, 3, 4, 3, 5},
    {5, 3, 4, 2, 3, 1}};
int GuaXiang[8][6]={
    {0,0,0,0,0,0},
    {1,0,0,1,0,0},
    {0,1,0,0,1,0},
    {1,1,0,1,1,0},
    {0,0,1,0,0,1},
    {1,0,1,1,0,1},
    {0,1,1,0,1,1},
    {1,1,1,1,1,1},
};
int ShiYao[8]={5,0,1,2,3,4,3,2};
string WuXing_Tranfrom[6] = {"ERR", "Wood_Mu   ", "Fire_Huo  ","Soil_Tu   ","Metal_Jing","Water_Shui"};
string Gong[8] = {"Qian", "Dui", "Li", "Zhen", "Xun", "Kan", "Gen", "Kun"};
string Shi[8] = {"BenGong", "YiShi-1st", "ErShi-2nd", "SanShi-3rd", "SiShi-4th", "WuShi-5th", "GuiHun-6th", "YouHun-7th"};
string LiuQin_Transfrom[6]={"ERR","XiongDi","ZiSun  ","QiCai  ","GuanGui","Fumu   "};
int WuXing_Gua[8]={4,4,2,1,1,5,3,3};