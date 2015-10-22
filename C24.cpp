//Effective C++：条款24：若所有参数皆需类型转换，请为此采用non-member函数

#include <iostream>
using namespace std;

class Rational
{
public:
	Rational(int numerator = 0, int denominator = 1) :_numerator(numerator), _denominator(denominator){};
	int getNumerator()const;
	int getDenominator()const;
//	const Rational operator*(const Rational & rhs)const;
private:
	int _numerator;
	int _denominator;
};

int Rational::getNumerator()const
{
	return _numerator;
}

int Rational::getDenominator()const
{
	return _denominator;
}

//const Rational Rational::operator*(const Rational &rhs)const
//{
//	Rational ra(this->_numerator*rhs._numerator, this->_denominator*rhs._denominator);
//	return ra;
//}

const Rational operator*(const Rational & lhs, const Rational & rhs)
{
	Rational ra(lhs.getNumerator()*rhs.getNumerator(), lhs.getDenominator()*rhs.getDenominator());
	return ra;
}

int main()
{
	Rational oneEighth(1, 8);
	Rational oneHalf(1,2);
	
	Rational result = oneEighth * oneHalf;
	cout << result.getNumerator() << " " << result.getDenominator() << endl;
	result = result * oneEighth;
	cout << result.getNumerator() << " " << result.getDenominator() << endl;

	result = oneHalf * 2;//int转换成了Ratinal对象了
	cout << result.getNumerator() << " " << result.getDenominator() << endl;
	
	result = 2 * oneHalf;
	cout << result.getNumerator() << " " << result.getDenominator() << endl;


	return 0;
}
