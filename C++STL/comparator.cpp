#include <iostream>
#include<list> 
using namespace std; 


/*
* Templates + Interators + Comparators
? Comparator: For user defined datatypes
*/
template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
   while(start!=end) {
      if(cmp(*start, key)){
         return start;
      }
      start++;
   }
   return end;
}




class Book{
   public:
      string name;
      int price; 

   Book(){

   }

   Book(string name, int price){
      this->name = name; 
      this->price = price;
   }
};

class bookToCompare{
   public:
   // Functor/ Function obj: here () is overloaded
   bool operator()(Book A, Book B) {
      cout<<"Inside Compare fn \n";
      if(A.name == B.name){
         return true;
      }
      return false;
   }
};

int main() {

   Book b1("C++", 100);
   Book b2("Python",120);
   Book b3("Java", 130);
   Book b4(b1);

   list<Book>l;
   l.push_back(b1);
   l.push_back(b2);
   l.push_back(b3);
   l.push_back(b4);

   Book key("C++", 110);

   bookToCompare cmp;
   if(cmp(b1, key)) {
      cout<<"Same books\n";
   }

   auto it = search(l.begin(), l.end(), key, cmp);
   if(it != l.end()){
      cout<<"Found";
   } else cout<<"Not Found";

}