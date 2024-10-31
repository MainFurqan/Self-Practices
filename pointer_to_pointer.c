int main() {
    float a = 51.2;
    float *ptr = &a;       // It is pointer variable of 'a'
    float **pptr = &ptr;      // It is pointer_to_pointer variable of 'a'

    // Q; print value of 'a' using 'pointer_to_pointer'.
    printf("%u \n", pptr);       // this line code representing the address those had be stored in this variable.
    printf("%u \n", *(pptr));    // one step 'point the value', mean 'pointer'       
    printf("%f \n", **pptr);     // Two step 'pointing the value', mean 'pointer_to_pointer'

}