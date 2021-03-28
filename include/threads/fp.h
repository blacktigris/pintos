#define f (1<<14)


int i2f(int n);
int f2i_to0(int x);
int f2i_near(int x);
int fadd(int x, int y);
int fsub(int x, int y);
int fiadd(int x, int n);
int fisub(int x, int n); // subtraction between int and fp
int fmul(int x, int y);
int fdiv(int x, int y);
int fimul(int x, int n);
int fidiv(int x, int n);

int i2f(int n) {
    return n*f;
}

int f2i_to0(int x) {
    return x/f;
}

int f2i_near(int x) {
    return ((x>=0) ? ((x+f/2)/f) : ((x-f/2)/f));
}

int fadd(int x, int y ) {
    return x+y;
}

int fsub(int x, int y) { 
    return x-y;
}

int fiadd(int x, int n) {
    return x+n*f;
}

int fisub(int x, int n) {
    return x-n*f;
}

int fmul(int x, int y) {
    return ((int64_t) x) * y / f;
}

int fdiv(int x, int y) {
    return ((int64_t) x)*f/y;
}

int fimul(int x, int n) {
    return x*n;
}

int fidiv(int x, int n) {
    return x/n;
}