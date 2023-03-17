void Ordena(TipoIndice Esq, TipoIndice Dir, TipoItem *A){
	TipoIndice i, j;
	Particao(Esq, Dir, &i, &j, A);
	if(Esq < j) Ordena(Esq, j, A);
	if(i < Dir) Ordena(i, Dir, A);
}

void QuickSort(TipoItem *A, TipoIndice n){
	Ordena(1, n, A);
}
