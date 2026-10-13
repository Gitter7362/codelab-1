# Chapter 1 Exercises

Use these exercises to put into practice the knowledge you have gained from chapter 1. You can save your solutions to the exercises to this repository and it is recommended that for each exercise you create a _**new project**_ with the name of the exercise and save it to the relevant exercise folder for the chapter you are working on. Once you have completed your solution you should make sure you commit and push the code to your remote repository on GitHub.

---

### 1. Coding is Cool

Fill in the blanks in the code below so the program outputs "Coding is Cool" to the console.

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
     cout << "coding is cool" << endl;
}
```
&nbsp;
&nbsp;   

### 2. Data Types

Add the correct data types to the code below to complete the variables.

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int firstNumber = 1;
    bool iCanCode = true;
    char hopefulGrade = 'a';
    double myDecimal = 1.0;
    char minimalSentance = "y";
    int keyMash = 13213123;
    float mysteryDataType = 5.6f; //Use Google to work this out

    return 0;
}
```
&nbsp;
&nbsp;

### 3. Untidy Code

Tidy up the following code to make it neater and easier to read.

```C++
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "This is untidy code." <<endl;
    cout <<  "I'm surprised it works." <<endl;

    int   number =   6;
    cout << "It has" <<
    number << "lines of code  - "  <<endl;
    cout << "each more hideous than the last." <<endl;
    cout << "You probably should add some line breaks in the text too" << endl;

    return 0;

}
```
&nbsp;
&nbsp;


### 4. St Ives

#### Part 1

The idea here is to translate the following famous riddle to C++. Each number in the riddle (indicated in bold) needs to be stored as a variable that must be declared and initialised at the beginning of the program. Then you should use output statements to print the riddle to the console making use of the variables to output the numbers.


>*As I was going to St. Ives, I met __1__ man with __7__ wives  
>Each wife had __7__ sacks, each sack had __7__ cats, each cat had __7__ kits  
>Kits, cats, sacks and wives,  
>How many were going to St. Ives?*

int main(){
    int num1 = 1;
    int num2 = 7;
    cout << "as i was going to St. Ives, I met " << num1 << "man with " << num2 << "wives" <<endl;
    cout << "each wife had" << num2 << "sacks, each sack had " << num2 << " cats, each cat had " << num2 << "kits, cats, sacks wives," <<endl;
    cout << "how many were going to St. Ives? " <<endl;

    return 0;
}



#### Part 2

So we know that the answer to this riddle is just 1. The only person going to St. Ives is the narrator. But how many Kits, Cats, Sacks and Wives did the narrator meet?

Use your variables (and perhaps create new ones) to calculate and print the total number of ‘items’ the man met whilst going to St Ives.

Hint: If each wife had 7 sacks, each containing 7 cats, who each had 7 kits, then the following pseudocode expression calculates the number of kits:

```
Total Kits = 7 (wives) x 7 (sacks) x 7 (cats) x 7 (kits)
```

You will have to write similar mathematical expressions to find the total number of ‘items’ met while to St. Ives.

int main(){
    

}

&nbsp;
&nbsp;

### 5. Simple Sums

Set up a new project and follow the below steps:

- Declare a variable with data type integer. Initialise with a value of 8.
- Declare a variable with data type integer. Initialise with a value of 10.
- Declare a third variable of data type integer that adds the previous variables together.
- Print the value of the sum to the console.

&nbsp;
&nbsp;

### 6. Biography

Create a program that prints your name, hometown and age to the console. The program has the following constraints:

- Each item should be stored using a variable of an appropriate data type.
- Each item should be printed on a new line.

#### Advanced requirements
- Have the user input the values for name, hometown and age
- Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix?
- Try entering a string or letter value when asked to enter your age. What happens? Can you provide a fix?

&nbsp;
&nbsp;

### 7. Division Fix

This programme doesn’t calculate the sum as expected. Can you provide a simple fix?

```C++
#include <iostream>
using namespace std;

int main() {
    int numberOne = 50;
    int numberTwo = 7;
    cout << numberOne/numberTwo << endl;

    return 0;
}
```
&nbsp;
&nbsp;


### 8. USB Shopper

A girl heads to a computer shop to buy some USB sticks. She loves USB sticks and wants as many as she can get for £50. They are £6 each.

Write a programme that calculates how many USB sticks she can buy and how many pounds she will have left.

&nbsp;
&nbsp;


### 9. Paint

#### Part 1
Start a new project and add the following code. Translate the comments into appropriate syntax so the program functions

```C++
#include <iostream>
#include <string>
using namespace std;
int main() {
    //consts are variables whose value cannot be modified later
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    // declare integers length, width, and height
    // declare double totalSqFt;
    // declare double paintNeeded;
    // prompt for and read in the length of the room
    // prompt for and read in the width of the room
    // prompt for and read in the height of the room
    // Compute the total square feet to be painted - think about   the dimensions of each wall assuming standard four wall room.
    // Compute the amount of paint needed
    // Print the length, width, and height of the room, the total square feet and number of gallons of paint required
    return 0;
}
```

#### Part 2
Suppose the room has doors and windows that don’t need painting. Ask the user to enter the number of doors and number of windows in the room, and adjust the total square feet to be painted accordingly. Assume that each door is 20 square feet and each window is 15 square feet.

*Part 2 can be added to the same project file as part 1*

&nbsp;
&nbsp;


### 10. Temperature

#### Part 1:

Create a program to convert temperature in Fahrenheit to Celsius

*Fahrenheit to celsius → (n - 32) * 0.5556)*

You should make use of variables such that your program prints to console:

```
"X Fahrenheit is Y in Celsius"
```

Where X is the value you specify (as in an appropriate data type) and Y is the calculated result

#### Part 2:

Enhance your program by having the computer ask the user for the temperature that gets converted.

&nbsp;
&nbsp;


### 11. Circles

Write a program that calculates (and displays) the area (A) and circumference (C) of a circle given its radius (r). The program should get the radius from the user. Make your code as clear as possible by using variables of appropriate data types and comments.

>*A = π r2  
>C = 2π r*

&nbsp;
&nbsp;

