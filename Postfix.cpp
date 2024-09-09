//-------------------------------------------------------------------------------------------------------------
// Group names: Kevin Henderson, 
// Assignment : No.1
// Due date : 9/11/24
// Purpose: this program reads an expression in postfix form, evaluates the expression
// and displays its value
//-----------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <stack>
#include <string>
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::string expression;
    std::cout << "Enter the values of a, b, c, and d: "; //prompts user to give values seperated by a space
    std::cin >> a >> b >> c >> d;
    // infinite loop allows the user to either continue, or terminate the program
    while(true) {
        std::stack<char> stack;
        std::cout << std::endl << "Enter a postfix expression with $ at the end: ";
        std::cin >> expression;
        
        // for loop iterates over each character of the string to implement postfix operations
        for(int i = 0; i < expression.size(); i++) {
            if(expression[i] == 'a' || expression[i] == 'b' || expression[i] == 'c' || expression[i] == 'd'){
                if (expression[i] == 'a'){
                    a = 'a';
                }
                if (expression[i] == 'b') {
                    b = 'b';
                }
                if (expression[i] == 'c') {
                    c = 'c';
                }
                if(expression[i] == 'd') {
                    d = 'd';
                }
                stack.push(expression[i]);
            }
            // add another || statement for "/" (division) if professor says so
            else if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*'){
                if(expression[i] == '+'){
                    // assigns top of stack to top variable then pops that number
                    int top = stack.top();
                    stack.pop();
                   // assigns the new top of stack to bottom variable, then pops
                    int bottom = stack.top();
                    stack.pop();
                    // adds bottom + top accoring to postfix rules then adds that new number to stack
                    int add = bottom + top;
                    stack.push(add); 
                }
                // do the same as above for each operand
            }
        }
    }

}