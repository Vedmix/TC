#include <iostream>
#include <cmath>
int main() {
    system("chcp 65001");
    using namespace std;
    setlocale(LC_ALL, "RU");
    const float PI = 3.14159265;
    float rad, alpha_rad, sin_alpha, cos_alpha, tan_alpha, cot_alpha;
    int n90, alpha, ost;
    bool n901 = 0, n1801 = 0, up = 0,down=0,right=0,left=0;
    const int A_size = 10, B_size = 9, C_size = 9, D_size = 9;
    int a[A_size]{0, 4, 8, 12, 16, 20, 24, 28, 32, 36};
    int b[B_size]{1, 5, 9, 13, 17, 21, 25, 29, 33};
    int c[C_size]{2, 6, 10, 14, 18, 22, 26, 30, 34};
    int d[D_size]{3, 7, 11, 15, 19, 23, 27, 31, 35};
    cout << "Введите угол:  ";
    cin >> alpha;
    alpha_rad = (alpha / 180) * PI;
    sin_alpha = sin(alpha_rad);
    cos_alpha = cos(alpha_rad);
    tan_alpha = tan(alpha_rad);
    cot_alpha = (cos(alpha_rad) / sin(alpha_rad));

    if (alpha % 90 == 0) {
        ost = alpha / 90;


        if (ost % 2 == 0) {
            n1801 = true;

            for (int i = 0; i < A_size; i++) {

                if (a[i] == ost || alpha == 0) {
                    right = 1;
                    break;
                } else {
                    for (int i = 0; i < C_size; i++) {

                        if (c[i] == ost) {
                            left = 1;
                            break;
                        }
                    }
                }

            }
        }
        if (ost % 2 != 0) {
            n901 = true;
            for (int i = 0; i < B_size; i++) {

                if (b[i] == ost || alpha==90) {
                    up=1;
                    break;
                } else {
                    for (int i = 0; i < D_size; i++) {

                        if (c[i] == ost) {
                            down=1;
                            break;
                        }
                    }
                }

            }

            }


    }
    if (n1801) {
        cout << "Синус угла: " << 0 << endl;
    }
    else{
        if (up) {
            cout << "Синус угла: " << 1 << endl;
        }
        else if (down) {
            cout << "Синус угла: " << -1 << endl;
        }
        else {
            cout << "Синус угла: " << sin_alpha << endl;
        }
    }



    if (n901) {
        cout << "Косинус угла: " << 0 << endl;
    }
    else{
        if (right) {
            cout << "Косинус угла: " << 1 << endl;
        }
        else if (left) {
            cout << "Косинус угла: " << -1 << endl;
        }
        else {
            cout << "Косинус угла: " << cos_alpha << endl;
        }
    }

    if (n901) {
        cout << "Тангенс угла: тангенс не определен" << endl;
    }
    else if (n1801) {
        cout << "Тангенс угла: " << 0 << endl;
    }
    else {
        cout << "Тангенс угла: " << tan_alpha << endl;
    }

    if (n901) {
        cout << "Котангенс угла: " << 0 << endl;
    }
    else if (n1801) {
        cout << "Котангенс угла: котангенс не определен" << endl;
    }
    else {
        cout << "Котангенс угла: " << tan_alpha << endl;
    }

    cout << "Угол в радианах: " << alpha_rad;

    return 0;

}