#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
        APPEND: TODO/FIX by \inf+ AD:
        //int -> bigint?
    */
    vector <vector <int> > group_permutations;//APPEND
    int n = (int) group_permutations.size();
    int seed = time(0);//APPEND
    mt19937 rnd(seed);//APPEND
    auto perm = group_permutations[rnd() % n];
    int m = (int) perm.size();
    for (int i = 0; i < m; i++) {
        //link i, perm[i]
    }
    auto qperm = group_permutations[rnd() % n];
    //stable marriage now, +2000 years
    //stable -> saddle point -> singularity -> 
    auto orbit = group_permutations[7];
    //unfold orbit into S
    //auto APPEND above?
}
