#ifndef ASS3_H
#define ASS3_H
#include <bits/stdc++.h>
using namespace std;

class product{
public:
    virtual int getterPrice(){}
    virtual int getternumber(){}
    virtual bool checker(double a){}
    virtual void subs(){}
    virtual string kind(){}
};


class chips : public product{
private:
    double price=3;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};


class orangeJuice : public product{
private:
    double price=3.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class soda : public product{
private:
    double price=5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class milk : public product{
private:
    double price=11.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class iceTea : public product{
private:
    double price=5.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class iceChocolet : public product{
private:
    double price=15;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class nuts : public product{
private:
    double price=7.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class sweets: public product{
private:
    double price=1.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class iceCream : public product{
private:
    double price=3.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};
class appleJuice : public product{
private:
    double price=3.5;
    static int number;
public:
    int getterPrice();
    int getternumber();
    bool checker(double a);
    void subs();
    string kind();
};



class moneyExchange{
private:
    static int twentykind;
    static int tenkind;
    static int fivekind;
    static int onekind;
    static int halfkind;
    double inMoney;
public:
    moneyExchange(int twenty,int ten,int five,int one,int half);
    void checking(product* prod);
    bool halfcheker(double p);
    int outputofmoney(double p);
    double get();
};



#endif
