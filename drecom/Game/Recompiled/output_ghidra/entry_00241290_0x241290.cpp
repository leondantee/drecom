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

// Function: entry_00241290
// Address: 0x241290 - 0x2412b8
void entry_00241290_0x241290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241290_0x241290");
#endif

    switch (ctx->pc) {
        case 0x2412a0u: goto label_2412a0;
        default: break;
    }

    ctx->pc = 0x241290u;

    // 0x241290: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241294: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x241298: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x241298u;
    SET_GPR_U32(ctx, 31, 0x2412A0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x241298u, 0x2412A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2412A0u;
label_2412a0:
    // 0x2412a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2412A0u;
    {
        const bool branch_taken_0x2412a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412a0) {
            ctx->pc = 0x2412B8u;
            return;
        }
    }
    ctx->pc = 0x2412A8u;
    // 0x2412a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2412ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2412b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2412b4: 0xa0640070  sb          $a0, 0x70($v1)
    ctx->pc = 0x2412b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2412b8u;
}
