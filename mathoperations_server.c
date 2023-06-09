/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "mathoperations.h"
#include "mathoperations_function.h"

int digito1 = 0;
int digito2 = 0;

int *
prepara_primer_digito_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;
	
	digito1 = *argp;

	return &result;
}

int *
prepara_segundo_digito_1_svc(int *argp, struct svc_req *rqstp)
{
	static int  result;

	digito2 = *argp;

	return &result;
}

int *
suma_remota_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = suma(digito1, digito2);

	return &result;
}

int *
resta_remota_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = resta(digito1, digito2);

	return &result;
}

int *
multiplicacion_remota_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = multiplicacion(digito1, digito2);

	return &result;
}

int *
division_remota_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	result = division(digito1, digito2);

	return &result;
}
