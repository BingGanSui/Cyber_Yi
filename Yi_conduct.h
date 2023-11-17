#include<iostream>
#include<Yi_identify.h>
using namespace std;

symb ConD_WuX(symb a){//Conduct WuXing
    for (int i = 5; i > 2;i--){
        a.element[i] = WuXing_GuaGong[a.upside][i];
    }
    for (int i = 2; i >= 0;i--){
        a.element[i] = WuXing_GuaGong[a.downside][i];
    }
    return a;
}
symb ConD_LiuQ(symb a){//Conduct LiuQin
    int trans = WuXing_Gua[a.gong] - 1;
    for (int i = 5; i >= 0;i--){
        a.qin_6[i] = (a.element[i] - trans > 0) ? (a.element[i] - trans) : (a.element[i] - trans + 5);
    }
    return a;
}
/*
int main(){
    symb a = input_keyboard();
    a.shi=locate_shi(a);
    a.gong=locate_gong(a);
    a.upside = get_upside(a);
    a.downside = get_downside(a);
    a = ConD_WuX(a);
    a = ConD_LiuQ(a);
    output_screen_Final(a);
    return 0;
}
*/