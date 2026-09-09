//exercicio 1
#if 0
#include "stdio.h"

int main() {

	int x = 10;
	int* p;  // int *p = &x
	p = &x;  

	printf("x = %d\n", x);
	printf("&x - %p\n", &x);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);


	return 0;
}

#endif

//exercicio 2
#if 0
#include "stdio.h"

int main() {

	int x = 10;
	int* p = &x;
	*p = 100;

	p = NULL;

	if (p != NULL) {
		printf("%d\n", *p);
	}

	return 0;
}

#endif

//exercicio 3
#if 0
#include "stdio.h"

void alterar1(int x);
void alterar2(int* p);

int main() {

	int x = 10;

	alterar1(x);
	printf("%d\n", x);

	alterar2(&x);
	printf("%d\n", x);

	return 0;
}

void alterar1(int x) {
	x = 100;
}
void alterar2(int* p) {
	*p = 100;
}

#endif

//exercicio 4

#if 0
#include "stdio.h"
 
void trocar(int*, int*);

int main() {

	int x = 10;
	int y = 20;

	trocar(&x, &y);

	return 0;
}

void trocar(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}

#endif

//exercicio 5
#if 1
#include "stdio.h"

struct amostra {

	int canal;
	int tensao;
	int tempo;
};

void alterar1(struct amostra a);
void alterar2(struct amostra *p);



int main() {
	struct amostra k = { 1, 0.1, 12.5 };
	alterar1(k);
	printf("Canal = %d\tTempo = %0.2f\tTensao = %0.2f\n", k.canal, k.tempo, k.tensao);

	alterar2(&k);
	printf("Canal = %d\tTempo = %0.2f\tTensao = %0.2f\n", k.canal, k.tempo, k.tensao);

	return 0;
}

void alterar1(struct amostra a) {
	a.canal = 0;
	a.tempo = 0.2;
}
void alterar2(struct amostra* p) {
	(*p).tensao = 14.4;
	p->canal = 12;

}

#endif
