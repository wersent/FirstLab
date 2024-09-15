#include <iostream>
using namespace std;

int main(){
    int int_var = 2147483647;
    cout << "int: " << sizeof(int_var) << "; min size: -2 147 483 648(signed)/0(unsigned); max size: 2 147 483 647(signed)/4 294 967 295(unsigned);\n";
    cout << int_var - 1 << endl;
    char char_var = 'w';
    cout << "char: " << sizeof(char_var) << "; min size: -128(signed)/0(unsigned); max size: 127(signed)/255(unsigned);\n";
    cout << char_var - 0 << endl;
    long long_var = -9223372036854775808;
    cout << "long: " << sizeof(long_var) << "; min size: -9 223 372 036 854 775 808(signed)/0(unsigned); max size: 9 223 372 036 854 775 807(signed)/4 294 967 295(unsigned);\n";
    cout << long_var + long(1) << endl;
    long long long_long_var = 18446744073709551615;
    cout << "long long: " << sizeof(long_long_var) << "; min size: -9 223 372 036 854 775 808(signed)/0(unsigned); max size: 9 223 372 036 854 775 807(signed)/18 446 744 073 709 551 615(unsigned);\n";
    cout << long_long_var + long long(1) << endl;
    float float_var = 1.5;
    cout << "float: " << sizeof(float_var) << "; min size: +/- 3.4E-38; max size: 3.4E+38;\n";
    cout << float_var + 0.2 << endl;
    double double_var = 8.5;
    cout << "double: " << sizeof(double_var) << "; min size: +/- 1.7E-308; max size: 1.7E+308;\n";
    cout << double_var + 0.6 << endl;
    bool bool_var = true;
    cout << "bool: " << sizeof(bool_var) << "; True/False \n";
    cout << (bool_var == false ? "Yes" : "No");
}