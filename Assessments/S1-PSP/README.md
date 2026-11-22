# S1 - Programming Skills Portfolio

The programming skills portfolio assessment is designed to assess your understanding of the fundamental programming concepts covered in the module. It consists of two main components: a set of coding challenge and multiple-choice quizzes.

### Coding Challenges
You will be given three distinct coding challenges that will test your ability to apply data types, variables, selection statements, iteration, arrays and functions to solve practical programming problems. The challenges will progressively build in complexity, requiring the integration of multiple concepts. The challenges can be found in Programming Skills Portfolio folder of your CodeLab I GitHub repository (located inside the Assessment folder).

When writing your solutions you should focus on implementing the appropriate techniques from the concepts taught in the module. However, you **must not** use features or techniques that have not been introduced in class, as doing so may result in a mark penalty or failure of the assessment. Code for these challenges should be saved to this folder in your CodeLab I GitHub repository. This repository should be kept neat and organised with clearly named folders for each challenge and effective use of commits when working on your solutions (e.g. regular commits on a per task basis with clear and descriptive messages).

### Written Code Explanations
You must provide a written explanation for each challenge of approximately 200 words. These explanations will be completed during a scheduled class session that will take place after the coding challenges have been submitted.

The explanations should address key questions about your approach to solving each problem, including your design decisions, implementation choices, and any challenges encountered during development. The specific questions will be provided during the class session.

During the session, you will have access to both the module materials and your submitted code to support the preparation of your explanations. Completion of these written explanations is a mandatory component of the assessment. Failure to complete this element to a satisfactory standard (at least 40%) will result in a failing grade for the assessment.
### Multiple Choice Quizzes
In addition to the coding challenges you are required to complete five multiple choice quizzes. Each quiz focuses on a specific set of foundational topics from the module. These quizzes will be released throughout the module, and you will have one week to complete each one from its release date.

## Deadlines
There are several deadlines for the different components of the programming skills portfolio assessment. These are detailed below:

### Coding Challenges
**2 December, 11:59**

### Written Code Explanations
**8 December, In class**

### Multiple Choice Quizzes
The deadline for each quiz is **5pm** on the dates stated below. Each quiz will be accessible 1 week before the deadline

- Quiz 1 - Data Types and Variables, **16th Oct**
- Quiz 2 - Selection Statements, **30th Oct**
- Quiz 3 - Iteration Statements, **13th Nov**
- Quiz 4 - Arrays, **20th Nov**
- Quiz 5 - Functions, **27th Nov**

## Marking

The programming skills portfolio assessment will be evaluated against the following criteria.

- **Technical Implementation (50%):** Successful selection and implementation of appropriate programming techniques to solve the coding challenges and adherence to coding conventions.
- **Code Explanation (20%):** Clear explanation of the problem-solving approach taken to solving each challenge and justification for the choice of programming techniques.
- **Repository Presentation (10%):** Organised repository and effective use of version control
- **Multiple Choice Quizzes (20%):** Performance across the multiple choice quizzes


<br/>

**Please refer to Ultra for the full brief including submission instructions and marking criteria descriptors.**

<br>

# Exercises

## 1. Internet Speed Classification

### Task

The table below contains internet download speed ranges (in Mbps) and their descriptors. Write a program that reads a download speed from the user and displays the appropriate descriptor as part of a meaningful message.

For example, if the user enters 85, then your program should indicate that a download speed of 85 Mbps is considered to be Fast Broadband.

| Download Speed (Mbps) | Descriptor |
|-----------------------|------------|
| Less than 5 | Very Slow |
| 5 to less than 25 | Basic Broadband |
| 25 to less than 50 | Standard Broadband |
| 50 to less than 100 | Fast Broadband |
| 100 to less than 500 | Superfast |
| 500 to less than 1000 | Ultrafast |
| 1000 or more | Gigabit+ |

### Key Concepts
Data types, variables, selection statements (if or switch)

---

## 2. Pace Tracking

### Task

Jess runs 1 mile every day and likes to keep track of her pace times. Design a program that helps Jess analyse her performance over a week. The program should:

- Prompt the user to enter Jess's pace time (e.g 8.21) for each day of the week and store the values in an array.
- Calculate and display the average pace for the week
- Determine how many days Jess completed the mile in less than 7 minutes 30 seconds (7.30) and display an appropriate message
- Identify and display the fastest pace time recorded during the week.

### Key Concepts

Iteration (for or while), Arrays

---


## 3. Reward Points Tracker

### Task

Create a program that simulates a customer reward points system. The program should maintain a running total of reward points and allow the user to manage their points through a menu-driven interface.

The program should:

- Start with an initial number of reward points.

- Present the user with a menu of options:

```text
1: Earn Points
2: Redeem Points
3: View Points Balance
4: Exit
```

- You should implement each operation using a separate function:

  - `viewMenu()` - Prints the menu of options.
  - `earnPoints()` - Adds points to the balance.
  - `redeemPoints()` - Subtracts points from the balance.
  - `displayPoints()` - Displays the current points balance.

- Design your functions to make appropriate use of parameters and return values where possible.
- Allow the user to repeatedly display and select options from the menu until they choose to exit the program.
- Display appropriate messages when points are earned, redeemed, or when the current balance is displayed.



### Key Concepts

Functions, Iteration
