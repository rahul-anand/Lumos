#pragma once

#ifndef EXPORTED_SYMBOL
    #define EXPORTED_SYMBOL __attribute__((visibility("default")))
#endif
#ifndef IMPORTED_SYMBOL
    #define IMPORTED_SYMBOL
#endif

#ifndef PLATFORM_FUTEX_NATIVE_SUPPORT
    #define PLATFORM_FUTEX_NATIVE_SUPPORT 0
#endif

// Use patch for Apple LLVM version 8.0.0 (clang-800.0.38) through 9.0.0 (clang-900.0.37) which has a bug in the asm macro expansion
// of the __atomic_compare_exchange intrinstic for -O0 opt level. (see Baselib_Atomic_Gcc_Patch.h for more details).
// This will be removed once we can fail building with < 9.0.0.
#if (!defined(PLATFORM_USE_APPLE_LLVM_ATOMIC_CMPXCHG_128_PATCH)) && (!defined(NDEBUG)) && (__aarch64__) && (__clang__) && ((__clang_major__ < 9) && (__clang_major__ >= 8))
    #define PLATFORM_USE_APPLE_LLVM_ATOMIC_CMPXCHG_128_PATCH 1
#endif

// iOS armv7 has alignof(max_align_t) == 4
#ifndef PLATFORM_MEMORY_MALLOC_MIN_ALIGNMENT
    #if PLATFORM_ARCH_32
        #define PLATFORM_MEMORY_MALLOC_MIN_ALIGNMENT 8
    #endif
#endif
