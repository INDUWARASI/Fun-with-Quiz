#include <stdio.h>
int main() {
   char answer;
   int score = 0;
   printf("🧠 Welcome to the C Language Quiz!\n");
   printf("=================================\n\n");
   // Question 1
   printf("Q1. What is the keyword to print text in C?\n");
   printf("A) echo\nB) print\nC) printf\nD) cout\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) printf\n\n");
   }
   // Question 2
   printf("Q2. Which symbol is used to end a statement in C?\n");
   printf("A) .\nB) ;\nC) ,\nD) :\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'B' || answer == 'b') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: B) ;\n\n");
   }
   // Question 3
   printf("Q3. Which header file is needed for printf()?\n");
   printf("A) stdlib.h\nB) string.h\nC) stdio.h\nD) conio.h\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) stdio.h\n\n");
   }
   // Question 4
   printf("Q4. What data type is used to store a single character?\n");
   printf("A) char\nB) int\nC) float\nD) string\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'A' || answer == 'a') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: A) char\n\n");
   }
   // Question 5
   printf("Q5. Which function is used to take input from the user?\n");
   printf("A) scanf\nB) input\nC) get\nD) cin\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'A' || answer == 'a') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: A) scanf\n\n");
   }
   // Question 6
   printf("Q6. Which of the following is a looping statement?\n");
   printf("A) if\nB) switch\nC) for\nD) goto\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) for\n\n");
   }
   // Question 7
   printf("Q7. Which operator is used for comparison in C?\n");
   printf("A) =\nB) ==\nC) !=\nD) <>\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'B' || answer == 'b') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: B) ==\n\n");
   }
   // Question 8
   printf("Q8. What is the size of int in most 32-bit systems?\n");
   printf("A) 2 bytes\nB) 4 bytes\nC) 6 bytes\nD) 8 bytes\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'B' || answer == 'b') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: B) 4 bytes\n\n");
   }
   // Question 9
   printf("Q9. Which function clears the output screen in C (Turbo C)?\n");
   printf("A) clrscr()\nB) clear()\nC) clean()\nD) cls()\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'A' || answer == 'a') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: A) clrscr()\n\n");
   }
   // Question 10
   printf("Q10. Which loop always executes at least once?\n");
   printf("A) for loop\nB) while loop\nC) do-while loop\nD) none\n");
   printf("Your answer: ");
   scanf(" %c", &answer);
   if (answer == 'C' || answer == 'c') {
       printf("✅ Correct!\n\n");
       score++;
   } else {
       printf("❌ Wrong! Correct answer: C) do-while loop\n\n");
   }
   printf("=================================\n");
   printf("🎯 Your Final Score: %d / 10\n", score);
   if (score == 10)
       printf("🏆 Excellent! You are a C master!\n");
   else if (score >= 7)
       printf("👏 Great job! You know your basics.\n");
   else if (score >= 4)
       printf("🙂 Not bad, keep practicing.\n");
   else
       printf("💪 Don’t give up! Study and try again.\n");
   return 0;
}
