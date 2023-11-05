//Include files 
#include <iostream>
#include <deque>
#include <queue>
#include <stack>
#include <string>

int main() {
    // Your passcodes
    std::string stackString = "GI7DE1GINJTHGN";
    std::string queueString = "OANRBIONWDYG";
    std::string dequeString = "01IM45RWXH";

    // Create an empty stack
    std::stack<char> stack;
    // Forward iterate through stackString and push each character onto your stack
    for (char ch : stackString) {
        stack.push(ch);
    }

    // Create an empty queue
    std::queue<char> queue;
    // Forward iterate through queueString and push each character into your queue
    for (char ch : queueString) {
        queue.push(ch);
    }

    // Create an empty deque
    std::deque<char> deque;
    // Forward iterate through dequeString and push each character into the front of your deque
    for (char ch : dequeString) {
        deque.push_front(ch);
    }

    // Your command list
    std::string commands = "2F145IF41268Q76963G5W651761W2W53G67JR1523F7W87897896769W85A4D2W85W7942357H87E8R77654";

    // Forward iterate through the commands string and do the following for each character you find:
    for (char cmd : commands) {
        switch (cmd) {
        case '1': // Pop the queue
            if (!queue.empty()) {
                queue.pop();
            }
            break;
        case '2': // Pop the front of the deque
            if (!deque.empty()) {
                deque.pop_front();
            }
            break;
        case '3': // Pop the back of the deque
            if (!deque.empty()) {
                deque.pop_back();
            }
            break;
        case '4': // Pop the stack
            if (!stack.empty()) {
                stack.pop();
            }
            break;
        case '5': // COPY the top of the stack into the queue
            if (!stack.empty()) {
                char top_element = stack.top();
                queue.push(top_element);
            }
            break;
        case '6': // MOVE the front of the queue onto the stack
            if (!queue.empty()) {
                char front_element = queue.front();
                stack.push(front_element);
                queue.pop();
            }
            break;
        case '7': // COPY the front of the queue into the queue
            if (!queue.empty()) {
                char front_element = queue.front();
                queue.push(front_element);
            }
            break;
        case '8': // MOVE the top of the stack into the back of the deque
            if (!stack.empty()) {
                char top_element = stack.top();
                deque.push_back(top_element);
                stack.pop();
            }
            break;
        default: // ANYTHING ELSE = Do nothing with all three data structures
            break;
        }
    }


    //  COPY means to get data from one data structure and copy it into another (maybe the same one)
      //  - One data structure will keep all its elements
      //  - The other data structure will gain an element
      //  MOVE means to remove data from one structure and place it into another (maybe the same one)
      //  - One data structure will lose an element
      //  - The other data structure will gain an element




    // Keep this printout to the console
    std::cout << "Statistically speaking... What time might it be right now?" << std::endl;

    // The deque will now have the secret phrase, so forward iterate through it and print it out
    for (char ch : deque) {
        std::cout << ch;
    }

    std::cout << std::endl;

    return 0;
}
