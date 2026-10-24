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

// Function: ectrl17_move
// Address: 0x358cd0 - 0x358d14
void ectrl17_move_0x358cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl17_move_0x358cd0");
#endif

    switch (ctx->pc) {
        case 0x358cd0u: goto label_358cd0;
        case 0x358cd4u: goto label_358cd4;
        case 0x358cd8u: goto label_358cd8;
        case 0x358cdcu: goto label_358cdc;
        case 0x358ce0u: goto label_358ce0;
        case 0x358ce4u: goto label_358ce4;
        case 0x358ce8u: goto label_358ce8;
        case 0x358cecu: goto label_358cec;
        case 0x358cf0u: goto label_358cf0;
        case 0x358cf4u: goto label_358cf4;
        case 0x358cf8u: goto label_358cf8;
        case 0x358cfcu: goto label_358cfc;
        case 0x358d00u: goto label_358d00;
        case 0x358d04u: goto label_358d04;
        case 0x358d08u: goto label_358d08;
        case 0x358d0cu: goto label_358d0c;
        case 0x358d10u: goto label_358d10;
        default: break;
    }

    ctx->pc = 0x358cd0u;

label_358cd0:
    // 0x358cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_358cd4:
    // 0x358cd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x358cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_358cd8:
    // 0x358cd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x358cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_358cdc:
    // 0x358cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x358cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_358ce0:
    // 0x358ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x358ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_358ce4:
    // 0x358ce4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x358ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358ce8:
    // 0x358ce8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x358ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_358cec:
    // 0x358cec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x358cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_358cf0:
    // 0x358cf0: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x358cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
label_358cf4:
    // 0x358cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_358cf8:
    // 0x358cf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x358cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_358cfc:
    // 0x358cfc: 0x40f809  jalr        $v0
label_358d00:
    if (ctx->pc == 0x358D00u) {
        ctx->pc = 0x358D04u;
        goto label_358d04;
    }
    ctx->pc = 0x358CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x358D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358CFCu, 0x358D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358D04u;
label_358d04:
    // 0x358d04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x358d04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358d08:
    // 0x358d08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x358d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_358d0c:
    // 0x358d0c: 0x3e00008  jr          $ra
label_358d10:
    if (ctx->pc == 0x358D10u) {
        ctx->pc = 0x358D14u;
        goto label_fallthrough_0x358d0c;
    }
    ctx->pc = 0x358D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x358d0c:
    ctx->pc = 0x358D14u;
}
