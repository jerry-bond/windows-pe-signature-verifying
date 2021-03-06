#include <iostream>
#include "PeSignatureVerifier.h"

/**
* @returns: true iff given path is a folder, false otherwise.
*/
bool isFileAFolder(std::wstring aFileName);

/**
* @returns: true iff given path exists, false otherwise.
*/
bool isFileExists(std::wstring aFileName);

/**
* @returns: ERROR_SUCCESS iff file tested successfully, otherwise returns error code.
*/
DWORD CheckFile(std::wstring aFileName);

