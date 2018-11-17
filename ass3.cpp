#include "ass3.hpp"
#include <bits/stdc++.h>
using namespace std;

int chips::number = 0;
int orangeJuice::number = 0;
int soda::number  = 0;
int milk::number  = 0;
int iceTea::number  = 0;
int iceChocolet::number = 0;
int nuts::number  = 0;
int sweets::number  = 0;
int iceCream::number  = 0;
int appleJuice::number  = 0;
int moneyExchange::twentykind=5;
int moneyExchange::tenkind=4;
int moneyExchange::fivekind=3;
int moneyExchange::onekind=4;
int moneyExchange::halfkind=4;

int chips :: getterPrice(){
        return price;
}
int chips :: getternumber(){
        return number;
}
bool chips :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void chips :: subs(){
        number++;
}
string chips :: kind(){
        return "chips";
}


int orangeJuice :: getterPrice(){
        return price;
}
int orangeJuice :: getternumber(){
        return number;
}
bool orangeJuice :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void orangeJuice :: subs(){
        number++;
}
string orangeJuice :: kind(){
        return "orange Juice";
}


int soda :: getterPrice(){
        return price;
}
int soda :: getternumber(){
        return number;
}
bool soda :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void soda :: subs(){
        number++;
}
string soda :: kind(){
        return "soda";
}


int milk :: getterPrice(){
        return price;
}
int milk :: getternumber(){
        return number;
}
bool milk :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void milk :: subs(){
        number++;
}
string milk ::kind(){
        return "milk";
}


int iceTea :: getterPrice(){
        return price;
}
int iceTea :: getternumber(){
        return number;
}
bool iceTea :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void iceTea :: subs(){
        number++;
}
string iceTea :: kind(){
        return "ice tea";
}


int iceChocolet :: getterPrice(){
        return price;
}
int iceChocolet :: getternumber(){
        return number;
}
bool iceChocolet :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void iceChocolet :: subs(){
        number++;
}
string iceChocolet :: kind(){
        return "ice chocolate";
}


int nuts :: getterPrice(){
        return price;
}
int nuts :: getternumber(){
        return number;
}
bool nuts :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void nuts :: subs(){
        number++;
}
string nuts :: kind(){
        return "nuts";
}


int sweets :: getterPrice(){
        return price;
}
int sweets :: getternumber(){
        return number;
}
bool sweets :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void sweets :: subs(){
        number++;
}
string sweets :: kind(){
        return "sweets";
}


int iceCream :: getterPrice(){
        return price;
}
int iceCream :: getternumber(){
        return number;
}
bool iceCream :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void iceCream :: subs(){
        number++;
}
string iceCream :: kind(){
        return "ice cream";
}


int appleJuice :: getterPrice(){
        return price;
}
int appleJuice :: getternumber(){
        return number;
}
bool appleJuice :: checker(double a){
        if(a>=price&&number<=10)return true;
        else return false;
}
void appleJuice :: subs(){
        number++;
}
string appleJuice :: kind(){
        return "appleJuice";
}




moneyExchange :: moneyExchange(int twenty,int ten,int five,int one,int half){
        twentykind+=twenty;tenkind+=ten;fivekind+=five;onekind+=one;halfkind+=half;
        inMoney+=twenty*20+ten*10+five*5+one+half*0.5;
}
void moneyExchange :: checking(product* prod){
        if(prod->checker(inMoney))
            inMoney-=prod->getterPrice();
}
bool moneyExchange :: halfcheker(double p){
        int y=p*10;
        if(y%10==0)return false;
        else return true;
}
int moneyExchange :: outputofmoney(double p){
        int h=0;
        if (halfcheker(p)){ h=1;}
        int x=p;
        if (x/20!=0){
            if ((twentykind==0)||(twentykind<x/20)){cout<<"there is no change"<<endl; return 0;}
            twentykind=twentykind-(x/20);
            for(int n=0;n<(x/20);n++){cout<<"20 LE ";}
            x=x-((x/20)*20);
            cout<<endl;
        }
        if (x/10!=0){
            if ((tenkind==0)||(tenkind<x/10)){cout<<"there is no change"<<endl; return 0;}
            tenkind=tenkind-(x/10);
            for(int n=0;n<(x/10);n++){cout<<"10 LE ";}
            x=x-((x/10)*10);
            cout<<endl;
        }
        if (x/5!=0){
            if ((fivekind==0)||(fivekind<x/5)){cout<<"there is no change"<<endl; return 0;}
            fivekind=fivekind-(x/5);
            for(int n=0;n<(x/5);n++){cout<<"5 LE ";}
            x=x-((x/5)*5);
            cout<<endl;
        }
        if (x/1!=0){
            if ((onekind==0)||(onekind<x/1)){cout<<"there is no change"<<endl; return 0;}
            onekind=onekind-(x/1);
            for(int n=0;n<(x/1);n++){cout<<"1 LE ";}
            x=x-((x/1)*1);
            cout<<endl;
        }
        if (h==1){
            if (halfkind==0){cout<<"there is no change"<<endl; return 0;}
                halfkind=halfkind-1;
            cout<<"1/2 LE "<<endl;
        }
}
double  moneyExchange :: get(){
        return inMoney;
}

