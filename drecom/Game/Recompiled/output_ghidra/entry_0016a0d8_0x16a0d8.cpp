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

// Function: entry_0016a0d8
// Address: 0x16a0d8 - 0x16a0ec
void entry_0016a0d8_0x16a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0d8_0x16a0d8");
#endif

    ctx->pc = 0x16a0d8u;

    // 0x16a0d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16a0d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a0dc: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x16a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a0e0: 0x7200f628  paddub      $fp, $s0, $zero
    ctx->pc = 0x16a0e0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A0E4u;
    {
        const bool branch_taken_0x16a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0e4) {
            ctx->pc = 0x16A108u;
            return;
        }
    }
    ctx->pc = 0x16A0ECu;
}
