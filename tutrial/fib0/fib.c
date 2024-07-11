#include <stdio.h>
#include <emscripten.h>

int EMSCRIPTEN_KEEPALIVE fib(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    //printf("Hello world!\n");
    //int res = fib(5);
    //printf("fib(5) = %d¥n", res);
    return 0;
}