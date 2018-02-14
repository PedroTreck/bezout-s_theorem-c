typedef struct bezout Bezout;

Bezout* create_struct();

void read_bezout(Bezout* bezout, int x, int y, int r);

void calculate_bezout(Bezout* bezout);

void error();

void results_bezout(Bezout* bezout);
