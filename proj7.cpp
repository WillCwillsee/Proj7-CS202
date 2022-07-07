#include "MyString.hpp"

int main(){
    
    //(1)
    cout << "Testing Default ctor" << endl;
    MyString ms_default;
     
    //(2)
    cout << "Testing Parametrized ctor" << endl;
    MyString ms_parametrized("MyString parametrized constructor!");
    
    //********************
    cout << ms_parametrized;
    //********************
    
    //(3)
    cout << "Testing Copy ctor" << endl;
    MyString ms_copy(ms_parametrized);
   
    //********************
    cout << ms_copy;
    //********************
    
    //(4)
    cout << "Testing dtor" << endl;
    MyString ms_destroy("MyString to be destroyed...");
     
    //(5),(6)
    MyString ms_size_length("Size and length test");
    cout << "Testing size()" << endl;
    cout << ms_size_length.size() << endl;
    cout << "Testing length()" << endl;
    cout << ms_size_length.length() << endl;
     
    //(7)
    cout << "Testing c_str()" << endl;
    MyString ms_toCstring("C-String equivalent successfully obtained!");
    cout << ms_toCstring.c_str() << endl;
     
    //(8)
    cout << "Testing operator==()" << endl;
    MyString ms_same1("The same"), ms_same2("The same");
    if (ms_same1==ms_same2)
        cout << "Same success" << endl;
    cout << "Same success" << endl;
    MyString ms_different("The same (NOT)");
    if (!(ms_same1==ms_different))
        cout << "Different success" << endl;
    
    //(9)
    cout << "Testing operator=()" << endl;
    MyString ms_assign("Before assignment");
    ms_assign = MyString("After performing assignment");
     
    //(10)
    cout << "Testing operator+" << endl;
    MyString ms_append1("The first part");
    MyString ms_append2(" and the second");
    MyString ms_concat = ms_append1+ ms_append2;
     
    //(11)
    cout << "Testing operator[]()" << endl;
    MyString ms_access("Access successful (NOT)");
    ms_access[17] = 0;
     
    //(12)
    cout << "Testing operator<<()" << endl;
    cout << ms_access << endl;
    
    return 0;
}
