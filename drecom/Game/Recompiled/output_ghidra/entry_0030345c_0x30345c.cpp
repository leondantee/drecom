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

// Function: entry_0030345c
// Address: 0x30345c - 0x303484
void entry_0030345c_0x30345c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030345c_0x30345c");
#endif

    switch (ctx->pc) {
        case 0x30347cu: goto label_30347c;
        default: break;
    }

    ctx->pc = 0x30345cu;

    // 0x30345c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303460: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303464: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x303468: 0x24060a06  addiu       $a2, $zero, 0xA06
    ctx->pc = 0x303468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
    // 0x30346c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303470: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303474: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303474u;
    SET_GPR_U32(ctx, 31, 0x30347Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303474u, 0x30347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30347Cu;
label_30347c:
    // 0x30347c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30347Cu;
    {
        const bool branch_taken_0x30347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30347c) {
            ctx->pc = 0x3034A4u;
            return;
        }
    }
    ctx->pc = 0x303484u;
}
