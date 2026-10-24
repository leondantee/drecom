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

// Function: entry_0015b4a8
// Address: 0x15b4a8 - 0x15b4c8
void entry_0015b4a8_0x15b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b4a8_0x15b4a8");
#endif

    ctx->pc = 0x15b4a8u;

    // 0x15b4a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x15b4ac: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x15b4b0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x15b4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b4b4: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x15B4B4u;
    {
        const bool branch_taken_0x15b4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b4b4) {
            ctx->pc = 0x15B3FCu;
            return;
        }
    }
    ctx->pc = 0x15B4BCu;
    // 0x15b4bc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15b4bcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b4c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15B4C0u;
    {
        const bool branch_taken_0x15b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4c0) {
            ctx->pc = 0x15B560u;
            return;
        }
    }
    ctx->pc = 0x15B4C8u;
}
