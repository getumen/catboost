#ifdef USE_PYTHON3
#include <contrib/python/numpy/py3/numpy/core/src/common/simd/avx512/maskop.h>
#else
#error #include <contrib/python/numpy/py2/numpy/core/src/common/simd/avx512/maskop.h>
#endif