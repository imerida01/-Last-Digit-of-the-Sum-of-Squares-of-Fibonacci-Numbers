
#include <iostream>
long long get_fibonacci_huge(long long n) {
    if(n<=1)
        return n;
    long long remainder = n % 60;

    long long first = 0;
    long long second = 1;
    long long b=0;

    long long res = remainder;

    for (int i = 1; i < remainder; i++) {
        res = (first + second) % 60;
        first = second;
        second = res;
        b = (res+first)%10;
    }

    return (res*b)%10;
}

int main() {
//    for (int i = 2; i < 100; i++) {
//        std::cout << i << " : " << get_pisano_period(i) << std::endl;
//    }
//    return 0;
    long long n;
    std::cin >> n;
    std::cout << get_fibonacci_huge(n) << '\n';
}
#include <iostream>

/*int fibonacci_sum_squares_naive(long long n) {
    //if (n <= 1)
        //return n;

    long long previous = 0;
    long long current  = 1;
    long long next  =  0;
    long long b = 0;

    for (long long i = 2; i <= n ; ++i)
        {
            next=(previous + current)%10;
            //std::cout<<"\nnext:"<<next;
            previous = (current)%10;
            //std::cout<<"               prev:"<<previous;
            current = (next)%10;
            //std::cout<<"   current:"<<current;
            if( i ==n)
            b = (next+previous)%10;
            //std::cout<<"           b: "<<b<<"\n";
        }
        long long l = next;
        return (b*l)%10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_naive(n);
}
*/
