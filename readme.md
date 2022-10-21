# CPP_practice 
Enviroment: WSL, Unbuntu 20.04, Cpp++17  
This material is intended as a review of the CPP practice for my self
****
## 10.Characters and String
you can see more examples in the folder section10. 
****
### 10.1 Character Function
In cpp work Character like array.
#### How to use Chacter Functions and to define values as chracters
``` c++
#include <cctype>
#include <cstring>

using namespace std;

int main (){
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    return 0;
}
```
****
#### Testing charcters
```c++
isalpha(c) //True if c is a letter
isalnum(c) //True if c is a letter or digit
isdigit(c) //True if c is a digit
islower(c) //True if c is lowercase letter
isprint(c) //True if c is a printalbe letter
ispunct(c) //True if c is a punctuation character
isupper(c) //True if c is an uppercase letter
isspace(c) //True if c is whitespace
```
****
#### Converting Characters
```c++
tolower(c) //returns lowercase of c
toupper(c) //returns uppercase of c
```
****
### 10.2 C++ String
std::string is a Class in the Standard template Library.  
* In cpp work the String like Vector.  
* std namespace  
* dynamic size  
* work with input and output streams  
* familiar operators (+, =, <, >...) can be used
* can be easily converted to C-Style Strings if needed
****
#### How to use the C++ string?
```c++
#include <iostream>
#include <string>

using namespace std;

int main(){

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX

    return 0;
}
```
****
#### Assignment 
```c++
s1 = "Watermelon";
cout << s1 << endl; // output: Watermelon
s2 = s1;
cout << s2 << endl; // ouput: Watermelon
```
****
#### Concatenation
```c++
string part1 {"c++"};
string part2 {"is easy"};

string sentence;

sentence = part1 + " " + part2 + " language";
//output: c++ is easy language

sentence = "c++" + " is easy"; // Error! 
```
for a Concatenation between string we can you a charater just between strings.  
****
#### Accessing characters [] and at()  methode
```c++
string s2 {"jaeho"};

cout << s2[0] <<endl; //j
cout << s2.at(0) << endl; //j 

s2[0] = 'c'; //jaeho -> caeho
s2.at(0) = 'k'; // caeho -> kaeho
```
****
#### substrings - substr()
**object.substr(start_index, length)**
```c++
s1 = "This is a test";
    cout << s1.substr(0,4) << endl; // output: This (from 0 1 2 3 ) 
    cout << s1.substr(5,2) << endl; // output: is (from 5 6)
    cout << s1.substr(10,4) << endl;// output: test (from 10 11 12 13)
```
****
#### Searching-find()
**object.find(string) or object.find(string, start_index for searching)**
```c++
string s1 {"munich is a lovely place"};
cout << s1.find("munich");  //output: 0
cout << s1.find("place");   //output: 19
cout << s1.find("xx");      //output: string::npos
cout << s1.find("i")        //output: 3
cout << s1.find(i, 5)       //output: 7 
```
***
#### Removing characters- erase() and clear()
**object.erase(start_index, length)**
```c++
string s1 {"i love munich"};

cout << s1.erase(0,5); //output: e munich
cout << s1.erase(5,7); //output: i love
s1.clear();            //empties string s1
```
****
#### length
**object.length()**
```c++
string s1 {"jhc"};
cout << s1.length(); //output: 3 
```
***
#### String input methodes!
we can you **cin** and **getline(cin, object)** or **getline(cin, object, 'delimiter')** to input string in string variable.  
what is the different between that?
```c++
string s1;

cin >> s1;  //input: hello world
cout << s1; //ouput: hello
//if you use cin to input something in s1. s1 can accept only up to the first space

getline(cin, s1);  //input: hello world
cout << s1 << endl;//output: hello world

getline(cin,s1,'w');//input: hello world
cout << s1 << endl; //output: hello 
```
***

