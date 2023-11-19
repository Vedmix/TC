#include <iostream>
#include <cmath>
int main()
{
    system("chcp 65001");
	using  namespace std;
	setlocale(LC_ALL, "RU");
	const float PI = 3.14159265;
	float alpha,rad,alpha_rad,sin_alpha,cos_alpha,tan_alpha,cot_alpha;
    int n90;
    bool n901,up;
	cout << "Введите угол:  ";
	cin >> alpha;
    alpha_rad = (alpha / 180)*PI;
    sin_alpha=sin(alpha_rad);
    cos_alpha=cos(alpha_rad);
    tan_alpha=tan(alpha_rad);
    cot_alpha= (cos(alpha_rad)/sin(alpha_rad));
    if (alpha>=90 && alpha == static_cast<int>(alpha)){
        n90=(alpha - 90) / 360;
        if (n90 != static_cast<int>(n90)){
            alpha+=180;
            n90=(alpha - 90) / 360;
            if (n90 == static_cast<int>(n90)){
                n901=true;
            }
            else{
                n901=false;
                up=false;
            }
        }
        else{
            n901=true;
            up=true;
        }
    }

    if (up){
        cout << "Синус угла: " << 1 << endl;
    }
    else if (!up){
        cout << "Синус угла: " << -1 << endl;
    }
    else{
        cout << "Синус угла: " << sin_alpha << endl;
    }

    if (n901){
        cout << "Косинус угла: " << 0 << endl;
    }
    else{
        cout << "Косинус угла: " << cos_alpha << endl;
    }

    if (alpha==90 || n901){
        cout << "Тангенс угла: тангенс не определен" << endl;
    }
    else {
        cout << "Тангенс угла: " << tan_alpha << endl;
    }
    if (alpha==90 || n901){
        cout << "Котангенс угла: " << 0 << endl;
    }
    else {
        cout << "Тангенс угла: " << tan_alpha << endl;
    }

    cout << "Угол в радианах: " << alpha_rad;

	return 0;
}
