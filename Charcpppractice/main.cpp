//
//  main.cpp
//  Charcpppractice
//
//  Created by Aman arabzadeh on 2022-05-12.
//
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
bool validate(char *words){
    for(int i = 0; words[i] != '\0'; i++){
         if(!( words[i] >= 65 &&  words[i] <= 90) &&
           !( words[i] >= 97 &&  words[i] <= 122) &&
           !(words[i] >= 46 && words[i] <= 57)){
               return false;
       }
    }
       return true;
}

int main() {
   char message[] = {"Hello There John I Meet You at 09:30. "};
   int i = 0;
   while(message[i] != '\0'){
       cout << message[i] << " ";
              i++;
   }
   cout << endl;
   cout << i << " ";
   
   cout << "After moderation\n" << endl;
   for(int i = 0; message[i] != '\0'; ++i){
       if(message[i] >= 'A' && message[i] <= 'Z'){
           message[i] += 32;
       }else if(message[i] >= 'a' && message[i] <= 'z'){
           message[i] -= 32;
       }
   }
  cout << message << endl;
  
  
  // Lets count words in a charachters
  int countWords = 1;
  char A[] = {"WhatsApp motherfuckers!    Bad"};
  for(int i = 0; A[i] != '\0'; i++){
      if(A[i] == ' ' && A[i-1] != ' '){
          countWords++;
      }
  }
cout << "\nAmount of words are " << countWords << endl;



// Now we are going to count the woels in the english language
// The vowels in English are a, e, i, o, u, and sometimes y.
char vowel[] = {"How are you doing?"};
int vowelCounter{0};
for(int i = 0; vowel[i] != '\0'; i++){
    if(vowel[i] == 'a' || vowel[i] == 'e' ||
       vowel[i] == 'i' ||vowel[i] == 'o'  ||
       vowel[i] == 'u' ||vowel[i] == 'y'  ||
       vowel[i] == 'A' ||vowel[i] == 'E'  ||
       vowel[i] == 'I' || vowel[i]== 'O' ||
       vowel[i] == 'U'||vowel[i] == 'Y'){
        vowelCounter++;
    }
}

cout << "\nThere are  " << vowelCounter  << " vowels in this meaning."<< endl;

// Validating if there are special cases in passord checking algorithem login


char words[] = {"H?ello23"};
if(validate(words)){
    cout << "Welcome back!" << endl;
}else{
    cout << "Not valid passord!" << endl;
}


    return 0;
}
