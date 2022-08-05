//1.Reverse a number using stack.

// #include <stdio.h>
// int top=-1;
// int stack[100];
// int push(int a){
//   ++top;
//   stack[top]=a;
//   return 0;
// }
// int pop(){
//   while(top>=0){
//     printf("%d ",stack[top]);
//     --top;
//   }
//   return 0;
// }
// int main() {
//   int n,j;
//   scanf("%d",&n);
//   for(int i=0;i<n;++i){
//     scanf("%d",&j);
//     push(j);
//   }
//   pop();
//   return 0;
// }

//2.Validate Expression using stack

// #include <stdio.h>
// #include <string.h>
// char stack[100];
// int top = -1;
// int push(char a) {
//   ++top;
//   stack[top] = a;
// }
// int pop() { --top; }
// int main() {
//   int length = 0;
//   char string[100];
//   scanf("%s", string);
//   length = strlen(string);
//   for (int i = 0; i < length; ++i) {
//     if (string[i] == '(') {
//       push("(");
//     } else if (string[i] == ')') {
//       pop();
//     } else {
//       continue;
//     }
//   }
//   if (top == -1) {
//     printf("It's is a valid expression");
//   } else {
//     printf("It's is not a valid expression");
//   }
//   return 0;
// }


// 3.Validate Expression using stack for all brackets.

// #include<stdio.h>

// int Top=-1;
// char Stack[100];

// int push(char a){
//   ++Top;
//   Stack[Top]=a;
// }

// int pop(char a){
//   int b=0;
//   if(Stack[Top]==a){
//     --Top;
//     return b;
//   }
//   else{
//     b=1;
//     return b;
//   }
// }
// int main(){
//   char String[100],a;
//   scanf("%s",String);
//   int i=0,temp=0,count=0;
//   while(String[count]!='\0'){
//     ++count;
//   }
//   for(int i=0;i<count;++i){
//     a=String[i];
//     if(a=='(' || a=='{' ||  a=='['){
//       push(a);
//     }
//     else if(a==')' || a=='}' ||  a==']'){
//       if(a==')'){
//         temp=pop('(');
//       }
//       else if(a=='}'){
//         temp=pop('{');
//       }
//       else if(a==']'){
//         temp=pop('[');
//       }
//     }
//     if(temp==0){
//       continue;
//     }
//     else{
//       break;
//     }
//   }
//   if(Top==-1){
//     printf("Valid Expression");
//   }
//   else{
//     printf("Not a Valid Expression");
//   }
//   return 0;
// }

//finding the string without predefined function

// #include<stdio.h>
// int main(){
//   int i=0;
//   char string[100];
//   scanf("%s",string);
//   for(i=0; string[i] != '\0'; ++i);
//   printf("%d",i);
// }

//4.compare an element with right side elements in the stack and print if it is greater.

// #include<stdio.h>
// int Top=-1,Stack[100];
// int push(int a){
//   if(Top<100){
//     ++Top;
//     Stack[Top]=a;
//   }
//   else{
//     printf("The stack is full");
//   }
// }

// int pop(){
//   if(Top==-1){
//     printf("Stack is empty");
//   }
//   else{
//     for(int i=0;i<=Top;++i){
//       if(i==Top){
//           printf("%d",Stack[i]);
//         }
//         else{
//       for(int j=i+1;j<=Top;++j){
//         if(Stack[i]>=Stack[j]);
//         else{
//           break;
//         }
//         if(j==Top){
//           printf("%d ",Stack[i]);
//         }
//       }
//     }
//   }
// }
// }
// int main(){
//   int n,i,a;
//   scanf("%d",&n);
//   for(int i=0;i<n;++i){
//     scanf("%d",&a);
//     push(a);
//   }
//   pop();
//   return 0;
// }
