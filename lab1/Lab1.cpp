
#include <iostream>
#include <stdio.h>

bool isLeapYear(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return true;
			}
		} else {
			return true;
		}
	}
	return false;
}

int Reversed(int testNumber)
{
	int reversedNumber = 0;
	while (testNumber > 0) {
		int lastDigit = testNumber % 10;
		reversedNumber*=10;
		reversedNumber+=lastDigit;
		testNumber/=10;
	}
	return reversedNumber;
}
bool isAPalindrome(int testNumber)
{
	int reversedNumber = Reversed(testNumber);
	return reversedNumber == testNumber;
}
bool isAPrimeNumber(int numbertoTest)
{
	if (numbertoTest <= 1) return false;

	for (int index = 2; index <= numbertoTest / 2; index++) {
		if (numbertoTest % index == 0) {
			return false;
		}
	}
	return true;
}
int input5CharsConvertToInt()
{
	int returnInt = 0;
	char inputChar;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> inputChar;
		//check if its a digit.
		//do something

		if (inputChar >= '0' && inputChar <= '9') {
			returnInt *= 10;
			returnInt += inputChar - '0';
		} else {
			return 0;
		}
	}
	return returnInt;
}
int convertBinarytoDecimal(int binaryNumber)
{
	int sum = 0;
	int index = 0;
	while (binaryNumber > 0) {
		int lastDigit = binaryNumber % 10;
		binaryNumber/=10;

		sum += lastDigit * pow(2, index);
		index++;
	}
	return sum;
}
void drawRightAngledTriangle()
{
	for (int indexRows = 0; indexRows < 4; indexRows++) {
		for (int indexColumns = 0; indexColumns <= indexRows; indexColumns++) {
			printf("A");
		}
		printf("\n");
	}
}
void drawIsocelesTriangle()
{
	for (int indexRows = 0; indexRows < 7; indexRows++) {
		if (indexRows < 4) {
			for (int indexColumns = 0; indexColumns <= indexRows; indexColumns++) {
				printf("A");
			}
		} else {
			for (int indexColumns = indexRows; indexColumns < 7; indexColumns++) {
				printf("A");
			}
		}
		printf("\n");
	}
}
void drawIsocelesTriangle2()
{

}

int find(int size, int arr[], int toFind)
{
	return -1;
}
int find2ndLargest(int size, int arr[])
{
	return -1;
}
void copyArraytoArray(int size, int arr1[], int arr2[])
{
	return;
}
bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{

	return false;
}
bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{

	return true;
}
int frequencyCount(int size, int arr[], int value)
{

	return 0;
}
int countDuplicates(int size, int arr[])
{

	return 0;
}
void reverse(int size, int arr[])
{
	return;
}
int rotateLeft(int size, int arr[])
{
	return -1;
}
bool twoMovies(int flightLength, int movieLengths[], int size)
{
	return false;
}
int wordCounter(int size, char characters[])
{
	return 0;
}
// Test for Questions 1 to 8
int main()
{
	// example of  printf() 
	// example printf("Leapyear\n");
	printf("Leapyear\n");
	std::cout << "Leapyear" << std::endl;
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "NumberReversed" << std::endl;
	if (Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	if (Reversed(1) == 1)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	std::cout << "Palindrome" << std::endl;
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Prime Number" << std::endl;
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Binary to Decimal" << std::endl;
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "5 chars to int" << std::endl;
	int convertedInt = input5CharsConvertToInt();
	std::cout << convertedInt << std::endl;

	std::cout << "Triangles" << std::endl;
	drawRightAngledTriangle();
	drawIsocelesTriangle();

}