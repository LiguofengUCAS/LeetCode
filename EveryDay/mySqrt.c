int mySqrt(int x){
    double a = 1.0;
    double accuracy;

    do
    {
        a = (x / a + a) / 2.0;
        accuracy = a * a - (double)x;
    }while(accuracy >= 0.01);

    return (int)a;
}