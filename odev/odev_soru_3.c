int Search(int D[], int N, int sayi)
{
       int i = 0;
    while (i<N) {
                if ( D[i] == sayi) break;
                i++;
}

if (i<N) return i;
else return -1;
}


/*
a) En iyi durumda, aranan eleman dizinin ilk elemanıdır, bu nedenle döngüye hiç girmeyiz. Bu durumda, işlem sayısı 1'dir.
T(n) = 1

b) Ortalama durumda, aranan eleman dizinin rastgele bir yerinde olabilir. En kötü duruma kadar döngü devam eder. Döngü en fazla N kez çalışır. Ortalama durumda, D[i] == sayi ifadesi için kontrol edilmesi gereken eleman sayısı N/2 dir. Bu nedenle ortalama çalışma zamanı, O(N/2) veya O(N) dır.
T(n) = O(N)

c) En kötü durumda, aranan eleman dizinin son elemanıdır. Bu durumda döngü N kez çalışacaktır. En kötü durumda, D[i] == sayi ifadesi için kontrol edilmesi gereken eleman sayısı N dir. Bu nedenle en kötü durumda, çalışma zamanı O(N) dir.
T(n) = O(N)
*/