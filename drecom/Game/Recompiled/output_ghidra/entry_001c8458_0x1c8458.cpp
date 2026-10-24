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

// Function: entry_001c8458
// Address: 0x1c8458 - 0x1c8480
void entry_001c8458_0x1c8458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8458_0x1c8458");
#endif

    switch (ctx->pc) {
        case 0x1c8478u: goto label_1c8478;
        default: break;
    }

    ctx->pc = 0x1c8458u;

    // 0x1c8458: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c845c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8460: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1c8460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1c8464: 0x24061e7d  addiu       $a2, $zero, 0x1E7D
    ctx->pc = 0x1c8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7805));
    // 0x1c8468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c846c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c8470: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C8470u;
    SET_GPR_U32(ctx, 31, 0x1C8478u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C8470u, 0x1C8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8478u;
label_1c8478:
    // 0x1c8478: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8478u;
    {
        const bool branch_taken_0x1c8478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8478) {
            ctx->pc = 0x1C84CCu;
            return;
        }
    }
    ctx->pc = 0x1C8480u;
}
