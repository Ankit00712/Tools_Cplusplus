// Keep the console open long enough to see your program's output       https://www.cplusplus.com/forum/articles/7312/
#include <iostream>
//using namespace std;
int main()
 {  
 	std::cout<< "HELLO FOO";
  
     //int x; std::cin >> x;     //to avoid console closing automatically       [ https://www.cplusplus.com/forum/beginner/72626/ ]
 	 std::cin.ignore();             //to avoid console closing automatically   [if namespace std was not used then std::cin.ignore();  had been required ]       

	 //system("PAUSE");    //to avoid console closing automatically  [https://www.cplusplus.com/forum/articles/11153/][The pause command is an internal cmd.exe command]

	return 0;
 }
