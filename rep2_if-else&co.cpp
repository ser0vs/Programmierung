#include <iostream>

using namespace std;

int task1_1() {
//int main() {
    int a {10};
//    cout << a++ << endl;
//    cout << ++a << endl;
//    cout << a++ + a << endl;
//    cout << ++a + a << endl;

    return 0;
}

int task1_2() {
//int main() {
    int a {7};
    int b {12};
//    cout << (a = 3) << endl;
//    cout << (a == 3) << endl;
//    cout << (a = b + 3) << endl;
//    cout << (a += b) << endl;
    return 0;
}


int task1_3() {
//int main() {
    int a{2};
    int b{5};
    int c{8};
    int d{3};
    cout << a++ << ++b << c-- << --d;
    cout << (d += ++a + b++);
    cout << a++ << ++b << c-- << --d;
    cout << a << b << c << d;
    return 0;
}

//int task2_1() {
int main() {
    int a {3};
    int b {4};
    int c {5};
//    cout << (a > b) << endl;
//    cout << ((a == c) > b) << endl;
//    cout << ((a = c) > b) << endl;
//    cout << (c > b > a) << endl;

}


int task2_2() {
//int main() {
    constexpr int a{3};
    constexpr int b{2};
    constexpr int c{7};
    if (a < b < c)
        if (c > b > a)
            if (a > c) cout << 32;
            else cout << 23;
        else
        if (b < c) cout << 72;
        else cout << 27;
    else
    if (b > a > c)
        if (a < c) cout << 37;
        else cout << 73;
    else
    if (b > c) cout << 79;
    else cout << 97;
    return 0;
}


// Zuweisung
int task2_3() {
//int main() {
    double a{3}, b{6}, c{1};
    cout << (b=(a=b+0.5)+(c=b));
    cout << a/2 << b/2 << c/2;
}


int task2_4() {
//int main() {
    int a{8};
    cout << "cout<<" << a*4;
    cout << "return 9;";
    return a + 1;
    cout << "a=" << a;
}


int task3_2() {
//int main() {
    int i{524};
    while (i) {
        switch (i%10) {
            case 5: cout << i;
            case 8: cout << 'i';
            case 4: cout << "i";
                break;
            default: cout << "*";
        }
        i/=10;
    }
    return 0;
}
