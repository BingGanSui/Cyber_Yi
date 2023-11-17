#include<iostream>
#include<Yi_input_output.h>
using namespace std;

/*
Now include:
struct symb
input_keyboard()
output_screen()
locate_shi()
loacte_gong()
get_upside()
get_downside()
*/

int locate_shi(symb a){
    bool ace = a.y[0] == a.y[3];
    bool twi = a.y[1] == a.y[4];
    bool thr = a.y[2] == a.y[5];
    if(ace&&twi&&thr){
        return 0;
    }
    else if((ace==0)&&(twi==0)&&(thr==0)){
        return 3;
    }
    else if((ace&&twi)||(ace&&thr)||(twi&&thr)){
        if(!ace){
            return 1;
        }
        else if(!twi){
            return 7;
        }
        else{
            return 5;
        }
    }
    else{
        if(ace){
            return 4;
        }
        else if(twi){
            return 6;
        }
        else{
            return 2;
        }
    }
}

int locate_gong(symb a){
    int upside=0;
    int downside=0;
    for (int i = 5; i >= 3;i--){
        upside += a.y[i] * ((i == 5) ? 1 : ((i == 4) ? 2 : 4));
    }
    for (int i = 2; i >= 0;i--){
        downside += a.y[i] * ((i == 2) ? 1 : ((i == 1) ? 2 : 4));
    }
    if(a.shi>7){
        return 404;
    }
    else if(a.shi<4){
        return upside;
    }
    else if(a.shi==7){
        return downside;
    }
    else{
        return (7 - downside);
    }
}

int get_upside(symb a){
    int upside = 0;
    for (int i = 5; i >= 3;i--){
        upside += a.y[i] * ((i == 5) ? 1 : ((i == 4) ? 2 : 4));
    }
    return upside;
}

int get_downside(symb a){
    int downside=0;
    for (int i = 2; i >= 0;i--){
        downside += a.y[i] * ((i == 2) ? 1 : ((i == 1) ? 2 : 4));
    }
    return downside;
}

int get_Shiyao(symb a){
    return ShiYao[a.shi];
}
/*int main(){
    symb a = input_keyboard();
    output_screen(a);
    a.shi=locate_shi(a);
    a.gong = locate_gong(a);
    printf("%d %d\n", a.shi, a.gong);
    return 0;
}*/