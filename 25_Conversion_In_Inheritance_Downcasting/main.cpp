//
//  main.cpp
//  25_Conversion_In_Inheritance_Downcasting
//
//  Created by 세광 on 2021/07/13.
//

// static_cast: 정적으로 형변환
// static_cast: 서로 전혀 다른 타입의 포인터끼리 형변환하는 경우를 방지 (ex. int -> class)
// static_cast로 할 수 있는 형변환: 업캐스팅 / 다운캐스팅, double -> int / int -> double

#include <iostream>

using namespace std;

class Base {
public:
    int a = 1;
};

class Drv1 : public Base {
public:
    void f() {
        cout << "Drv1::f()" << endl;
        cout << b << endl;
    }
    float b = 3.14;
};

class Drv2 : public Base {
public:
    void f() {
        cout << "Drv2::f()" << endl;
        cout << c << endl;
    }
    int c = 3;
};

int main() {
    Base *b1 = new Drv1;
    Drv1 *d1 = static_cast<Drv1*>(b1);
    d1->f();
    delete b1;
    
    Base *b2 = new Drv2;
    Drv2 *d2 = static_cast<Drv2*>(b2);
    d2->f();
    delete b2;
}
