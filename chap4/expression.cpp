#include <iostream>


int
main(int argc, char *argv[])
{
    /*
     The left-shift operator (the << operator) inserts 0-valued bits on the right. The
     behavior of the right-shift operator (the >> operator) depends on the type of the
     left-hand operand: If that operand is unsigned, then the operator inserts 0-valued
     bits on the left; if it is a signed type, the result is implementation defined—either
     copies of the sign bit or 0-valued bits are inserted on the left
     */
/*
As an example of using the bitwise operators let’s assume a teacher has 30 students
in a class. Each week the class is given a pass/fail quiz. We’ll track the results of each
quiz using one bit per student to represent the pass or fail grade on a given test. We
might represent each quiz in an unsigned integral value:
 
Click here to view code image
 
 
We define quiz1 as an unsigned long. Thus, quiz1 will have at least 32 bits on
any machine. We explicitly initialize quiz1 to ensure that the bits start out with well-
defined values.
*/

    unsigned long quiz1 = 0; // we'll use this value as a collection of bits
    quiz1 |= 1UL << 27; //set the 27 passed


    //Type Conversions
    /* 
    When Implicit Conversions Occur
 
                The compiler automatically converts operands in the following circumstances:
                        • In most expressions, values of integral types smaller than int are first
                          promoted to an appropriate larger integral type.
                        • In conditions, nonbool expressions are converted to bool.
                        • In initializations, the initializer is converted to the type of the variable; in
                          assignments, the right-hand operand is converted to the type of the left-hand.
                        • In arithmetic and relational expressions with operands of mixed types, the types
                          are converted to a common type.
                        • As we’ll see in Chapter 6, conversions also happen during function calls.
   */ 
    
    //Integer promotions
    //convert the small integer types to a larger integer type.
    //

}
