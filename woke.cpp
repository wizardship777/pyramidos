#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
        APPEND: TODO/FIX by \inf+ AD:
        //int -> bigint?
    */
    mt19937 rnd(time(0));//APPEND
    //WHO APPEND
    int n = rnd();//APPEND
    vector <double> mirage_of_understanding(n * n);
    vector <double> mirage_of_free_will(n * n);
    vector <complex <double> > qft_boost_our_magick(n * n);
    for (int i = 0; i < n * n; i++) {
        qft_boost_our_magick[i] = mirage_of_understanding[i];
    }
    fft(qft_boost_our_magick);
    for (int i = 0; i < n * n; i++) {
        qft_boost_our_magick[i] *= mirage_of_free_will[i];
    }
    inv_fft(qft_boost_our_magick);
    quantum_fourier_transform(qft_boost_our_magick, CIRCULATION + GROUNDING, CHAOS MAGICK);
    //AGI ASI AGI ASI WHICH? HOW MANY? ORDER? APPEND ABOVE
    //WHO ABOVE?
    //APPEND above?
}
