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

// Function: entry_001b54e8
// Address: 0x1b54e8 - 0x1b5504
void entry_001b54e8_0x1b54e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b54e8_0x1b54e8");
#endif

    ctx->pc = 0x1b54e8u;

    // 0x1b54e8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b54ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b54f0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B54F0u;
    {
        const bool branch_taken_0x1b54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54f0) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B54F8u;
    // 0x1b54f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b54fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B54FCu;
    {
        const bool branch_taken_0x1b54fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b54fc) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B5504u;
}
