#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0019ecb8
// Address: 0x19ecb8 - 0x19ecbc
void entry_0019ecb8_0x19ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ecb8_0x19ecb8");
#endif

    ctx->pc = 0x19ecb8u;

    // 0x19ecb8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x19ecb8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x19ecbcu;
}
