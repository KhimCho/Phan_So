#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>

class PhanSo
{
private:
    int num;
    int den;
public:
    void Input();
    void Output();
    void reduce();
    PhanSo operator+(PhanSo u);
    PhanSo operator-(PhanSo u);
    PhanSo operator*(PhanSo u);
    PhanSo operator/(PhanSo u);
};