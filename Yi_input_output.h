#include<iostream>
#include<Yi_symb.h>
using namespace std;

void output_screen(symb a){
    for (int i = 5; i >= 0; i--)
    {
        if(a.y[i]==1){
            printf("—— ——\n");
        }
        else{
            printf("—————\n");
        }
    }
    return;
}

void output_screen_Final(symb a){
    for (int i = 5; i >= 0; i--)
    {
        if(a.y[i]==1){
            printf("—— —— ");
            cout << WuXing_Tranfrom[a.element[i]] << "   " << LiuQin_Transfrom[a.qin_6[i]];
            if(a.ShiY==i){
                cout<<" <"<<endl;
            }
            else{
                cout<<endl;
            }    
        }
        else{
            printf("————— ");
            cout << WuXing_Tranfrom[a.element[i]] << "   " << LiuQin_Transfrom[a.qin_6[i]]; 
            if(a.ShiY==i){
                cout<<" <"<<endl;
            }
            else{
                cout<<endl;
            } 
        }
    }
    return;
}

symb sideNum_to_y(symb a){
    for(int i=5;i>2;i--){
        a.y[i]=GuaXiang[a.upside][i];
    }
    for(int i=2;i>=0;i--){
        a.y[i]=GuaXiang[a.downside][i];
    }
    return a;
}

symb input_keyboard(){
    symb a;
    for (int i = 0; i < 6;i++){
        cin >> a.y[i];
    }
    return a;
}