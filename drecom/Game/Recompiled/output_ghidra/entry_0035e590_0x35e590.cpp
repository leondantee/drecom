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

// Function: entry_0035e590
// Address: 0x35e590 - 0x35e598
void entry_0035e590_0x35e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e590_0x35e590");
#endif

    ctx->pc = 0x35e590u;

    // 0x35e590: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x35e590u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e594: 0x0  nop
    ctx->pc = 0x35e594u;
    // NOP
    ctx->pc = 0x35e598u;
}
