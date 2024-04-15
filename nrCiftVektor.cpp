#include <stdio.h>

int nrCift(int v[], int n) {
	int c=0;
	for(int i=0;i<n;i++)
      if (v[i]%2==0) {
        c++;
    }
    return c;
}


int main() {
    int n;
    printf("Vendos permasat e vektorit: ");
    scanf("%d", &n);

    int v[n];

    printf("Vendos elementet e vektorit:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int numriCift = nrCift(v, n);

    printf("Numri i numrave cift ne vektor eshte: %d\n", numriCift);

    return 0;
}
