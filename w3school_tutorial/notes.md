# Intro + Fundamentals 
[Link to W3 tutorial](https://www.w3schools.com/cpp)
## Background/Setup
* C++ is a compiled language
* On Windows, use `g++ scriptname.cpp` to compile
    * requires installation of C++ compiler
    * use `g++ outputname.exe scriptname.cpp` to specify the name/location for compiled executable
* Entry point for C++ file is the `main()` function
    ```
    #include <iostream>
    int main() {
       return 0;
    }
    ```

## Syntax
* Breaking down hello world example
   ```
   #include <iostream>
   using namespace std;

   int main() {
      cout << "Hello World!";
      return 0;
   }
   ```
* `#include <iostream>` is a **header file library** that exposes input/output objects like `cout`
* `using namespace std` allows use of objects/variables from the standard library
   * you can avoid loading this namespace by referencing the object by path
   ```
   std::cout << "Hello World";
   ```
* `int main()` is a function
* `cout` is an object used to output/print text
* Every C statement ends with a `;`
* Compiler ignores white space

## Output
* use `cout` + `<<` operator to print text
* can have as many `cout` statements as you'd like
   ```
   #include <iostream>
   using namespace std;

   int main() {
      cout << "Hello World!";
      cout << "I am learning C++";
      return 0;
   }
   ```
* use `\n` to specify newline 

## Comments
* Single-line with `//`
* Multiline with `/* comment goes in here */`

## Variables
### Types
* int - integers
* double - floats
* char - single characters, single quotes
* string - text, multiple characters, double quotes
* bool - true/false
   ```
   int myNum = 5;               // Integer (whole number without decimals)
   double myFloatNum = 5.99;    // Floating point number (with decimals)
   char myLetter = 'D';         // Character
   string myText = "Hello";     // String (text)
   bool myBoolean = true;       // Boolean (true or false)
   ```

### Declaring Variables
* `type variable = value;`
* `int myNum = 15`
* can also declare without assigning `int myNum`
* you can make values unchangeable/read-only with `const`
   ```
   const int myNum = 15;
   ```
* declare multiple variables of the same type
   ```
   int a = 5, b = 3;
   ```

### Display Variables
* You can chain together output with the `<<` operator
   ```
   int myAge = 35;
   cout << "I am" << myAge << " years old.";
   ```

### Addition
   ```
   int x = 5;
   int y = 6;
   int sum = x + y;
   ```

### Identifiers 
* All C++ variables must have unique names (called 'identifiers')
* Naming rules:
   * letters/digits/underscores
   * must begin with letter/underscore
   * case sensitive
   * no whitespace
   * no recycling keywords (e.g. `int`)



## User Input
* Reverse the pipe from `cout` and use `cin` instead
   ```
   int x; 
   cout << "Type a number: "; // Type a number and press enter
   cin >> x; // Get user input from the keyboard
   cout << "Your number is: " << x; // Display the input value
   ```

## Data Types
* Data type determine size/type of information the variable stores

| Data Type | Size | Description |
| --------- |:---------:| ---------:|
| int | 4 bytes | Stores whole numbers, without decimals |
| float | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits |
| double |	8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |
| Boolean |	1 byte | Stores true or false values |
| char |	1 byte| Stores a single character/letter/number, or ASCII values |

* Float vs Double: double can hold more decimal points
* Floats and doubles can also be specified in scientific notation
   ```
   float f1 = 32e3;
   double d1 = 12E4;
   ```
* Booleans can output `0` or `1` for `false` and `true`
* Char is either a single quoted character
   ```
   char a = 'a';
   ```
   or by ASCII value
   ```
   char a = 65;
   ```
* String are not in the `std` library, must include an additional header file in source code
   ```
   #include <string>
   ```

## Operators