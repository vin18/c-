#include <iostream>
#include <memory>

using namespace std;

void increase_price(double* price) {
    *price *= 1.2;
}

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = *first;
}

void print_numbers(int numbers[], int size) {
    numbers[0] = 0;
}

int main() {
    int number = 10;
    cout << &number;

    int *ptr = &number;
    // Indirection (de-referencing) operator
    *ptr = 20;
    cout << *ptr;

    // Constant pointers
    const int x = 10;
    const int* const ptr = &x;
    *ptr = 20;

    // Passing pointers to functions
    double price = 100;
    increase_price(&price);
    cout << price;

    int a = 10, b = 20;
    swap(&a, &b);

    int numbers[] = {10, 20, 30};
    int* ptr = numbers;
    cout << ptr;
    print_numbers(numbers, 3);

    // Pointers arithmetic
    int numbers1[] = {10, 20, 30};
    int* ptr = numbers;
    ptr++;

    // Comparison operators
    int c = 10;
    int d = 20;

    int* ptrX = &c;
    int* ptrY = &d;

    if (ptrX != nullptr) {
        cout << *ptrX;
    }

    int numbers2[] = {10, 20, 30};
    int* ptr = &numbers[size(numbers) - 1];
    while (ptr >= numbers) {
        cout << *ptr << endl;
        ptr--;
    }

    // Dynamic memory allocation
    // Stack
    // int numbers5[1000];

    // Heap (free store)
    int* numbers5 = new int[10];
    delete[] numbers;
    numbers5 = nullptr;

    int capacity = 5;
    int* numbers6 = new int[capacity];
    int entries = 0;

    while (true) {
        cout << "Number: ";
        cin >> numbers6[entries]; 
        if (cin.fail()) break;
        entries++;
        if (entries == capacity) {
            capacity *= 2;
            int* temp = new int[capacity];
            for (int i = 0; i < entries; i++) {
                temp[i] = numbers6[i];
            }
            delete[] numbers6;
            numbers6 = temp;
        }
    }

    for (int i = 0; i < entries; i++) {
        cout << numbers[i] << endl;
    }

    delete[] numbers6;

    // Unique pointers
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();

    // Shared pointers
    auto x = make_shared<int>();

    return 0;
}