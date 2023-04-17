#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_arguments(int argc);
int check_digits(char *num);
int multiply(char *num1, char *num2);
void reverse_string(char *str);

int main(int argc, char *argv[]) {
    if (check_arguments(argc) == -1) {
        printf("Error\n");
        return 98;
    }

    if (check_digits(argv[1]) == -1 || check_digits(argv[2]) == -1) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);
    return 0;
}

int check_arguments(int argc) {
    if (argc != 3) {
        return -1;
    }
    return 0;
}

int check_digits(char *num) {
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i])) {
            return -1;
        }
    }
    return 0;
}

int multiply(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;
    int result[result_len];
    memset(result, 0, result_len * sizeof(int));

    for (int i = 0; i < len1; i++) {
        int carry = 0;
        int n1 = num1[len1 - 1 - i] - '0';
        for (int j = 0; j < len2; j++) {
            int n2 = num2[len2 - 1 - j] - '0';
            int product = n1 * n2 + carry + result[i + j];
            carry = product / 10;
            result[i + j] = product % 10;
        }
        if (carry > 0) {
            result[i + len2] += carry;
        }
    }

    int index = result_len - 1;
    while (index >= 0 && result[index] == 0) {
        index--;
    }
    if (index == -1) {
        return 0;
    }

    char result_str[result_len];
    for (int i = 0; i <= index; i++) {
        result_str[i] = result[index - i] + '0';
    }
    result_str[index + 1] = '\0';

    reverse_string(result_str);

    return atoi(result_str);
}

void reverse_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

