/*
#include<windows.h>
#include<iostream>

using namespace std;
void DebuggerDetected() {
	MessageBox(NULL, "stop debugging", "stop debugging", MB_OK);
	exit(-1);
}

#ifdef _WIN64
#pragma comment (linker,"/INCLUDE:_tls_used")
#else
#pragma comment (linker,"/INCLUDE:__tls_used")
#endif

void NTAPI tls_callback(PVOID DLLHandle, DWORD dwReason, PVOID pv);

#ifdef _WIN64
#pragma const_seg(".CRT$XLF")
#else
#pragma data_seg(".CRT$XLF")
#endif
PIMAGE_TLS_CALLBACK p_thread_callback = tls_callback;
#ifdef _WIN64
#pragma const_seg()
#else
#pragma data_seg()
#endif
LARGE_INTEGER starttime = {0};
LARGE_INTEGER endtime = {100000};

//tls_callback is called before the main function
void NTAPI tls_callback(PVOID DLLHandle, DWORD dwReason, PVOID pv) {
	QueryPerformanceCounter(&starttime);
	//cout << starttime.LowPart<<"\n";
}


int main() {
	QueryPerformanceCounter(&endtime);
	//cout << endtime.LowPart - starttime.LowPart << "\n";
	if (endtime.LowPart - starttime.LowPart > 10000) {
		DebuggerDetected();
	}
	MessageBox(NULL, (LPCSTR)"hello from main", (LPCSTR)"main", 0);
	return 0;
}*/