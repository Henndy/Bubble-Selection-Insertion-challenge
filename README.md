# Bubble-Selection-Insertion-challenge
1. BUBBLE
Bubble Sort mengurutkan data dengan cara membandingkan elemen sekarang dengan elemen berikutnya. Jika elemen sekarang lebih besar dari elemen berikutnya maka kedua elemen tersebut ditukar, jika pengurutan ascending.Bubble sort berhenti jika seluruh array telah diperiksa dan tidak ada pertukaran lagi yang bisa dilakukan, serta tercapai perurutan yang telah diinginkan.
void bubble_sort()
{
for(int i=1;i<n;i++)
{
for(int j=n-1;j>=i;j--)
{
if(data[j]<data[j-1]) tukar(j,j-1);
}}}
2. SELECTION
3. INSERTION
Pengurutan dimulai dari data ke-2 sampai dengan data terakhir, jika ditemukan data yang lebih kecil, maka akan ditempatkan (diinsert) diposisi yang seharusnya. Pada penyisipan elemen, maka elemen-elemen lain akan bergeser ke belakang.
