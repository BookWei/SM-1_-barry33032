#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    srand( (unsigned)time(NULL) );
    int n=10;
//    cout << "number of trial = ";
//    cin >> n ;


    int min = 1;
    int max;
    cout << "number of side ";
    cin>>max;
    double thr_mean = (1+max)/2.0;
    double thr_variance = (max*max-1.0)/12.0;
    double thr_standard_deviation = sqrt(thr_variance);
    cout<<""<<endl;
    for (int i=1;i<=6;i++)
    {
        double sum = 0.0;
        double sum2 = 0.0;
        double mean = 0.0;
        double variance = 0.0;
        double standard = 0.0;
        int iarr[n];
        int sqare[n];

    for(int i=0;i<n;i++)
    {
        iarr [i] = 0;
        sqare [i] = 0;
    }

    for(int i=0;i<n;i++)
    {

        int x = rand() % (max - min + 1) + min;
        iarr [i] = x;
        sqare [i] = x*x;
        sum = x+sum;
        sum2 = x*x+sum2;
    }

    mean = sum/n ;
    variance = sum2/n-mean*mean;
    cout << "number of trial = "<<n<<endl;
    cout << "mean = " << mean  <<"  thr_mean = "<< thr_mean <<"  error = "<< mean-thr_mean <<endl;
    cout << "variance = " << variance <<"  thr_variance = "<<thr_variance<<"  error = "<< variance-thr_variance << endl;
    cout << "standard deviation = "<< sqrt(variance)<<"  thr_standard_deviation = "<<thr_standard_deviation<<"  error = "<< sqrt(variance)-thr_standard_deviation << endl;
    cout<<endl;
    n=10*n;
    }
    return 0;
}
