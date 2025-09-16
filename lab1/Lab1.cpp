
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
	int index = 0;
	while (index < size) {
		if (arr[index] == toFind) {
			return index;
		}
		index++;
	}
	return -1;
}
int find2ndLargest(int size, int arr[])
{
	if (size < 2) {
		return -1;
	}

	int max = -1;
	int secondMax = -1;
	for (int index = 0; index < size; index++) {
		if (arr[index] > max) {
			secondMax = max;
			max = arr[index];
		} else if (arr[index] > secondMax && arr[index] != max) {
			secondMax = arr[index];
		}
	}
	return secondMax;
}
void copyArraytoArray(int size, int arr1[], int arr2[])
{
	for (int index = 0; index < size; index++) {
		arr2[index] = arr1[index];
	}
}
bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{
	if (count >= size) {
		return false;
	}

	for (int index = count - 1; index >= insertIndex; index--) {
		arr[index + 1] = arr[index];
	}
	arr[insertIndex] = elementToInsert;
	count++;
	return true;
}
bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{
	if (count <= 0) {
		return false;
	}

	for (int index = deleteIndex; index < count; index++) {
		arr[index] = arr[index + 1];
	}
	count--;
	arr[count] = 0;
	return true;
}
int frequencyCount(int size, int arr[], int value)
{
	int frequency = 0;
	for (int index = 0; index < size; index++) {
		if (arr[index] == value) {
			frequency++;
		}
	}
	return frequency;
}
int countDuplicates(int size, int arr[])
{
	int arr2[size];
	copyArraytoArray(size, arr, arr2);

	int duplicates = 0;
	for (int index = 0; index < size; index++) {
		for (int repeatIndex = 0; repeatIndex < size; repeatIndex++) {
			if (index != repeatIndex && arr[index] == arr2[repeatIndex]) {
				duplicates++;
				arr2[repeatIndex] = 0;
			}
		}
	}

	return duplicates;
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

	std::cout << "Arrays" << std::endl;
	std::cout << "Find" << std::endl;
	int size = 4;
	int arr[] = {20, 30, 10, 0};
	int toFind = 10;
	int index = find(size, arr, toFind);
	std::cout << index << std::endl;

	std::cout << "Find 2nd largest" << std::endl;
	int i2ndLargest = find2ndLargest(size, arr);
	std::cout << i2ndLargest << std::endl;

	std::cout << "Copy arr1 to arr2" << std::endl;
	int arr2[4];
	copyArraytoArray(size, arr, arr2);

	std::cout << "Insert element" << std::endl;
	int arr3[5] = {1, 2, 4, 5};
	int size2 = 5;
	int count = 4;
	int elementToInsert = 3;
	int insertIndex = 2;
	insertElement(size2, count, arr3, elementToInsert, insertIndex);

	std::cout << "Delete element" << std::endl;
	int deleteIndex = 2;
	deleteElement(size2, count, arr3, deleteIndex);

	std::cout << "Frequency count" << std::endl;
	int arr4[] = {1,2,2,2,3};
	int frequency = frequencyCount(5, arr4, 2);
	std::cout << frequency << std::endl;

	std::cout << "Duplicate count" << std::endl;
	int arr5[] = {1, 2, 2, 5, 5, 5, 7, 8};
	int duplicates = countDuplicates(8, arr5);
	std::cout << duplicates << std::endl;
}