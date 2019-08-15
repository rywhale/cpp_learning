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
* `+` addition
* `-` subtraction
* `*` multiplication
* `/` division
* `%` modulus (returns div remainder)
* `++` increment by 1
* `--` decrement by one

### Assignment Operators
 |Operator|Example|Same As|
|--- |--- |--- |
|=|x = 5|x = 5|
|+=|x += 3|x = x + 3|
|-=|x -= 3|x = x - 3|
|*=|x *= 3|x = x * 3|
|/=|x /= 3|x = x / 3|
|%=|x %= 3|x = x % 3|
|&=|x &= 3|x = x & 3|
|`|=`|`x |= 3`|`x = x | 3`|
|^=|x ^= 3|x = x ^ 3|
|>>=|x >>= 3|x = x >> 3|
|<<=|x <<= 3|x = x << 3|

### Comparison Operators
| Operator | Name | Description | Example |  |
|----------|-------------|---------------------------------------------------------|--------------------|---|
| &&  | Logical and | Returns true if both statements are true | x < 5 &&  x < 10 |  |
| `||`  | Logical or | Returns true if one of the statements is true | x < 5 || x < 4 |  |
| ! | Logical not | Reverse the result, returns false if the result is true | !(x < 5 && x < 10) |  |
## Strings
* Include the string library
   ```
   #include <string>
   ```
* Use the `+` operator to concatenate 
* Get length 
   ```
   mystring.length();
   ```
* Index characters with `[]`
   ```
   mystring[0];
   ```
* `cin` only records input until whitespace
   * use `getline()` to store input
   ```
   string myName;
   cout << "Type your name: ";
   getline(cin, myName);
   cout << "Your name is: " << fullName; 
   ```
## Math
* `max(x,y)`
* `min(x,y)`
* other functions can be found in `<cmath>` 
   ```
   #include <cmath>

   cout << sqrt(64);
   cout << round(2.6);
   ```
* Lots of funs in `<cmath>`
## Booleans
* `true`  = 1
* `false` = 0
## If/Else
* `if`, `else`, `else if`
   ```
   if (condition) {
      // block of code to be executed if the condition is true
   }
   ```
* Single line if/else
   ```
   // Pseudo
   variable = (condition) ? expressionTrue : expressionFalse;
   ```

   ```
   int time = 20;
   string result = (time < 18) ? "Good day." : "Good evening.";
   cout << result;
   ```
## Switch
   ```
   switch(expression) {
      case x:
         // code block
         break;
      case y:
         // code block
         break;
      default:
         // code block
   }
   ```
* e.g. with days of week
   ```
   int day = 4;
   switch (day) {
      case 1:
         cout << "Monday";
         break;
      case 2:
         cout << "Tuesday";
         break;
      case 3:
         cout << "Wednesday";
         break;
      case 4:
         cout << "Thursday";
         break;
      case 5:
         cout << "Friday";
         break;
      case 6:
         cout << "Saturday";
         break;
      case 7:
         cout << "Sunday";
         break;
   }
   // Outputs "Thursday" (day 4)
   ```
## Loops
### While
* Regular
   ```
   int i = 0;
   while (i < 5) {
      cout << i << "\n";
      i++;
   }
   ```
* `do/while`
   * `while` occurs after `do` meaning `do` always gets called first
   * used to ensure the loop executes at least once
   * an example is needing to retry something
   ```
   do
   {
      try to access resource...
      put up message box with retry option

   } while (user says retry);
   ```
### For
* Pretty standard
* Don't forget to `++` !
### Break
* Used to 'jump out' current loop/switch
### Continue
* Breaks one iteration and continues to the next
## Arrays
* To declare an array, specify the type, name then `[length]`
   ```
   string cars[4] = {"Car1", "Car2", "Car3", "Car4"};
   int myNum[3] = {1,2,3};
   ```
* 0-indexed
* Mutable
   ```
   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
   cars[0] = "Opel";
   cout << cars[0];
   ```
* Looping through
   ```
   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
   for(int i = 0; i < 4; i++) {
      cout << cars[i] << "\n";
   }
   ```
* You can omit size but then the array will be limited to the number of elements you provide
   ```
   string mycars[] = {"Car1", "Car2"};
   ```
* Alternatively, you can specify an array larger than the number of elements provided, creating 'placeholder'
   ```
   string mycars[5] = {"Car1", "Car2"};

   // Or without specifying elements at all
   string cars[5];
   string cars[0] = {"Volvo"};
   string cars[1] = {"BMW"};
   ```
## References
### Creating
* Created with `&` operator, used to 'reference' existing variable
   ```
   string food = "Pizza";
   string &meal = food;
   ```
### Memory Address
* This operator can also be used to get the memory address of the variable
   ```
   string food = "Pizza";

   cout << &food; // Outputs 0x6dfed4
   ```
## Pointers
### Creating
* Points to a data type (like `int`) of the same type
* Created with `*`, assigned the address of the variable you're working with
   ```
   string food = "Pizza";
   string* ptr = &food;

   // Output the value of food (Pizza)
   cout << food << "\n";

   // Output the memory address of food (0x6dfed4)
   cout << &food << "\n";

   // Output the memory address of food with the pointer (0x6dfed4)
   cout << ptr << "\n";
   ```
