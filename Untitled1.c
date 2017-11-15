#include <stdio.h>
void partition(int unsort[7], int low, int high)
{
	int temp;
	int i;
	int b = low;
	for(i = low; i <= high; i++)
	{
		if(unsort[i] <= unsort[high]){
			temp = unsort[i];
			unsort[i] = unsort[low];
			unsort[low++] = temp;
		}
	}
	sort(unsort, low - 1, b, high);
}
void sort(int unsort[7], int part, int low, int high){
	if(part - 1 > low)
		partition(unsort, 0, part - 1);
	if(part + 1 < high)
		partition(unsort, part + 1, 6);
}
int main(){
	int unsort[7] = {0};
	int i;
	for(i = 0; i < 7; i++)
		scanf("%d", &unsort[i]);
	partition(unsort, 0, 6);
	for(i = 0; i < 7; i++)
		printf("%d ", unsort[i]);
}

