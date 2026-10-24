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

// Function: entry_001d77e8
// Address: 0x1d77e8 - 0x1d77fc
void entry_001d77e8_0x1d77e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d77e8_0x1d77e8");
#endif

    ctx->pc = 0x1d77e8u;

    // 0x1d77e8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1d77e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d77ec: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x1d77ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d77f0: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x1d77f0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1d77f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D77F4u;
    {
        const bool branch_taken_0x1d77f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77f4) {
            ctx->pc = 0x1D7878u;
            return;
        }
    }
    ctx->pc = 0x1D77FCu;
}
