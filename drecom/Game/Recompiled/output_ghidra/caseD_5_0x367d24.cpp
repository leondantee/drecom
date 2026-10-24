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

// Function: caseD_5
// Address: 0x367d24 - 0x367d78
void caseD_5_0x367d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x367d24");
#endif

    switch (ctx->pc) {
        case 0x367d34u: goto label_367d34;
        case 0x367d44u: goto label_367d44;
        case 0x367d50u: goto label_367d50;
        default: break;
    }

    ctx->pc = 0x367d24u;

    // 0x367d24: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367d2c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367D2Cu;
    SET_GPR_U32(ctx, 31, 0x367D34u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367D2Cu, 0x367D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D34u;
label_367d34:
    // 0x367d34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367d3c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367D3Cu;
    SET_GPR_U32(ctx, 31, 0x367D44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367D3Cu, 0x367D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D44u;
label_367d44:
    // 0x367d44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d48: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367D48u;
    SET_GPR_U32(ctx, 31, 0x367D50u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367D48u, 0x367D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D50u;
label_367d50:
    // 0x367d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d54: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x367d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x367d58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x367D58u;
    {
        const bool branch_taken_0x367d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367d58) {
            ctx->pc = 0x367D78u;
            return;
        }
    }
    ctx->pc = 0x367D60u;
    // 0x367d60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d64: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x367d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x367d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x367d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x367d6c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x367d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x367d70: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x367D70u;
    {
        const bool branch_taken_0x367d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367d70) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367D78u;
}