* the type of pointer (e.g. `string` above) must match the type of variable
* you can _dereference_ a pointer to get the value of the variable
   ```
   string food = "Pizza";
   string* ptr = &food;
   cout << ptr << "\n";
   cout << *ptr << "\n";
   ```
* `*` operator
   * used in declaration = creates pointer variable
   * not used in declaration = dereference operator
### Modifying Pointer Value
* Changing the pointer's value also changes the original variable
   ```
   string food = "Pizza";
   string* ptr = &food;

   cout << food + "\n";

   *ptr = "Not Pizza";
   
   cout << food + "\n";
   ```

# Functions
## Creation
* Some pre-defined functions like `main()`
* Create your own with
   ```
   void myFunction() {
      //code
   }
   ```
* `void` means the function doesn't have a return value
## Calling
```
void myFunction() = {

}

int main() {
   myFunction();
   return 0;
}
```
* User-defined functions must be declared before `main()`
* One way to get around this is to declare an "empty" function before `main()`
   ```
   void myFunction();

   int main() {
      myFunction();
      return 0;
   }

   void myFunction() {
      // Do stuff
   }

   ```
## Parameters
* Pretty simple
* Remember to declare type as well as name
* If not using `void`, function declaration should include return type 
   ```
   int Addem(int x, int y){
      return x + y
   }
   ```
## Overloading
* The basic idea is to use the same function, with different parameters/types
   ```
   int addem(int x, int y) {
      return x + y;
   }

   float addem(float x, float y){
      return x + y;
   }
   ```

# Classes
## Objects/Classes
* C++ is OOP
* Car example
   * Car is **object**
   * has **attributes** like weight and colour
   * and **methods** such as drive/brake
   ```
   // Create class with two attributes
   class myClass {
      public:
         int myNum;
         string myString;
   };

   // Create object of above class
   int main() {
      myClass mynewObj;
      mynewObj.myNum = 15;
      mynewObj.myString = "Hello";

      return 0;
   }
   ```
## Methods
* **functions** that belong to a class
* Two ways to define
   * inside class definition
   ```
   class myClass {
      public:
         void myMethod(){
            cout << "Hey bro";
         }
   };

   int main() {
      myClass mynewObj;
      mynewObj.myMethod();
      return 0 ;
   }
   ```
   * outside class definition
   ```
   class myClass {
      public:
         void myMethod();
   };

   void myClass::myMethod() {
      cout << "Hey bro";
   }

   int main() {
      myClass mynewObj;
      mynewObj.myMethod();
      return 0;
   }
   ```
## Constructors
* A constructor is a class method that is called when an object of that class is created
   ```
   class myClass {
      public:
         myClass() {
            cout << "Hey bro";
         }
   };

   int main() {
      myClass mynewObj;
      return 0;
   }
   ```
* constructor always has same name as class
* constructor is public by default
* you can also include parameters for constructors
   ```
   class Car {
      public:
         string brand; // attribute
         string model; // attribute
         int year; // attribute
         Car(string x, string y, int z) { //constructor
            brand = x;
            model = y;
            year = z;
         }
   };

   int main() {
      Car carObj1("BMW", "X5", 1999);
      Car carObj2("Ford", "Mustang", 1969);
      return 0;
   }
   ```
* like functions, constructors can be declared inside the class and then defined later using the `::` operator
## Access Specifiers
* `public` members accessible from outside class
* `private` members cannot be accessed/viewed from outside class
* `protected` members cannot be accessed from outside class but can be accessed in inherited classes
* by default, all members of a class = `private`
* considered good practice to set attributes as `private` to avoid accidentally changing things
## Encapsulation 
* hide the 'sensitive' stuff from users
* to access private attributes, use public 'getter/setter'
   ```
   #include <iostream>
   using namespace std;

   class Employee {
      private:
         int salary;

      public:
         void setSalary(int s){
            salary = s;
         }
         int get salary() {
            return salary;
         }
   };

   int main() {
      Employee myObj;
      myObj.setSalary(50000);
      cout << myObj.getSalary();
      return 0;
   }
   ```
## Inheritance
* passing on attributes/methods from one class to another
* Two categories
   * derived (child) - class that inherits from another
   * base (parent) - class being inherited from
   ```
   // Base class
   class Vehicle {
   public: 
      string brand = "Ford";
      void honk() {
         cout << "Tuut, tuut! \n" ;
      }
   };

   // Derived class
   class Car: public Vehicle {
   public: 
      string model = "Mustang";
   };

   int main() {
   Car myCar;
   myCar.honk();
   cout << myCar.brand + " " + myCar.model;
   return 0;
   }
   ```
* Can inherit from multiple classes by comma separating
   ```
   // Base class
   class MyClass {
   public: 
      void myFunction() {
         cout << "Some content in parent class." ;
      }
   };

   // Another base class
   class MyOtherClass {
   public: 
      void myOtherFunction() {
         cout << "Some content in another class." ;
      }
   };

   // Derived class 
   class MyChildClass: public MyClass, public MyOtherClass {
   };
   ```
* note that the `protected` access specifier only allows descendants to access the attribute