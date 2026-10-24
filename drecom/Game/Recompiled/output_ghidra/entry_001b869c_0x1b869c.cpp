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

// Function: entry_001b869c
// Address: 0x1b869c - 0x1b86dc
void entry_001b869c_0x1b869c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b869c_0x1b869c");
#endif

    switch (ctx->pc) {
        case 0x1b86d0u: goto label_1b86d0;
        default: break;
    }

    ctx->pc = 0x1b869cu;

    // 0x1b869c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b86a0: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1b86a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B86A4u;
    {
        const bool branch_taken_0x1b86a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86a4) {
            ctx->pc = 0x1B86DCu;
            return;
        }
    }
    ctx->pc = 0x1B86ACu;
    // 0x1b86ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b86acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b86b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b86b4: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1b86b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1b86b8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1b86b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b86bc: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1b86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1b86c0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b86c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b86c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b86c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b86c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B86C8u;
    SET_GPR_U32(ctx, 31, 0x1B86D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B86C8u, 0x1B86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86D0u;
label_1b86d0:
    // 0x1b86d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b86d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b86d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B86D4u;
    {
        const bool branch_taken_0x1b86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b86d4) {
            ctx->pc = 0x1B8700u;
            return;
        }
    }
    ctx->pc = 0x1B86DCu;
}
