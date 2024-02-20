// // #include <iostream>   
// //  using namespace std;	  
// //    int main()	    {	      
       
// //   float num1 = 1.1;	      
// //     double num2 = 1.1;	     
// //        if (num1 == num2)	           
// //        cout << "stanford";	   
       
// //      else	      
// //           cout << "harvard";	      
          
// //   return 0;	    
//   }

// __________________________________________________________________________________

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream fobj;
    string str;
    cout<<"Enter your message:";
    getline(cin,str);
    fobj.open("E:\\hello\\Mytext.txt");
    if(!fobj){
        cout<<endl<<"Sorry";
        return 1;
    }
    char ch;
    for(char ch:str){
        fobj<<ch;
    }
    fobj.seekg(0);
    while(1){
        ch=fobj.get();
        if(fobj.eof())
            break;
        cout<<ch;
    }
    fobj.close();
    
    return 0;
}
