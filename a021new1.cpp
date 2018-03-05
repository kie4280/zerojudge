#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class bignum {
public:

    int digits = 0;
    bool negative = false;
    int num[arraysize] = {0}

    bignum() {
        digits = 0;
        negative = false;
    }

    bignum(string input) {
        for (int i = input.length() - 1, count1 = 0; i >= 0 && isdigit(input[i]) && count1 < arraysize; i--, digits++, count1++) {
            num[count1] = input[i] - '0';
        }
        if (input[0] == '-')
            negative = true;
        else
            negative = false;
    }

    void print() {
        if (negative == true)
            cout << "-";
        for (int i = digits - 1; i >= 0; i--) {
            cout << num[i];
        }

        cout << endl;
    }

    bignum operator+(bignum ano) {
        bignum temp;

        for (int i = 0; i < max(ano.digits, digits) && i < arraysize; i++) {
            temp.num[i] += num[i] + ano.num[i];
            temp.num[i + 1] = temp.num[i] / 10;
            temp.num[i] %= 10;
        }
        temp.digits = max(ano.digits, digits);
        if (temp.num[temp.digits] != 0)
            temp.digits++;

        return temp;
    }

    bignum operator-(bignum ano) {
        bignum temp;
        temp = *this;
        if (temp.compare(ano) == "<") {
            for (int a = 0; a < ano.digits; a++) {
                temp.num[a] = ano.num[a] - temp.num[a];
                if (temp.num[a] < 0) {
                    temp.num[a] += 10;
                    temp.num[a + 1]++;
                }
            }
            temp.negative = true;
            temp.digits = ano.digits;
            for (int i = ano.digits - 1; i > 0 && temp.num[i] == 0; i--)
                temp.digits = i;

        } else {
            for (int a = 0; a < temp.digits; a++) {
                temp.num[a] -= ano.num[a];
                if (temp.num[a] < 0) {
                    temp.num[a] += 10;
                    temp.num[a + 1]--;
                }
            }

            for (int i = temp.digits - 1; i > 0 && temp.num[i] == 0; i--)
                temp.digits = i;

        }

        return temp;
    }

    bignum operator*(bignum ano) {
        bignum temp, output;
        int a, b;

        for (a = 0; a < ano.digits; a++) {
            temp = bignum("0");

            for (b = 0; b < digits; b++) {
                temp.num[a + b] += num[b] * ano.num[a];
                temp.num[a + b + 1] = temp.num[a + b] / 10;
                temp.num[a + b] = temp.num[a + b] % 10;
            }
            temp.digits = a + b + 1;

            for (int i = temp.digits - 1; temp.num[i] == 0 && i > 0; i--)
                temp.digits = i;

            output = output + temp;

        }

        return output;
    }

    bignum operator/(bignum ano) {
        bignum temp = *this, output, a;
        if (temp.compare(ano) == "<")
            output = bignum("0");

        for (int i = digits - ano.digits; i >= 0; i--, output.digits++) {
            a = bignum("0");
            a.digits = i + 1;

            for (int d = 1; d < 10; d++) {
                a.num[i] = d;

                if (temp.compare(a * ano) == "<") {
                    a.num[i] = d - 1;
                    if (d - 1 == 0)
                        a.digits = 1;
                    temp = temp - (a * ano);
                    break;
                }

            }
            output = output + a;

        }

        for (int i = output.digits - 1; i > 0 && output.num[i] == 0; i--)
            output.digits = i;


        return output;

    }

    bignum operator%(bignum ano) {
        bignum temp = *this, output;
        //output=(temp/ano)
        return temp;
    }

    string compare(bignum ano) {
        if (digits > ano.digits)
            return ">";
        if (digits < ano.digits)
            return "<";
        if (digits == ano.digits) {
            for (int a = digits - 1, b = ano.digits - 1; a >= 0 && b >= 0; a--, b--) {
                if (num[a] > ano.num[b])
                    return ">";
                if (num[a] < ano.num[b])
                    return "<";
                if (a == 0 && b == 0)
                    return "=";

            }
        }
    }

};

int main() {
    string a, b, oper;
    bignum output, x, y;

    while (cin >> a >> oper >> b) {
        x = bignum(a);
        y = bignum(b);

        if (oper == "+") {
            (x + y).print();
        } else if (oper == "-") {
            (x - y).print();
        } else if (oper == "*") {
            (x * y).print();
        } else if (oper == "/") {
            (x / y).print();
        }


    }
    return 0;
}
