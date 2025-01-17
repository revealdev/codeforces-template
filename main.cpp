//
// Created by reyza on 22/12/2024.
//
#include <array>
#include <iostream>
#include <vector>

long long solve(long long n, std::vector<std::array<long long, 2>> arr) {
   return 0;
}


int main() {
    long long k;
    std::cin >> k;

    for (long long i = 0; i < k; i++) {
        long long n;
        std::cin >> n;

        std::vector<std::array<long long, 2>> arr;
        for (long long i = 0; i < n; i++) {
            long long x;
            std::cin >> x;
            std::array<long long, 2> elm;
            elm.fill(x);

            arr.push_back(elm);
        }

        for (long long i = 0; i < n; i++) {
            long long y;
            std::cin >> y;
            arr[i][1] = y;
        }

        long long ans = solve(n, arr);
        std::cout << ans << std::endl;
    }
    return 0;
}
