//class Rect
//{
//	int width;
//	int length;
//public:
//	Rect() { };
//	Rect(int wid, int len) : width(wid), length(len) {};
//
//	bool operator==(const Rect& r) const;
//};
//
//bool Rect::operator==(const Rect& r) const
//{
//	return (width == r.width && length == r.length);
//}

//Rational.h
#include <iostream>
using namespace std;
class Rational
{
    int mone;
    int mechane;
public:
    Rational(int myMone = 1, int myMechane = 1) :mone(myMone), mechane(myMechane) {}
    Rational(const Rational& num) :mone(num.getMone()), mechane(num.getMechane()) {}
    void setMone(int myMone) { mone = myMone; }
    void setMechane(int myMechane) { mechane = myMechane; }
    int getMone() const { return mone; }
    int getMechane() const { return mechane; }

    bool operator==(const Rational& num) const;
    bool operator!=(const Rational& num) const;
    Rational operator+(const Rational& num) const; //c = a + b;
    Rational& operator+=(const Rational& num);
    Rational& operator=(const Rational& num);


    void print() const { cout << mone << '/' << mechane << endl; }
};

bool Rational::operator==(const Rational& num) const
{
    return (mone == num.getMone() && mechane == num.getMechane());
}

bool Rational::operator!=(const Rational& num) const
{
    //return !(mone == num.getMone() && mechane == num.getMechane());

    return !(*this == num);
}

Rational Rational::operator+(const Rational& num) const
{
    Rational tmp;

    tmp.setMone(mone * num.getMechane() + num.getMone() * mechane);

    tmp.setMechane(mechane * num.getMechane());

    return tmp;
}

Rational& Rational::operator+=(const Rational& num)
{
    *this = *this + num;
    return *this;
}

Rational& Rational::operator=(const Rational& num)
{
    mone = num.mone;
    mechane = num.mechane;

    return *this;
}


int main()
{
	//Rect r1(5, 2);
	//Rect r2;
	//r2 = r1; //ok!
	//if (r2 == r1) { /*...*/ }; //compilation error

    Rational a(2, 3), b(1, 9);

    bool c1 = a == b;

    bool c2 = a.operator== (b);

    if (a != b)
    {

    }

    Rational c;

    c = a + b;

    cout << c.getMone()
        << "/" << c.getMechane();  //21/27


    Rational e(6, 7);
    c = a + b + e;


    Rational r1(2, 4);
    Rational r2(r1);
    Rational r3(3, 4);


    r1 += r2;


    r1 += r2 += r3;

    r1 = r2;
    r1 = r2 = r3;

}
