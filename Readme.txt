一些说明：
高中生乱搞，根据京房易的原理涉猎皮毛，后面还会接着码的（

##结构：
1 Yi_database.h
2 Yi_symb.h
3 Yi_input_output.h
4 Yi_identify.h
5 Yi_conduct.h
//第一次写.h,我的建议是直接引5

##五行：
木wood1
火fire2
土soil3
金metal4
水water5

##卦：
乾0
兑1
离2
震3
巽4
坎5
艮6
坤7
（对应卦象的十进制）

##六亲：
兄弟1
子孙2
妻财3
官鬼4
父母5

##世：
本宫0
一世1
二世2
三世3
四世4
五世5
归魂6
游魂7

##Yi_database:
int WuXing_GuaGong[6] 由下至上爻的坐标 [8]所属卦 用于查询对应爻位的五行
int GuaXiang[6]爻坐标 [8]所属卦 用于查询对应卦的卦象
int ShiYao[8]所属世 用于查询对应卦的世爻
string WuXing_Transform[6]所属五行 用于输出对应五行的英文与拼音
string Gong[8]所属卦宫 用于输出所属卦宫拼音
string Shi[8]所属世 用于输出所属世
string LiuQin_Transfrom[6]所属六亲 用于输出对应六亲的拼音
int WuXing_Gua[8]所属卦宫 用于查询所属卦宫的五行

##Yi_symb:
定义struct symb:(symbol 卦 渣翻)
int y[6]对应爻位的卦象 1开0闭
int element[6]对应爻位的五行
int qin_6[6]对应爻位的六亲
int gong对应卦的卦宫
int shi对应世爻
int upside上卦
int downside下卦
int ShiY世爻

##Yi_input_output:
void output_screen(symb a){
    屏幕输出卦象
}
void ouput_screen_final(symb a){
    屏幕输出卦象 在爻右侧输出五行六亲与世爻标注
}
symb sideNum_to_y(symb a){
    返回一个symb 根据upside与downside的值填充卦象y
}
symb input_keyboard(){
    键盘输入卦象 下至上
}

##Yi_identify:
int locate_shi(symb a){
    返回卦所属世
}
int locate_gong(symb a){
    返回卦所属宫，必须先定世后定宫
}
int get_upside(symb a){
    返回卦的上卦
}
int get_downside(symb a){
    返回卦的下卦
}

##Yi_conduct:
symb ConD_WuX(symb a){
    返回一个symb 填充对应卦的五行
}
symb ConD_LiuQ(symb a){
    返回一个symb 根据五行与卦宫推出对应六亲
}