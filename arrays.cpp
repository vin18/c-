#include <iostream>

using namespace std;

const int rows = 2;
const int columns = 3;

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++)  
        cout << numbers[i];
}

int findNumber(int numbers[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) return i;
    }
    return -1;
}

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void bubble_sort(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (numbers[i] < numbers[i - 1]) 
                swap(numbers, i, i - 1);
        }
    }
}

void print_matrix(int matrix[][], int row, int columns) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < columns; col++) {
            cout << matrix[row][columns];
        }
    }
}

int main() {
    // int numbers[5] = { 10, 20 };

    // int numbers[5];
    // numbers[0] = 10;
    // numbers[4] = 20;
    // numbers[30] = 200;

    // for (int number : numbers) {
    //     cout << number << endl;
    // } 

    // for (int i = 0; i < size(numbers); i++) {
    //     cout << numbers[i] << endl;
    // }

    // Copying arrays
    // int first[] = {10, 20, 30};
    // int second[size(first)];

    // for (int i = 0; i < size(first); i++) {
    //     second[i] = first[i];
    // }

    // for (int number: second) {
    //     cout << number << endl;
    // }


    // Comparing arrays
    // int first[] = {10, 20, 30};
    // int second[] = {10, 20, 30};

    // bool areEqual = true;
    // for (int i = 0; i < size(first); i++) {
    //     if (first[i] != second[i]) {
    //         areEqual = false;
    //         break;
    //     }
    // }
    // cout << areEqual << endl;

    // Passing array to functions
    // int numbers[] = {10, 20, 30};
    // printNumbers(numbers, size(numbers));

    // size_t
    // int numbers[] = {10, 20, 30};
    // cout << numeric_limits<long long>::min() << endl;
    // cout << numeric_limits<long long>::max() << endl;
    // cout << numeric_limits<size_t>::max() << endl;
    // cout << numeric_limits<size_t>::max() << endl;

    // Unpacking arrays
    // int values[3] = {10, 20, 30};
    // C++ - Structured binding, Javascript - Destructuring
    // auto [x, y, z] = values;

    // Searching arrays
    // int numbers[] = {10, 20, 30};
    // int element = findNumber(numbers, size(numbers), 20); 

    // Sorting arrays
    // int numbers[] = {10, 20, 30};
    // bubble_sort(numbers, size(numbers));
    // for (int number : numbers) {
    //     cout << number << endl;
    // }

    // Multidimensional arrays
    int matrix[rows][columns] = {
        {11, 12, 13},
        {21, 22, 23},
    };
    print_matrix(matrix, rows, columns);
    return 0;
}