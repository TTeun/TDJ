typedef struct twoByTwo {
	unsigned long long a;
	unsigned long long b;
	unsigned long long c;
	unsigned long long d;
} matrix22;

matrix22 matMult(matrix22 mat1, matrix22 mat2) { // mat1 * mat2
	matrix22 result;
	result.a = mat1.a * mat2.a + mat1.b * mat2.c;
	result.b = mat1.a * mat2.b + mat1.b * mat2.d;
	result.c = mat1.c * mat2.a + mat1.d * mat2.b;
	result.d = mat1.c * mat2.b + mat1.d * mat2.d;
	return result;
}

matrix22 matExp(matrix22 mat, unsigned long long exp) { // mat ^ exp
	matrix22 result = {1, 0, 0, 1}; // identity matrix
	while (exp) {
		if (exp % 2 == 1)
			result = matMult(result, mat);
		mat = matMult(mat, mat);
		exp >>= 1;
	}
	return result;
}

unsigned long long superfib(unsigned long long value) {
	matrix22 fibMatrix = {1, 1, 1, 0};
	return matExp(fibMatrix, value).b;

}
