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

// Function: entry_001acee8
// Address: 0x1acee8 - 0x1acef0
void entry_001acee8_0x1acee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acee8_0x1acee8");
#endif

    ctx->pc = 0x1acee8u;

    // 0x1acee8: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x1acee8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aceec: 0x0  nop
    ctx->pc = 0x1aceecu;
    // NOP
    ctx->pc = 0x1acef0u;
}
