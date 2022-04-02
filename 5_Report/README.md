# Scientific Calculator Report

## Introduction 

#### This scientific calculator allows user to calculate basic and advance operations, they are addition, subtraction, factorial, modulus, log, square root etc. 
#### As per the requirement of user they  can select the desired number to perform the operation . For example, to perform addition we enter 1 as a command and addition operation will work .

## Research 

#### From different websites and articles i have read about data types , constanats , loopings , if-else ,switch-case , different types of operators and its significance. 

#### Reference links
#### https://www.tutorialspoint.com/cprogramming/index.htm
#### https://www.programiz.com/c-programming
#### https://www.knowprogram.com/c-programming/simple-calculator-program-c/

## Project SWOT analysis

### STRENGTHS

#### It is very user-friendly and allows to solve complicated problems quickly in an efficient manner. Students can focus more on the concept and understanding of the problem rather than spending time in simple calculations which can be performed by calculator.

### WEAKNESSES

#### It does not all include all the operations 

### OPPURTUNITIES

#### The tech-based market has a huge oppurtunities in capturing the youth market . As a working professional in any field , Calculator saves time , and increase efficiency in work place .

### THREATS

###  The growth may be affected due to external factors or slow improvement in technology with the dynamic world.




# Design

## Behavioural Diagram
 ![Behavioural flowchart](https://user-images.githubusercontent.com/81865735/161370208-8fb13b13-f841-44d4-8dff-11e3ff978fdd.jpg)


## Sequence Execution Flow Diagram
![Seq_diag](https://user-images.githubusercontent.com/81865735/161370224-ae1a073e-0f31-4c81-a118-ae00c76160f1.jpg)


## Structural Diagram
![compo_diag](https://user-images.githubusercontent.com/81865735/161371164-f528c239-22d9-4591-9404-6b037bf7733d.jpg)



# TEST PLAN:

## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if code works as per the given test cases.              |  Valid I/P  |Valid O/P|Valid O/P|Scenario based |
|  H_02       |Check for boundary conditions                                 |  Invalid I/P|Program termination|Program termination |Boundary based    |
|  H_03       |Check for invalid choice                                      |  Invalid choice I/P|Wrong choice.Please choose again|Wrong choice.Please choose again|Scenario based    |
|  H_04       |Check for valid choice                                        |  Valid I/P|Valid O/P|Valid O/P|Scenario based |



## Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |                         Addition                             |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing |
|  L_02       |                 Subtraction                                  |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing   |
|  L_03       |               Multiplication                                 |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing    |
|  L_03       |                  Division                                    | Float value |Valid o/p|Valid o/p|Scenario based unit testing    |
|  L_03       |                  Square                                      |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing    |
|  L_03       |Square root                                                   |  Float value|Valid o/p|Valid o/p|Scenario based unit testing     |
|  L_03       |Factorial                                                     |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing    |
|  L_03       |Power                                                         |  Float value|Valid o/p|Valid o/p|Scenario based unit testing    |
|  L_03       |Exponential                                                   |  Float value|Valid o/p|Valid o/p|Scenario based unit testing     |
|  L_03       |Logarithm                                                     |  Float value|Valid o/p|Valid o/p|Scenario based unit testing     |
|  L_03       |Modulus                                                       |  Integer value|Valid o/p|Valid o/p|Scenario based unit testing   |
             

# Challenges Faced and How Was It Overcome

1. `Issue while running Makefile` - make sure you have included all the files with .o extension and also include correct path for unity and test file
2. `Issue with workflows` - Check you folder structure where all the unity and makefile is present and include the path correctly
3. `Isuue with workflows(Valgrind)`- Here the chances are that you will get some error because of few missing updates . so you can try with this command which i   have mentioned below
  ## run: |
        sudo apt-get update
        sudo apt-get -y install valgrind --fix-missing
        sudo apt-get -y install libcunit1 libcunit1-doc libcunit1-dev --fix-missing


# To run the makefile use following commands:

## make clean 
        To clear the previously existing .o files
## make build 
        To build the code
## make run 
        To run the code and check for testcases
        
 ## make run-code
        To run the code 
        
 ## make run-test
        To check for testcases   

