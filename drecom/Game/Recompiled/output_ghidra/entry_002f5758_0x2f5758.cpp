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

// Function: entry_002f5758
// Address: 0x2f5758 - 0x2f5788
void entry_002f5758_0x2f5758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5758_0x2f5758");
#endif

    switch (ctx->pc) {
        case 0x2f5780u: goto label_2f5780;
        default: break;
    }

    ctx->pc = 0x2f5758u;

    // 0x2f5758: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f575c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2f5760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5764: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5764u;
    {
        const bool branch_taken_0x2f5764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5764) {
            ctx->pc = 0x2F5788u;
            return;
        }
    }
    ctx->pc = 0x2F576Cu;
    // 0x2f576c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5770: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f5770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5774: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f5778: 0xc0bd4cc  jal         func_2F5330
    ctx->pc = 0x2F5778u;
    SET_GPR_U32(ctx, 31, 0x2F5780u);
    ctx->pc = 0x2F5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5330u, 0x2F5778u, 0x2F5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5780u;
label_2f5780:
    // 0x2f5780: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5784: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x2f5784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    ctx->pc = 0x2f5788u;
}
