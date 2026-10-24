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

// Function: entry_0012dae0
// Address: 0x12dae0 - 0x12db08
void entry_0012dae0_0x12dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dae0_0x12dae0");
#endif

    switch (ctx->pc) {
        case 0x12db00u: goto label_12db00;
        default: break;
    }

    ctx->pc = 0x12dae0u;

    // 0x12dae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dae4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dae8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12daec: 0x24063c14  addiu       $a2, $zero, 0x3C14
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15380));
    // 0x12daf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12daf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12daf8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DAF8u;
    SET_GPR_U32(ctx, 31, 0x12DB00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DAF8u, 0x12DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB00u;
label_12db00:
    // 0x12db00: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12DB00u;
    {
        const bool branch_taken_0x12db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db00) {
            ctx->pc = 0x12DB74u;
            return;
        }
    }
    ctx->pc = 0x12DB08u;
}
