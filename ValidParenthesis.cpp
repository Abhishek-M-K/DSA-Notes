//////////////////////////////////////CODE STUDIO////////////////////////////////////
// EASY

/*

Valid parenthesis means for an expression of parenthesis,
for every open bracket there's a closing bracket as well
eg: {{{}}},{}{},etc

*/

/*

bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    for(int i=0;i<expression.size();i++){
        char enter = expression[i];

        // if the parenthesis is (,{,[ then push into stack
        // and if it is ),},] then check the stack top and pop

        if(enter=='(' || enter=='{' || enter=='['){
            s.push(enter);
        }
        else{
            //before pop check whether stack is empty or not
            if (!s.empty()) {
              char top = s.top();
              if ((enter == ')' && top == '(') ||
                  (enter == '}' && top == '{') || (enter == ']' && top == '[')) {
                s.pop();
              }else return false;
            } else
              return false;
        }
    }

    if(s.empty()){
        return true;
    }
    else return false;
}

*/