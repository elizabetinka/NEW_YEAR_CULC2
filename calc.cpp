#include <iostream>

#include <cassert>


int64_t Culk(int64_t x,int64_t y,char ch){
    if (ch=='+'){
        return x+y;
    }
    else if (ch=='-'){
        return x-y;
    }
    else if (ch=='*'){
        return x*y;
    }
    else if (ch=='/'){
        if (y==0){
            std::cerr<<"Деление на ноль!"<<std::endl;
            return 0;
        }
        return x/y;
    }
    else{
        std::cerr<<"Введена неверная опция"<<std::endl;
        return 0;
    }
}

void FriendInterface() {
    int64_t x;
    int64_t y;
    char ch;
    std::cout << "Привет,это милый калькулятор" << std::endl;
    std::cout << "Введи @ , чтобы прекратить его работу" << std::endl;

    while (true) {
        std::cout << "Введите первое число" << std::endl;
        std::cin >> x;
        std::cout << "Введите второе число" << std::endl;
        std::cin >> y;

        std::cout << "Введите операцию(-+*/) " << std::endl;
        std::cin >> ch;
        if (ch == '@') {
            break;
        }
        int64_t ans = Culk(x, y, ch);
        std::cout << ans;
    }
}


