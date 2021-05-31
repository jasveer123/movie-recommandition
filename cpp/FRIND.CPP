#include <iostream>

using namespace std;

class y;

class x
{
private:
    int data;

public:
    void setdata(int val)
    {

        data = val;
    }
    friend void sum(x, y);
};

class y
{
private:
    int vlaue;

public:
    void setvalue(int num1)
    {
        vlaue = num1;
    }
    friend void sum(x, y);
};

void sum(x p, y q)
{

    cout << "the sum of vomplex is " << p.data + q.vlaue;
}
int main()
{
    x a1;
    a1.setdata(4);

    y b1;
    b1.setvalue(5);

    sum(a1, b1);
    return 0;
}