#include <bits/stdc++.h>
#include "ass3.hpp"
using namespace std;

int main()
{
    int a,total,twentykind,tenkind,fivekind,onekind,halfkind;
    product* prod;
    while(true){
        prod=new chips;total+=prod->getternumber();prod=new orangeJuice;total+=prod->getternumber();prod=new soda;total+=prod->getternumber();
        prod=new milk;total+=prod->getternumber();prod=new iceTea;total+=prod->getternumber();prod=new iceChocolet;total+=prod->getternumber();
        prod=new nuts;total+=prod->getternumber();prod=new sweets;total+=prod->getternumber();prod=new iceCream;total+=prod->getternumber();
        prod=new appleJuice;total+=prod->getternumber();
        if(total==100)
            return 0;
        cout<<"ahlan ya user ya habeby."<<endl;
        cout<<"please enter the bills or coins in this form: 20 LE 10LE 5LE 1LE 1/2 LE : "<<endl;
        cin>>twentykind>>tenkind>>fivekind>>onekind>>halfkind;
        moneyExchange mac(twentykind,tenkind,fivekind,onekind,halfkind);
label:  cout<<"what would you like to buy."<<endl;
        cout<<"enter the number corresponding to the item you would like."<<endl;
        cout<<"1.chips : 3 LE  "<<endl<<"2.soda : 5 LE "<<endl;
        cout<<"3.Apple Juice : 3.5 LE  "<<endl<<"4.Orange Juice : 3.5 LE "<<endl;
        cout<<"5.sweets : 1.5 LE  "<<endl<<"6.milk : 11.5 LE "<<endl;
        cout<<"7.nuts : 7.5 LE  "<<endl<<"8.ice tea : 5.5 LE "<<endl;
        cout<<"9.ice chocolate : 15 LE  "<<endl<<"10.ice cream : 3.5 LE "<<endl;
        cin>>a;
        if(a==1)
            prod=new chips;
        else if(a==2)
            prod=new soda;
        else if(a==3)
            prod=new appleJuice;
        else if(a==4)
            prod=new orangeJuice;
        else if(a==5)
            prod=new sweets;
        else if(a==6)
            prod=new milk;
        else if(a==7)
            prod=new nuts;
        else if(a==8)
            prod=new iceTea;
        else if(a==9)
            prod=new iceChocolet;
        else if(a==10)
            prod=new iceCream;
        else
            mac.outputofmoney(mac.get());
        if(prod->checker(mac.get())){
            prod->subs();
            cout<<"take your "<<prod->kind()<<endl;
            mac.checking(prod);
            mac.outputofmoney(mac.get());
        }
        else{
            cout<<"the amount entered is less than the price or the item has ran out.\n";
            cout<<"if you would like your money back  enter 1, if you would like to choose another item enter 0"<<endl;
            if(a==0)
                goto label;
            else
                mac.outputofmoney(mac.get());
        }

    }
}
