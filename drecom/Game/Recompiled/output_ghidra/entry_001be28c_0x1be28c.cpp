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

// Function: entry_001be28c
// Address: 0x1be28c - 0x1be2bc
void entry_001be28c_0x1be28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be28c_0x1be28c");
#endif

    switch (ctx->pc) {
        case 0x1be298u: goto label_1be298;
        default: break;
    }

    ctx->pc = 0x1be28cu;

    // 0x1be28c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1be28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1be290: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BE290u;
    SET_GPR_U32(ctx, 31, 0x1BE298u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BE290u, 0x1BE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE298u;
label_1be298:
    // 0x1be298: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be29c: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1be2a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE2A0u;
    {
        const bool branch_taken_0x1be2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2a0) {
            ctx->pc = 0x1BE2BCu;
            return;
        }
    }
    ctx->pc = 0x1BE2A8u;
    // 0x1be2a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1be2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be2b0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1be2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be2b4: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1BE2B4u;
    {
        const bool branch_taken_0x1be2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be2b4) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE2BCu;
}
