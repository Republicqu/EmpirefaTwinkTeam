#include "pch.h"
#include "CppUnitTest.h"
#include "..\PR7.1\PartnerCode.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace ComplexCalculatorTests
{
    TEST_CLASS(UnitTest71)
    {
    public:

        TEST_METHOD(TestAddComplex_PositiveNumbers_CorrectResult)
        {

            double real1 = 3.0;
            double imag1 = 2.0;
            double real2 = 1.0;
            double imag2 = 4.0;

            // Ожидаемый результат: (3+2i) + (1+4i) = 4 + 6i
            double expected_real = 4.0;
            double expected_imag = 6.0;

            // Act
            Complex_Calculator::addComplex(real1, imag1, real2, imag2);

            // Assert
            Assert::AreEqual(expected_real, Complex_Calculator::shareid_real, 0.0001);
            Assert::AreEqual(expected_imag, Complex_Calculator::shareid_imag, 0.0001);
        }
    };
}