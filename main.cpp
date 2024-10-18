#include <stdio.h>


bool IsMatch(int mas1[], int mas2[]) {
	for (int i = 0; i < 4; ++i) {
		if (mas2[i] != mas1[i]) {
			break;
		}
	return true;
	}
}

int main() {
	int codes1[] = { 1,1,1,1 };
	int codes2[] = { 2,2,2,2 };
	int codes3[] = { 3,3,3,3 };
	int codes4[] = { 4,4,4,4 };
	const char*  name[] = { "Milk", "eggs", "Oil", "Bread"};
	int prises[] = { 200,1100,784,326 };
	int discount[] = { 10, 30, 23, 17 };
	int count[] = { 0,0,0,0 };
	int sum[] = { 0,0,0,0, 0 };
	int userInput = 0;
	int currentCode[] = { 0,0,0,0 };
	int currentIndex = -1;

	while (true) {
		printf("Print operation: ");
		scanf_s("%d", &userInput);
		switch (userInput) {
			case 1 :{
				printf("Enter code: ");
		
				for (int i = 0; i < 4; ++i) {
					scanf_s("%d", &currentCode[i]);
				}
				if (IsMatch(currentCode, codes1)) {
					currentIndex = 1;
				}
				if (IsMatch(currentCode, codes2)) {
					currentIndex = 2;
				}
				if (IsMatch(currentCode, codes3)) {
					currentIndex = 3;
				}
				if (IsMatch(currentCode, codes4)) {
					currentIndex = 4;
				}
				printf("%d ", currentIndex);
				break;
			}
			case 2: {
				if (currentIndex == 1) {
					printf("Name:%s Prise:%d Discount:%d\n", name[0], prises[0],  discount[0]);
				}
				if (currentIndex == 2) {
					printf("Name:%s Prise:%d Discount:%d\n", name[1], prises[1],   discount[1]);
				}
				if (currentIndex == 3) {
					printf("Name:%s Prise:%d  Discount:%d%\n", name[2], prises[2],   discount[2]);
				}
				if (currentIndex == 4) {
					printf("Name:%s Prise:%d Discount:%d\n", name[3], prises[3],  discount[3]);
				}
				break;
			}
			case 3: {
				if (currentIndex == 1) {
					count [0] ++;
					sum[0] = (prises[0] - prises[0] / 100 * discount[0]) * count[0];
				}
				if (currentIndex == 2) {
					count[1]++;
					sum[1] = (prises[1] - prises[1] / 100 * discount[1]) * count[1];
				}
				if (currentIndex == 3) {
					count[2]++;
					sum[2] = (prises[2] - prises[2] / 100 * discount[2]) * count[2];
				}
				if (currentIndex == 4) {
					count[3]++;
					sum[3] = (prises[3] - prises[3] / 100 * discount[3]) * count[3];
				}
				printf("Check updated\n");
				break;
			}
			case 4: {
				for (int i = 0; i < 4; ++i) {
					if (count[i] != 0) {
						printf("Name:%s Prise:%d Count:%d Sum:%d\n", name[i], prises[i], count[i], sum[i]);
					}
				}
				break;
			}
			case 5: {
				for (int i = 0; i < 4; ++i) {
					sum[4] += sum[i];
				}
				printf("Current sum:%d\n", sum[4]);
				break;
			}

		}
	}

}