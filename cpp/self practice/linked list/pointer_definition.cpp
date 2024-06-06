#include <iostream>
using namespace std;

int main() {
    int x = 10; // Khai bao 1 bien voi gia tri cua 10.
    
    // `&` la toan tu dia chi. `&x` la dia chi cua bien x 

    int *ptr = &x; // Khai báo mot con tro ptr tro toi x

    cout << "Gia tri cua x: " << x << endl;  // => 10
    cout << "dia chi cua x: " << &x << endl; // => 0x6ffe04
    
    //gia tri cua ptr la dia chi ma no tro toi 
    cout << "Gia tri cua ptr: " << ptr << endl; // => 0x6ffe04
    
    // `*` la toan tu giai tham chieu (dereference). 
	// `*ptr` la gia tri tai chi chi ma con tro `ptr` dang tro toi
    cout << "Gia tri tai dia chi ma ptr tro? toi: " << *ptr << endl;  // => 10

    return 0;
}
