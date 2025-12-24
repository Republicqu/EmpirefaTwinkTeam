#include "pch.h"
#include "CppUnitTest.h"
#include "..\PR7\Task 1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
    TEST_CLASS(UnityTest7)
    {
    public:

        // === ПОЗИТИВНЫЕ ТЕСТЫ ===

        // Позитивный тест 1: вычисление процента от числа
        TEST_METHOD(TestCalculatePercent_ValidInput_ReturnsCorrectValue)
        {
            // Arrange
            double number = 100.0;
            double percent = 5.0;
            double expected = 5.0;

            // Act
            double result = MathPercentsOperations::calculatePercent(number, percent);

            // Assert
            Assert::AreEqual(expected, result, 0.0001);
        }

        // Позитивный тест 2: увеличение числа на процент
        TEST_METHOD(TestIncreaseByPercent_ValidInput_ReturnsCorrectValue)
        {
            // Arrange
            double number = 200.0;
            double expected = 202.0;

            // Act
            double result = MathPercentsOperations::increaseByPercent(number);

            // Assert
            Assert::AreEqual(expected, result, 0.0001);
        }

        // === НЕГАТИВНЫЕ ТЕСТЫ ===

        // Негативный тест 1: отрицательное число
        TEST_METHOD(TestCalculatePercent_NegativeNumber_ThrowsException)
        {
            // Arrange
            double number = -100.0;
            double percent = 5.0;

            // Act & Assert
            auto func = [number, percent]() {
                MathPercentsOperations::calculatePercent(number, percent);
            };

            Assert::ExpectException<std::invalid_argument>(func);
        }

        // Негативный тест 2: отрицательный процент
        TEST_METHOD(TestDecreaseByPercent_NegativePercent_ThrowsException)
        {
            // Arrange
            double number = 100.0;
            double percent = -5.0;

            // Act & Assert
            auto func = [number, percent]() {
                MathPercentsOperations::decreaseByPercent(number);
            };

            Assert::ExpectException<std::invalid_argument>(func);
        }
    };

}
