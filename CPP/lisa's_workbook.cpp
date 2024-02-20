#include<iostream>
using namespace std;
int main() {
    int n, k; // n = # of chapters, k = maximum number of problems per page
    cin>>n>>k;
    int total_prblm_of_a_chapter, specialProblems = 0, pageNumber = 0;
    for(int i = 0; i < n; i++) {
        cin>>total_prblm_of_a_chapter;
        pageNumber++; // increase for new chapter
        int problem = 1;
        while(total_prblm_of_a_chapter > 0) {
            total_prblm_of_a_chapter--;
            if(problem == pageNumber) {
                specialProblems++;
            }
            if(problem%k == 0 && total_prblm_of_a_chapter != 0) {
                pageNumber++; // increase if page is full
            }
            problem++;
         }
    }
    cout<<specialProblems;
    return 0;
}