//OPRETORS
//1. Arithmetic Operators
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Addition
    int sum = a + b; // sum = 15 (int)

    // Subtraction
    int diff = a - b; // diff = 5 (int)

    // Multiplication
    int prod = a * b; // prod = 50 (int)

    // Division
    int quot = a / b; // quot = 2 (int)

    // Modulus (Remainder)
    int mod = a % b; // mod = 0 (int)

//2 Relational opretors:-

    // Equal to
    int isEqual = (a == b); // isEqual = 0 (int) (0 means false)

    // Not equal to
    int isNotEqual = (a != b); // isNotEqual = 1 (int) (1 means true)

    // Greater than
    int isGreater = (a > b); // isGreater = 1 (int) (1 means true)

    // Less than
    int isLess = (a < b); // isLess = 0 (int) (0 means false)

    // Greater than or equal to
    int isGreaterEqual = (a >= b); // isGreaterEqual = 1 (int)

    // Less than or equal to
    int isLessEqual = (a <= b); // isLessEqual = 0 (int)

//3.Logical opretors:-

    int i = 1, j = 0;

    // Logical AND
    int andOp = (i && j); // andOp = 0 (int) (0 means false)

    // Logical OR
    int orOp = (i || j); // orOp = 1 (int) (1 means true)

    // Logical NOT
    int notOp = !i; // notOp = 0 (int)

    //4.Bitwise opretors:-

    int x = 5;  // 0101 in binary
    int y = 3;  // 0011 in binary

    // Bitwise AND
    int bitAnd = x & y; // bitAnd = 1 (int) (0001 in binary)

    // Bitwise OR
    int bitOr = x | y; // bitOr = 7 (int) (0111 in binary)

    // Bitwise XOR
    int bitXor = x ^ y; // bitXor = 6 (int) (0110 in binary)

    // Bitwise NOT
    int bitNot = ~x; // bitNot = -6 (int) (Inverts bits)

    // Bitwise Left Shift
    int leftShift = x << 1; // leftShift = 10 (int) (1010 in binary)

    // Bitwise Right Shift
    int rightShift = x >> 1; // rightShift = 2 (int) (0010 in binary)

    //5.Assignment opretors:-
    


    // Assignment
    int c = a; // b = 10 (int)

    // Add and assign
    b += 5; // b = 15 (int)

    // Subtract and assign
    b -= 3; // b = 12 (int)

    // Multiply and assign
    b *= 2; // b = 24 (int)

    // Divide and assign
    b /= 4; // b = 6 (int)

    // Modulus and assign
    b %= 5; // b = 1 (int)

    //6. Increment and Decrement Operators:-
    

    // Pre-increment
    int preInc = ++a; // preInc = 11 (int), a = 11 (int)

    // Post-increment
    int postInc = a++; // postInc = 11 (int), a = 12 (int)

    // Pre-decrement
    int preDec = --a; // preDec = 11 (int), a = 11 (int)

    // Post-decrement
    int postDec = a--; // postDec = 11 (int), a = 10 (int)
    
    //7. Conditional (Ternary) Operator:-

    // Conditional (ternary) operator
    int max = (a > b) ? a : b; // max = 10 (int)
    
    //8. Comma Operator:-
    
    // Comma operator
    c = (a++, b++); // c = 2 (int), a = 2 (int), b = 3 (int)

    //9. Sizeof Operator:-
    
    // Sizeof operator
    int size = sizeof(a); // size = 4 (int) (typically 4 bytes for int)
    
    //10. Pointer Operators:-
    int n = 10;
    int *ptr;

    // Address-of operator
    ptr = &n; // ptr holds the address of a (pointer to int)

    // Dereference operator
    int value = *ptr; // value = 10 (int)
    
    //11. Type Casting Operator:-
   // int a = 10;
    //float b = 5.5;

    // Type casting operator
    int sum = a + (int)b; // sum = 15 (int)
    
    //12. Member Access Operators (Structure):-
   /* struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1;

    // Member access operator
    p1.x = 10; // p1.x = 10 (int)
    p1.y = 20; // p1.y = 20 (int)

    // Pointer to structure and arrow operator
    struct Point *ptr = &p1;
    int x = ptr->x; // x = 10 (int)
    int y = ptr->y; // y = 20 (int)

    return 0;*/
}

}

