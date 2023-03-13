int stringLength(char* pstr) {
	int count = 0;
	while (*pstr) {
		// 문자열의 갯수를 저장하는 변수값을 1 증가
		count++;
		// 문자열에 저장된 주소값을 1 증가
		pstr++;
	}
	return count;
}

// 문자열 카피함수
char* stringCopy(char* pdest, char* pscr) {
	// 처음의 주소값을 저장해야함. 주소값을 변형해서 집어넣고 있으니까...
	char* originPtr = pdest;
	while (*pscr) {
		*pdest = *pscr;
		pdest++;
		pscr++;
	}
	*pdest = '\0';
	return originPtr;
}


// 문자열 병합함수
char* stringConcat(char* dest, char* pscr) {
	//// 자동변수라 내보낼수가없단다 ... 허헛
	//char buffTemp[30];
	//int i = 0;
	//printf("첫 번째 문장 : %s\n", dest);
	//printf("두 번째 문장 : %s\n", pscr);
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
	//printf("병합한 문장 : %s\n", buffTemp);

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

// 문자열 비교함수
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

// 대문자 변경함수
char* UpperString(char* str) {

}

// 소문자 변경함수
char* LowerString(char* str) {

}