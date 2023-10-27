# datatypes_and_variables
AIM

Data-Types-in-C++




THEORY 

1)Primitive Data Types: These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. Primitive data types available in C++ are:
-Integer
-Character
-Boolean
-Floating Point
-Double Floating Point
-Valueless or Void
-Wide Character
2)Derived Data Types: Derived data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types. These can be of four types namely:
-Function
-Array
-Pointer
-Reference
3)Abstract or User-Defined Data Types: Abstract or User-Defined data types are defined by the user itself. Like, defining a class in C++ or a structure. C++ provides the following user-defined datatypes:
-Class
-Structure
-Union
-Enumeration
-Typedef defined Datatype


ALGORITHM

Data Type is the kind or form of a variable which is being used throughout the program. It defines that the particular variable will assign the values of the given data type only. Data Structure is the collection of different kinds of data.

Integer Types:

int: Represents signed integers (usually 4 bytes).
short: Represents short integers (usually 2 bytes).
long: Represents long integers (size varies by system).
long long: Represents very long integers (usually 8 bytes).
unsigned int: Represents unsigned integers (no negative values).
char: Represents a single character (usually 1 byte).
bool: Represents a boolean value (either true or false).


Floating-Point Types:
float: Represents single-precision floating-point numbers.
double: Represents double-precision floating-point numbers (more precision than float).
long double: Represents extended-precision floating-point numbers (size varies by system).


Other Built-in Types:
void: Represents the absence of a type. Used in function return types and pointers.
wchar_t: Represents wide characters (used for internationalization).
char16_t and char32_t: Represents characters of specific sizes for Unicode support.



User-Defined Types:
struct: Defines a composite data type containing variables (members).
class: Defines a composite data type with additional features like encapsulation and access control.
enum: Defines an enumeration type with named values.



AIM

Number Camparision



THEORY

-Equality (==): Compares whether two values are equal.

-Inequality (!=): Compares whether two values are not equal.

-Greater Than (>): Compares whether one value is greater than another.

-Less Than (<): Compares whether one value is less than another.

-Greater Than or Equal To (>=): Compares whether one value is greater than or equal to another.

-Less Than or Equal To (<=): Compares whether one value is less than or equal to another.

-Logical Operators:

-Logical operators, such as && (logical AND) and || (logical OR), can be used to combine multiple comparison operations in complex conditions. int age = 25; if (age >= 18 && age <= 60) { // Code to execute if age is between 18 and 60

}

-Conditional Statements:
Conditional statements, like if, else if, and else, are used to execute different code blocks based on the result of comparison operations. int score = 85; if (score >= 90) { // Code for A grade } else if (score >= 80) { // Code for B grade } else { // Code for C grade or lower } In summary, number comparison in C++ involves using comparison operators to evaluate and compare numeric values. These comparisons are essential for making decisions and controlling program flow, and they are used extensively in various programming scenarios.





ALGORITHM
1.Include Headers: Include necessary headers, such as , at the beginning of your program.

2.Declare and Initialize Variables: Declare and initialize the numeric variables you want to compare. In this example, we have num1 and num2.

3.Compare Numbers Using if-else Statements:
The if statement is used to test whether num1 is equal to num2.
The else if statement checks if num1 is less than num2.
The else statement handles the case where num1 is greater than num2.

4.Execute Code Blocks: Depending on the comparison results, the appropriate code block within the if or else if sections is executed.

5.Continue the Program: The program continues with the rest of its logic after the if-else stat
