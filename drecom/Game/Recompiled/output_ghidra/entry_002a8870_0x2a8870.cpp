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

// Function: entry_002a8870
// Address: 0x2a8870 - 0x2a8888
void entry_002a8870_0x2a8870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8870_0x2a8870");
#endif

    ctx->pc = 0x2a8870u;

    // 0x2a8870: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2a8870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2a8874: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2a8874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2a8878: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a8878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a887c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2A887Cu;
    {
        const bool branch_taken_0x2a887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a887c) {
            ctx->pc = 0x2A8778u;
            return;
        }
    }
    ctx->pc = 0x2A8884u;
    // 0x2a8884: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2a8884u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a8888u;
}
