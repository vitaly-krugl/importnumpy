#include <assert.h>
#include <iostream>
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <numpy/arrayobject.h>


int main(int argc, char*argv[])
{

  if (!Py_IsInitialized())
  {
    std::cerr << "ZZZ Calling Py_Initialize..." << std::endl;
    Py_Initialize();
    std::cerr << "ZZZ Returned from Py_Initialize..." << std::endl;
    assert(Py_IsInitialized());
  }

  std::cerr << "ZZZ Calling import_array1..." << std::endl;
  import_array1(-1);
  std::cerr << "ZZZ Returned from import_array1" << std::endl;
 
  return 0;
}
