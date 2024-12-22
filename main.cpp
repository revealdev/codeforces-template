//
// Created by reyza on 22/12/2024.
//
#include <array>
#include <iostream>
#include <vector>

long solve(long n, std::vector<std::array<long, 2>> arr) {
   return 0;
}


int main() {
    long k;
    std::cin >> k;

    for (long i = 0; i < k; i++) {
        long n;
        std::cin >> n;

        std::vector<std::array<long, 2>> arr;
        for (long i = 0; i < n; i++) {
            long x;
            std::cin >> x;
            std::array<long, 2> elm;
            elm.fill(x);

            arr.push_back(elm);
        }

        for (long i = 0; i < n; i++) {
            long y;
            std::cin >> y;
            arr[i][1] = y;
        }

        long ans = solve(n, arr);
        std::cout << ans << std::endl;
    }
    return 0;
}
