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

// Function: entry_0013a81c
// Address: 0x13a81c - 0x13a864
void entry_0013a81c_0x13a81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a81c_0x13a81c");
#endif

    switch (ctx->pc) {
        case 0x13a844u: goto label_13a844;
        default: break;
    }

    ctx->pc = 0x13a81cu;

    // 0x13a81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a820: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x13a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x13a824: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x13A824u;
    {
        const bool branch_taken_0x13a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a824) {
            ctx->pc = 0x13AB4Cu;
            return;
        }
    }
    ctx->pc = 0x13A82Cu;
    // 0x13a82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a830: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x13a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x13a834: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A834u;
    {
        const bool branch_taken_0x13a834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a834) {
            ctx->pc = 0x13A864u;
            return;
        }
    }
    ctx->pc = 0x13A83Cu;
    // 0x13a83c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x13A83Cu;
    SET_GPR_U32(ctx, 31, 0x13A844u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x13A83Cu, 0x13A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A844u;
label_13a844:
    // 0x13a844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13a844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a848: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x13a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x13a84c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a850: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x13a850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x13a854: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a858: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x13a85c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13a860: 0xac621b68  sw          $v0, 0x1B68($v1)
    ctx->pc = 0x13a860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 2));
    ctx->pc = 0x13a864u;
}
