#include "ContactTree.h"

int main(){
	ContactTree A;
	/*A[15] = 0;
	A[21] = 1;
	A[9] = 2;
	A[14] = 3;
	A[19] = 4;
	A[27] = 5;
	A[17] = 6;
	A[16] = 7;
	A[10] = 8;
	A[5] = 9;
	A[7] = 10;
	A[22] = 11;
	A[24] = 12;
	A[23] = 13;
	A[29] = 14;
	A[31] = 15;
	A[42] = 16;*/
	A["pasha"] = "1254748";
	A["dasha"] = "1264587";
	A["glasha"] = "5843659";
	A["sasha"] = "65459855";
	A["chashbr"] = "5487845";

	A.editName("glasha", "petrosyan", getRoot(&A));
	A.editNumber("petrosyan", "125848", getRoot(&A));
	//A.showFromLeft(getRoot(&A));
	//A.searchByName("dasha", getRoot(&A));
	//A.searchByNumber("1254748", getRoot(&A));
	//A.deleteContact("chashbr");
	A.showFromLeft(getRoot(&A));
	return 0;
}