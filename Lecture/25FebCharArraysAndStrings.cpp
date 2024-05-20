#include<iostream>
#include<string.h>
#include<string>
#include<limits.h>
#include<algorithm>
#include<vector>

using namespace std;



// int getLength(char name[]){
//    int length=0;
//    int i=0;

//    while(name[i]!='\0'){
//       length++;
//       i++;
//    }
//    return length;
// }



//REVERSE A STRING

// void reverseCharArray(char ch[]){
//    int i=0;
//    int n=strlen(ch);
//    int j=n-1;

//    while(i<=j){
//       swap(ch[i],ch[j]);
//       i++;
//       j--;
//    }
   
// }





//REPLACE SPACES

// void replaceSpaces(char sentence[]){
//    int i=0;
//    int n=strlen(sentence);

//    for(int i=0;i<n;i++){
//       if(sentence[i]==' '){
//          sentence[i]='@';
//       }
//    }
// }




 //CHECK PALINDROME

// bool checkPalindrome(char word[]){
//    int i=0;
//    int n=strlen(word);
//    int j=n-1;

//    while(i<=j){

//       if(word[i]!=word[j])
//          return false;
//       else{
//          i++;
//          j--;
//       }
//    }
//    return true;
// }



//M-2





//CONVERT INTO UPPER CASE

// void convertIntoUpperCase(char word[]){
//    int n =strlen(word);

//    for(int i=0;i<n;i++){
//       word[i]=word[i]-'a'+'A';
//    }
// }




//REVERSE A STRING BY TEMP VARIABLE

// void reverseCharArray(char ch[]){
//    int i=0;
//    int n=strlen(ch);
//    int j=n-1;
//    for(i=0;i<n/2;){
//       char temp=ch[i];
//       ch[i]=ch[j];
//       ch[j]=temp;
//       i++;
//       j--;
//    }
// }








int main(){



   //CONVERT INTO UPPER CASE

   //  char arr[100]="babbar";
   //  convertIntoUpperCase(arr);
   //  cout<<arr;
     
   
   
   
   //CHECK PALINDROME

   // char arr[100]="Racecar";
   // char brr[]="Racecar";
   // reverseCharArray(arr);
   // cout<<"Check Palindrome: "<<endl;

   // cout<<"Check Palindrome: "<<checkPalindrome(arr)<<endl;

   // if(strcmp(arr,brr)==0){
   //    cout<<"It is palindrome"<<endl;
   // }
   // else{
   //    cout<<"Not Palindrome"<<endl;
   // }








//REPLACE SPACES

   // char sentence[100];
   // cout<<"Give you sentence "<<endl;
   // cin.getline(sentence,100);
   // replaceSpaces(sentence);
   // cout<<"Replaced string is :"<< sentence;





//REVERSE A STRING

   // char ch[100];
   // cout<<"Enter character array "<<endl;
   // cin>>ch;
   // cout<<"Initially "<<ch<<endl;
   // reverseCharArray(ch);
   // cout<<"Finally "<<ch<<endl;

   
  

  






//TO FIND LENGTH OF INPUT CHAR ARRAY

   // char name[100];
   // cout<<"Enter string"<<endl;
   // cin>>name;
   // cout<<"length is: "<<getLength(name);
   // cout<<"length is "<<strlen(name);






 //  char  name[100];
      //  cout<<"Enter your name "<<endl;

   //  cin>>name;

  //   getline(cin,name);  (This is for String)

    // cin.getline(name,50);

      //  cout<<"Aapka naam "<<name<<" Hai";








    return 0;
}