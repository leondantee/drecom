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

// Function: entry_001d7bf8
// Address: 0x1d7bf8 - 0x1d7c0c
void entry_001d7bf8_0x1d7bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7bf8_0x1d7bf8");
#endif

    ctx->pc = 0x1d7bf8u;

    // 0x1d7bf8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d7bf8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7bfc: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x1d7bfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d7c00: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x1d7c00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1d7c04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D7C04u;
    {
        const bool branch_taken_0x1d7c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c04) {
            ctx->pc = 0x1D7C88u;
            return;
        }
    }
    ctx->pc = 0x1D7C0Cu;
}
