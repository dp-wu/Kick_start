/*                                         *
   find number of m-countdowns in an array
   T = # of test cases
   N = array size of each test case
   K = the m of the m-countdown
 *                                         */


#include <iostream>
using namespace std;

int main() {
    int T, N, K, c=0; // c is the case number
    cin >> T; cin.ignore(1000, 10);
    
    while (c < T) {
        cin >> N >> K;
        int * arr = new int[N]; // create array
        
        int counter = 0;
        int tick = 0;
        
        for (int i=0; i<N; ++i) {
            cin >> arr[i]; // read in the array elements
            
            if (arr[i] - arr[i-1] == -1) ++tick;
            else tick = 0;
            
            if (arr[i] == 1 && tick >= K - 1) ++counter;
        }
        
        ++c;
        cout << "Case #" << c << ": " << counter << endl;
    }
}
