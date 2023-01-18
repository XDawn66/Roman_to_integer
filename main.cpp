#include <iostream>
using namespace std;

 int romanToInt(string s) {
  char one_letter,second_letter;
  int total = 0;
  bool has_next = false;
  for(int i = 1; i <= s.length(); i++)
    {
      one_letter = s[i-1];
      if(i < s.length()) //making sure there is next letter
      {
        second_letter = s[i];
        has_next = true;
      }
       switch(one_letter)
         {
           case 'I':
           {
             if(second_letter =='V' && has_next)
             {
               cout<<"work"<<endl;
               total += 4;
               i++; //skip the next letter
             }
             else if(second_letter == 'X'&& has_next)
             {
               total +=9;
               i++;
             }
             else {total++;}
             break;
           }
           case 'V':
           total += 5;
           break;
           case 'X':
           {
             if(second_letter =='L' && has_next)
             {
               total += 40;
               i++; //skip the next letter
             }
             else if(second_letter == 'C'&& has_next)
             {
               total +=90;
               i++;
             }
             else{total +=10;}
             break;
           }
           case 'L':
           total +=50;
           break;
           case 'C':
           {
             if(second_letter =='D' && has_next)
             {
               total += 400;
               i++; //skip the next letter
             }
             else if(second_letter == 'M'&& has_next)
             {
               total +=900;
               i++;
             }
             else{ total+= 100;}
             break;
           }
           case 'D':
           total+= 500;
           break;
           case 'M':
           total+=1000;
           break;
         }
      has_next = false; //reset
    }
    return total;
  }

int main() {
  cout<<romanToInt("MCMXCIV");
}
