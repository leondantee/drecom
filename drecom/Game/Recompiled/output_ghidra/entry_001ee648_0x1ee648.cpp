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

// Function: entry_001ee648
// Address: 0x1ee648 - 0x1ee688
void entry_001ee648_0x1ee648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee648_0x1ee648");
#endif

    switch (ctx->pc) {
        case 0x1ee680u: goto label_1ee680;
        default: break;
    }

    ctx->pc = 0x1ee648u;

    // 0x1ee648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee64c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee650: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee654: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee658: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE658u;
    {
        const bool branch_taken_0x1ee658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee658) {
            ctx->pc = 0x1EE688u;
            return;
        }
    }
    ctx->pc = 0x1EE660u;
    // 0x1ee660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee664: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee668: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee66c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1ee66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1ee670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee674: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee678: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE678u;
    SET_GPR_U32(ctx, 31, 0x1EE680u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE678u, 0x1EE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE680u;
label_1ee680:
    // 0x1ee680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE680u;
    {
        const bool branch_taken_0x1ee680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee680) {
            ctx->pc = 0x1EE6A8u;
            return;
        }
    }
    ctx->pc = 0x1EE688u;
}
