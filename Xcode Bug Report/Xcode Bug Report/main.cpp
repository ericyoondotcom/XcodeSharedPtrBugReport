#include <iostream>
#include <memory>

void Bar(std::shared_ptr<int> ptr){
    //Correctly prints 1.
    //However, if you hover over ptr to bring up debug window, it will show it is NULL.
    std::cout << *ptr << std::endl;
    return;
}


int main(int argc, const char * argv[]) {
    int foo = 1;
    std::shared_ptr<int> fooPtr = std::make_shared<int>(foo); //also works with unique_ptr
    Bar(fooPtr);
    return 0;
}


