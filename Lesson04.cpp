
#include <iostream>
using namespace std;

void int_10() {
    int numb = 542;
    cout << numb % 10 << endl;
    cout << (numb % 100) / 10 << endl;
}

void int_11() {
    int num = 627;
    int sum = (num % 10) + (num / 100) + ((num % 100) / 10);
    int sub = (num % 10) * (num / 100) * ((num % 100) / 10);
    cout << "sum = " << sum << endl;
    cout << "sub = " << sub << endl;
}

void int_12() {
    int numb = 824;
    int firstnum = numb / 100;
    int secondnum = ((numb % 100) / 10);
    int thirdnum = numb % 10;
    cout << thirdnum << secondnum << firstnum;
}

void int_20() {
    int n = 13000;
    cout << n / 3600;
}

void int_21() {
    int n = 13000;
    cout << n - (60 * (n / 60));
}

void int_23() {
    int n = 13000;
    cout << (n - (3600 * (n / 3600))) / 60;
}

void bool_04() {
    int a = 5, b = 0;   
    bool condition = (a > 2) && (b <= 3);
    cout << ((condition == 1) ? "true" : "false");
 
}

void bool_06() {
    int a(6), b(4), c(10);
    bool condition = a < b < c;
    cout << ((condition == 1) ? "true" : "false");
}

void bool_09() {
    int a(5), b(8);
    bool condition = (a % 2 != 0) || (b % 2 != 0);
    cout << ((condition == 1) ? "true" : "false");
}

void bool_10() {
    int a(23), b(27);
    bool condition = ((a % 2 == 0) && (b % 2 != 0)) || ((a % 2 != 0 && b % 2 == 0));
    cout << ((condition == 1) ? "true" : "false");
}

void bool_12() {
    int a(2), b(-3), c(1);
    bool condition = a > 0 && b > 0 && c > 0;
    cout << ((condition == 1) ? "true" : "false");
}

void bool_16() {
    int a(90);
    bool condition = (a / 100 == 0) && (a / 10 > 0) && (a % 2 == 0);
    cout << ((condition == 1) ? "true" : "false");
}

void bool_24() {
    int a(1), b(2), c(-3);
    bool condition = (b * b - 4 * a * c) >= 0;
    cout << ((condition == 1) ? "exist" : "no roots");
}

void bool_25() {
    int x(-10),y(5);
    bool condition = x < 0 && y>0;
    cout << ((condition == 1) ? "true" : "false");
}

void bool_28() {
    int x(5), y(6);
    bool condition = (x > 0 && y > 0) || (x < 0 && y < 0);
    cout << ((condition == 1) ? "true" : "false");
}

void bool_32() {
    int a(5), b(12), c(13);
    bool condition = (c * c) == (a * a + b * b);
    cout << ((condition == 1) ? "true" : "false");
}

void bool_33() {
    int a(3), b(4), c(6);
    bool condition = (a < b + c) && (b < a + c) && (c < a + b);
    cout << ((condition == 1) ? "true" : "false");
}

//До задачі 35:чорний колір мають ті поля,координати яких одночасно парні або одночасно непарні;білий-неодночасно парні(одна парна, а інше непарна)
void bool_35() {
    int x1(3), y1(2), x2(5), y2(7);
    bool condition = (((x1 % 2 == 0 && y1 % 2 == 0) || (x1 % 2 != 0 && y1 % 2 != 0)) && ((x2 % 2 == 0 && y2 % 2 == 0) || (x2 % 2 != 0 && y2 % 2 != 0))) || (((x1 % 2 != 0 && y1 % 2 == 0) || (x1 % 2 != 0 && y1 % 2 == 0)) && ((x2 % 2 != 0 && y2 % 2 == 0) || (x2 % 2 == 0 && y2 % 2 != 0)));
    cout << ((condition == 1) ? "true" : "false");
}