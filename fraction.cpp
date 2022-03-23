#include "fraction.h"
void PhanSo::Input()
{
    int temp_num;
    int temp_den;
    cin >> temp_num;
    do {
        cin >> temp_den;
    } while (temp_den == 0);
    num = temp_num;
    den = temp_den;
}
void PhanSo::Output()
{
    cout << num << '/' << den << endl;
}
int UCLN(int t, int m)
{
    if (t < 0) t *= -1;
    if (m < 0) m *= -1;
    if (t < m)
    {
        swap(t, m);
        if (m == 0) return t;
        else return UCLN(m, t%m);
    }
    else
    {
        if (m == 0) return t;
        else return UCLN(m, t%m);
    }
}
void PhanSo::reduce()
{
    int temp = UCLN(num, den);
    num /= temp;
    den /= temp;
    if (den < 0)
    {
        den *= -1;
        num *= -1;
    }
}
PhanSo PhanSo::operator+(PhanSo u)
{
    PhanSo res;
    res.num = num * u.den + u.num*den;
    res.den = den * u.den;
    res.reduce();
    return res;
}
PhanSo PhanSo::operator-(PhanSo u)
{
    PhanSo res;
    res.num = num * u.den - u.num*den;
    res.den = den * u.den;
    res.reduce();
    return res;
}
PhanSo PhanSo::operator*(PhanSo u)
{
    PhanSo res;
    res.num = num * u.num;
    res.den = den * u.den;
    res.reduce();
    return res;
}
PhanSo PhanSo::operator/(PhanSo u)
{
    PhanSo res;
    res.num = num * u.den;
    res.den = den * u.num;
    res.reduce();
    return res;
}