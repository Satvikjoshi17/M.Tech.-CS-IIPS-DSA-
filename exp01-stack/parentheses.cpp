#include<iostream>
#include<stack>
#include<string>
using namespace std;

class ParenthesesChecker {
  string input;
public: 
  // ParenthesesChecker() {
  //   if( input == "{" || input == "}" || input == "(" || input == ")" || input == "[" || input == "]") {
  //     cout << "Valid parentheses" << endl;
  //     cout<<"enter the string of parentheses: ";
  //   cin>>input;
  //   } else {
  //     cout << "Invalid parentheses" << endl;
  //   }
    
  // }
 bool chechvalid( string input) {
    stack<char> s;
    for (char c : input) {
      if (c == '(' || c == '{' || c == '[') {
        s.push(c);
      } else if (c == ')' || c == '}' || c == ']') {
        if (s.empty()) {
          return false;
        }
        char top = s.top();
        s.pop();
        if ((c == ')' && top != '(') ||
            (c == '}' && top != '{') ||
            (c == ']' && top != '[')) {
          return false;
        }
      }
    }
    return s.empty();
  }

};
int main() {
  ParenthesesChecker checker;
  string input; char c ;
 do{ cout << "Enter a string of parentheses: ";
  cin >> input;
  if (checker.chechvalid(input)) {
    cout << "Valid parentheses" << endl;
  } else {
    cout << "Invalid parentheses" << endl;
  }
  cout << "Do you want to continue? (y/n): ";
  cin >> c;
}while( c=='Y' || c=='y');
  return 0;
}