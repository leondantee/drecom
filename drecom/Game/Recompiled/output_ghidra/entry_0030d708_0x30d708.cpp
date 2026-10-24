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

// Function: entry_0030d708
// Address: 0x30d708 - 0x30d730
void entry_0030d708_0x30d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d708_0x30d708");
#endif

    switch (ctx->pc) {
        case 0x30d728u: goto label_30d728;
        default: break;
    }

    ctx->pc = 0x30d708u;

    // 0x30d708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d70c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d710: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d714: 0x24061405  addiu       $a2, $zero, 0x1405
    ctx->pc = 0x30d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5125));
    // 0x30d718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d71c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d720: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D720u;
    SET_GPR_U32(ctx, 31, 0x30D728u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D720u, 0x30D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D728u;
label_30d728:
    // 0x30d728: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D728u;
    {
        const bool branch_taken_0x30d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d728) {
            ctx->pc = 0x30D778u;
            return;
        }
    }
    ctx->pc = 0x30D730u;
}
