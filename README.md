# Exp-13-Overloading_polymorphism_in_cpp

# OVERLOADING IN CPP

## Aim  
I studied and implemented types of Overloading.

## Tools Used: 
I used VS Code & Programiz online compiler.

## Theory: 
### Overloading in Cpp  
Overloading in C++ is a feature that allows the same function name or operator to be used with different meanings based on the input parameters. It improves code readability and reusability. There are mainly three types: function overloading, constructor overloading, and operator overloading. In function and constructor overloading, multiple functions or constructors with the same name are defined but with different parameter lists. Operator overloading allows redefining operators like +, -, == for user-defined classes. Overloading makes programs more intuitive and closer to natural usage.

## Function Overloading
Function overloading is a feature where two or more functions have the same name but differ in the number or type of parameters. The compiler decides which function to call based on the arguments passed. This helps achieve compile-time polymorphism and improves code readability.

returnType functionName(parameter_list1);  
returnType functionName(parameter_list2);

## Constructor Overloading
Constructor overloading allows a class to have multiple constructors with the same name but different parameter lists. The compiler selects the appropriate constructor based on the arguments passed during object creation. It allows objects to be initialized in different ways, improving flexibility and code reusability.

class ClassName {
public:
    ClassName();                  // Default constructor
    ClassName(int x);             // Parameterized constructor
    ClassName(int x, int y);      // Overloaded constructor
};


## Operator Overloading
Operator overloading allows predefined operators like +, -, *, ==, etc., to be redefined and used with user-defined data types (classes/objects). It gives operators new meanings while keeping their original syntax, making code more intuitive. Operator overloading is a type of compile-time polymorphism.

returnType operator op (parameter_list) {
    // operator logic
}

## Program-1: Constructor Overloading (1st Code)

This program demonstrates constructor overloading in C++, where multiple constructors are defined with the same name but different parameter lists. One constructor adds two integers, another adds two floats, and the third adds three integers. The compiler decides which constructor to invoke based on the arguments passed.

# Algorithm
Start the program.
Define a class Add with three constructors: one that takes two integers and prints their sum, one that takes two floats and prints their sum, and one that takes three integers and prints their sum.
In the main() function: create object a1 with two integer arguments (calls integer constructor), object a2 with two float arguments (calls float constructor), and object a3 with three integer arguments (calls 3-parameter constructor).
Display the results of each constructor call.
End the program.

## Program-2: Constructor Overloading (2nd Code)

This program demonstrates constructor overloading using a class Interest. Two constructors are defined: one to calculate simple interest using integer inputs, and another to calculate compound interest using double inputs.

# Algorithm
Start the program.
Define a class Interest with two constructors:

Constructor 1: Takes three integers (p, r, n) and calculates SI = (prn)/100.

Constructor 2: Takes two doubles and an integer (p, r, n) and calculates CI = p * (1 + r/100)^n - p.
In main(), create object i1 with arguments (20000.123, 3.5, 2) → calls compound interest constructor.
The constructor computes the interest and displays the result.
End the program.

## Program-3: Function Overloading

This program demonstrates function overloading where the same function name Concatenate is defined with different parameter types. One version takes two strings, the other takes two characters. The compiler chooses based on the arguments passed.

# Algorithm
Start the program.
Define a class Concat with two functions named Concatenate:

Function 1: Takes two string arguments and returns their concatenation.

Function 2: Takes two char arguments, converts them to a string, and returns the result.
In main(), create object c of class Concat.
Call c.Concatenate("Nishka", "Ranadive") → string version.
Call c.Concatenate('N', 'R') → char version.
Display results of both calls.
End the program.

## Program-4: Operator Overloading (1st Code)

This program demonstrates operator overloading where the * operator is redefined for class Box. The overloaded operator compares volumes of two Box objects and returns true if the first box is larger.

# Algorithm
Start the program.
Define a class Box with three data members: length, width, height.
Create a parameterized constructor to initialize dimensions.
Define volume() to calculate box volume.
Overload * operator to compare volumes of two Box objects.
In main(), create two Box objects b1 and b2.
Display volumes using volume().
Use * operator to compare and display which box is bigger.
End the program.

## Program-5: Operator Overloading (2nd Code)

This program demonstrates operator overloading where the + operator is redefined for class Number. The overloaded + operator adds the values of two Number objects and returns a new Number object.

# Algorithm
Start the program.
Define a class Number with a data member value.
Create a parameterized constructor to initialize value.
Overload + operator to add two Number objects and return a new Number object.
Define display() to print Number value.
In main(), create two Number objects n1 and n2.
Use + operator to add n1 and n2 into n3.
Display values of n1, n2, and n3.
End the program.


## Conclusion

All five programs demonstrate polymorphism in C++ using overloading. Programs 1 and 2 show constructor overloading, allowing different ways to initialize objects. Program 3 illustrates function overloading, enabling one function name to work with different types. Programs 4 and 5 demonstrate operator overloading, letting user-defined objects use operators naturally. Overall, overloading improves flexibility, code reusability, and intuitive syntax. It also showcases compile-time polymorphism, where the compiler decides which function, constructor, or operator to invoke, making C++ programs efficient, organized, and maintainable.
