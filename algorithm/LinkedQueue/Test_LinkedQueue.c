#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

int main(void) {
	Node* Popped;
	LinkedQueue* Queue;

	int i;

	LQ_CreateQueue(&Queue);

	for (i = 0; i < 5; i++) {
		int num = 0;
		printf("[%d번] 입력하세요 : ", i + 1);
		scanf("%d", &num);

		LQ_Enqueue(Queue, LQ_CreateNode(num));
	}

	printf("\n단어를 맞춰보세요\n\n");

	//while (LQ_IsEmpty (Queue) == 0) {
	//	scanf("%d", IsWord);

	//	Popped = LQ_Dequeue(Queue);
	//	printf("Dequeue: %s \n", Popped->Data);
	//	LQ_DestroyNode(Popped);
	//}
	//LQ_DestroyQueue(Queue);

	return 0;
}