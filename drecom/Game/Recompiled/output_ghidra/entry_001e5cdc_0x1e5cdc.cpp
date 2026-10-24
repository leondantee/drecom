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

// Function: entry_001e5cdc
// Address: 0x1e5cdc - 0x1e5d10
void entry_001e5cdc_0x1e5cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5cdc_0x1e5cdc");
#endif

    switch (ctx->pc) {
        case 0x1e5ce4u: goto label_1e5ce4;
        default: break;
    }

    ctx->pc = 0x1e5cdcu;

    // 0x1e5cdc: 0xc079648  jal         func_1E5920
    ctx->pc = 0x1E5CDCu;
    SET_GPR_U32(ctx, 31, 0x1E5CE4u);
    ctx->pc = 0x1E5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5920u, 0x1E5CDCu, 0x1E5CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CE4u;
label_1e5ce4:
    // 0x1e5ce4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5ce4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5ce8: 0x3f3bc  dsll32      $fp, $v1, 14
    ctx->pc = 0x1e5ce8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 14));
    // 0x1e5cec: 0x1ef3be  dsrl32      $fp, $fp, 14
    ctx->pc = 0x1e5cecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 14));
    // 0x1e5cf0: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CF0u;
    {
        const bool branch_taken_0x1e5cf0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cf0) {
            ctx->pc = 0x1E5D10u;
            return;
        }
    }
    ctx->pc = 0x1E5CF8u;
    // 0x1e5cf8: 0x27db021  addu        $s6, $s3, $sp
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5cfc: 0xa2c001b0  sb          $zero, 0x1B0($s6)
    ctx->pc = 0x1e5cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5d00: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5d04: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e5d04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e5d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5D08u;
    {
        const bool branch_taken_0x1e5d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d08) {
            ctx->pc = 0x1E5D18u;
            return;
        }
    }
    ctx->pc = 0x1E5D10u;
}
