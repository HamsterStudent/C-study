int stringLength(char* pstr) {
	int count = 0;
	while (*pstr) {
		// ���ڿ��� ������ �����ϴ� �������� 1 ����
		count++;
		// ���ڿ��� ����� �ּҰ��� 1 ����
		pstr++;
	}
	return count;
}

// ���ڿ� ī���Լ�
char* stringCopy(char* pdest, char* pscr) {
	// ó���� �ּҰ��� �����ؾ���. �ּҰ��� �����ؼ� ����ְ� �����ϱ�...
	char* originPtr = pdest;
	while (*pscr) {
		*pdest = *pscr;
		pdest++;
		pscr++;
	}
	*pdest = '\0';
	return originPtr;
}


// ���ڿ� �����Լ�
char* stringConcat(char* dest, char* pscr) {
	//// �ڵ������� �������������ܴ� ... ����
	//char buffTemp[30];
	//int i = 0;
	//printf("ù ��° ���� : %s\n", dest);
	//printf("�� ��° ���� : %s\n", pscr);
	//while (*dest) {
	//	buffTemp[i] = *dest;
	//	dest++;
	//	i++;
	//}
	//while (*pscr) {
	//	buffTemp[i] = *pscr;
	//	pscr++;
	//	i++;
	//}
	//buffTemp[i] = '\0';
	//printf("������ ���� : %s\n", buffTemp);

	//return buffTemp;

	char* originPtr = dest;

	while (*dest) {
		dest++;
	}
	while (*pscr) {
		*dest = *pscr;
		dest++;
		pscr++;
	}
	*dest = '\0';

	return originPtr;
}

// ���ڿ� ���Լ�
int* stringCompare(char* str1, char* str2) {
	while (*str1) {
		if (*str1 != *str2) {
			if (*str1 > *str2) {
				return 1;
			}
			else {
				return -1;
			}
		}

		str1++;
		str2++;
	}

	if (*str2 != '\0') {
		return -1;
	}


	return 0;

}

// �빮�� �����Լ�
char* UpperString(char* str) {

}

// �ҹ��� �����Լ�
char* LowerString(char* str) {

}