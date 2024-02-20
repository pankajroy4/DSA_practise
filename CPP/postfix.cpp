
// -----------------------------USING VECTOR CONTAINER------------------------------------------


// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// int main(){
//     string Expression;
//     cout<<"Enter a valid postfix Expression:";
//     getline(cin,Expression);
//     vector<int> postfix;
//     for(char i:Expression){
//         if(i>=48 && i<=57)
//             postfix.push_back(i-48);
//         else{
//             int opd1 = postfix.back();    //only returns ,not delete
//             postfix.pop_back();           //only delete , not returns
//             int opd2 = postfix.back();
//             postfix.pop_back();
//             if (i=='+')
//                 postfix.push_back(opd1+opd2);
//             if (i=='-')
//                 postfix.push_back(opd1-opd2);
//             if (i=='*')
//                 postfix.push_back(opd1*opd2);
//             if (i=='/')
//                 postfix.push_back((float)opd1/opd2);
//             if (i=='%')
//                 postfix.push_back(opd1%opd2);
//         }
//     }
//     cout<<postfix[0];
//     return 0;
// }


// -------------------------------USING STACK CONTAINER------------------------------------------

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// int main(){
//     string Expression;
//     cout<<"Enter a valid postfix Expression:";
//     getline(cin,Expression);
//     stack<int> postfix;
//     for(char i:Expression){
//         if(i>=48 && i<=57)
//             postfix.push(i-48);
//         else{
//             int opd1 = postfix.top();    //only returns, not delete
//             postfix.pop();               //only delete, not returns
//             int opd2 = postfix.top();
//             postfix.pop();
//             if (i=='+')
//                 postfix.push(opd1+opd2);
//             if (i=='-')
//                 postfix.push(opd1-opd2);
//             if (i=='*')
//                 postfix.push(opd1*opd2);
//             if (i=='/')
//                 postfix.push((float)opd1/opd2);
//             if (i=='%')
//                 postfix.push(opd1%opd2);
//         }
//     }
//     cout<<postfix.top();
//     return 0;
// }










