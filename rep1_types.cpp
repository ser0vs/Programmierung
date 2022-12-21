#include <iostream>
#include <limits>

using namespace std;

int task1_1() {
//int main() {

    cout << "Границы int: [" << numeric_limits<int>::min() << "; " << numeric_limits<int>::max() << "]" << endl;
    cout << "Границы long int: [" << numeric_limits<long int>::min() << "; " << numeric_limits<long int>::max() << "]" << endl;
    cout << "Границы long long int: [" << numeric_limits<long long int>::min() << "; " << numeric_limits<long long int>::max() << "]" << endl;
    cout << "Границы float: [" << numeric_limits<float>::min() << "; " << numeric_limits<float>::max() << "]" << endl;
    cout << "Границы double: [" << numeric_limits<double>::min() << "; " << numeric_limits<double>::max() << "]" << endl;
    cout << "Границы size_t: [" << numeric_limits<size_t>::min() << "; " << numeric_limits<size_t>::max() << "]" << endl;

    cout << "Границы char: [" << static_cast<int>(numeric_limits<char>::min()) << "; " << static_cast<int>(numeric_limits<char>::max()) << "]" << endl;

    return 0;
}

int task1_2() {
//int main() {
    char c {'A'};
    for (char a {'A'}; a <= 'Z'; a++) {
        cout << a << ' ';
    }
    cout << endl;
    char q {'q'};
    int distance {'a' - 'A'};
    cout << static_cast<char>(q - distance) << endl;
    cout << '\t' << "Hello World"; // tab
    cout << '\n'; // endl

    return 0;
}

int task2_1() {
//int main() {
    int x {5};
    float y {5.5};
    //cout << "#1" << endl;
    // cout << x + y << endl;
    //cout << static_cast<int>(x + y) << endl << endl;


    cout << "#2" << endl;
    int a {12213213};
    long long int b {12213213213213213};
    cout << a + b << endl;

    bool q {true};
    cout << q;
    return 0;
}

int task2_2() {
//int main() {
    int i{19};
//    cout << static_cast<double>(i / (2 / 2));
//    cout << static_cast<double>(i / 2) / 2;
//    cout << static_cast<double>(i / 2 / 2);
    cout << static_cast<double>(i) / 2 / 2;

    return 0;
}

//int task2_3() {
int main() {
    constexpr double a{142};
    const double b{10};

//    cout << a / b << a / b * 2;

//    cout << a / b / b;
//    cout << static_cast<int>(a) / b / b;

//    cout << static_cast<int>(a / b) / b;

//    cout << static_cast<int>(a / b / b);

    return 0;
}