# EXPERIMENT 5: Decision-Making Statements in C++

## Aim
- To study and implement decision-making statements in C++ using `if`, `if...else`, `else if`, and `switch`.
- To perform condition-based logic and branching.

## Apparatus
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Decision-Making in C++
Decision-making statements allow a program to execute different blocks of code based on certain conditions. These statements form the backbone of control flow in C++.

Types of Decision-Making Statements:
- `if` Statement  
- `if...else` Statement  
- `else if` Ladder  
- `switch` Statement

These are used for logical comparisons, branching, and handling multiple scenarios.

---

## Program 1: Check Whether a Number is Even or Odd

### Algorithm
1. Start  
2. Declare an integer variable `num`  
3. Read value of `num` from the user  
4. If `num % 2 == 0`, print "Even"  
5. Else, print "Odd"  
6. End

---

## Program 2: Check Whether a Character is a Vowel or Consonant

### Algorithm
1. Start  
2. Declare a character variable `ch`  
3. Read `ch` from the user  
4. Convert `ch` to lowercase (if needed)  
5. Use `if...else` or `switch` to check:  
   - If `ch` is `a`, `e`, `i`, `o`, or `u`, print "Vowel"  
   - Else, print "Consonant"  
6. End

---

## Program 3: Find the Largest Number Among Three Numbers

### Algorithm
1. Start  
2. Declare three variables `a`, `b`, and `c`  
3. Read the values from the user  
4. Use conditional logic:  
   - If `a > b` and `a > c`, print "a is largest"  
   - Else if `b > c`, print "b is largest"  
   - Else, print "c is largest"  
5. End

---

## Program 4: Traffic Lights Using `switch` Statement

### Algorithm
1. Start  
2. Declare a character or string variable `color`  
3. Read the traffic light color from the user  
4. Use a `switch` statement:  
   - Case "Red": Print "Stop"  
   - Case "Yellow": Print "Get Ready"  
   - Case "Green": Print "Go"  
   - Default: Print "Invalid Color"  
5. End

---

## Functions

- Use `if...else` to perform binary decisions.
- Use nested or chained `else if` for multiple conditions.
- Use `switch` for efficient selection among multiple constant values.
- Combine logical operators to build complex condition checks.

## Conclusion
Through this lab, I learned how to use various decision-making statements in C++. I practiced simple checks like even/odd and vowels, and implemented more complex conditions like comparing three numbers. Using the `switch` statement for traffic light logic helped me understand clean branching for fixed choices.
