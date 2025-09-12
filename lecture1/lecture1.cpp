//
// Created by Darian Byrne on 11/09/2025.
//

#include <cstdio>

int add(int first, int second);

int addByRef(int *first, int *second) {
    *first = *first+1;
    return *first + *second;
}

int main() {
    char grade = 'a';
    int count = 0;
    while (grade != 'z') {
        printf("the grade is %c\n", grade);
        grade++;
    }
    int one = 10;
    int two = 20;
    int result = add(one,2);
    printf("%d\n", result);

    result = addByRef(&one,&two);
    printf("%d\n", result);
    printf("%d\n", one);
}

int add(int first, int second) {
    return first + second;
}
