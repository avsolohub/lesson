#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ���������� ������
    int a, c, d;
    double b;
    double result;

    // �������� ������� � ���������
    cout << "input a: ";
    cin >> a;
    cout << "a=" << a << endl;
    cout << "input b: ";
    cin >> b;
    cout << "b=" << b << endl;
    cout << "input c: ";
    cin >> c;
    cout << "c=" << c << endl;
    cout << "input d: ";
    cin >> d;
    cout << "d=" << d << endl;

    // ���������� �������� ������������� ������
    result = (2 * c + 51 * log10(d)) / (d - a + b);

    // ��������� ���������� �� �����
    cout << "result= " << result << endl;

    return 0;
}