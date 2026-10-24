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

// Function: entry_001ca074
// Address: 0x1ca074 - 0x1ca09c
void entry_001ca074_0x1ca074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca074_0x1ca074");
#endif

    switch (ctx->pc) {
        case 0x1ca094u: goto label_1ca094;
        default: break;
    }

    ctx->pc = 0x1ca074u;

    // 0x1ca074: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca080: 0x24060791  addiu       $a2, $zero, 0x791
    ctx->pc = 0x1ca080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
    // 0x1ca084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca08c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA08Cu;
    SET_GPR_U32(ctx, 31, 0x1CA094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA08Cu, 0x1CA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA094u;
label_1ca094:
    // 0x1ca094: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA094u;
    {
        const bool branch_taken_0x1ca094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca094) {
            ctx->pc = 0x1CA0BCu;
            return;
        }
    }
    ctx->pc = 0x1CA09Cu;
}
