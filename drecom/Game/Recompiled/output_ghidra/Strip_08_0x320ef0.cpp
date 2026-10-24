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

// Function: Strip_08
// Address: 0x320ef0 - 0x320f34
void Strip_08_0x320ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_08_0x320ef0");
#endif

    switch (ctx->pc) {
        case 0x320ef0u: goto label_320ef0;
        case 0x320ef4u: goto label_320ef4;
        case 0x320ef8u: goto label_320ef8;
        case 0x320efcu: goto label_320efc;
        case 0x320f00u: goto label_320f00;
        case 0x320f04u: goto label_320f04;
        case 0x320f08u: goto label_320f08;
        case 0x320f0cu: goto label_320f0c;
        case 0x320f10u: goto label_320f10;
        case 0x320f14u: goto label_320f14;
        case 0x320f18u: goto label_320f18;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f20u: goto label_320f20;
        case 0x320f24u: goto label_320f24;
        case 0x320f28u: goto label_320f28;
        case 0x320f2cu: goto label_320f2c;
        case 0x320f30u: goto label_320f30;
        default: break;
    }

    ctx->pc = 0x320ef0u;

label_320ef0:
    // 0x320ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_320ef4:
    // 0x320ef4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x320ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_320ef8:
    // 0x320ef8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x320ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_320efc:
    // 0x320efc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x320efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_320f00:
    // 0x320f00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x320f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_320f04:
    // 0x320f04: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x320f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_320f08:
    // 0x320f08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x320f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_320f0c:
    // 0x320f0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x320f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_320f10:
    // 0x320f10: 0x24429d98  addiu       $v0, $v0, -0x6268
    ctx->pc = 0x320f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942104));
label_320f14:
    // 0x320f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_320f18:
    // 0x320f18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x320f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_320f1c:
    // 0x320f1c: 0x40f809  jalr        $v0
label_320f20:
    if (ctx->pc == 0x320F20u) {
        ctx->pc = 0x320F24u;
        goto label_320f24;
    }
    ctx->pc = 0x320F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320F24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F1Cu, 0x320F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320F24u;
label_320f24:
    // 0x320f24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x320f24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_320f28:
    // 0x320f28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x320f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_320f2c:
    // 0x320f2c: 0x3e00008  jr          $ra
label_320f30:
    if (ctx->pc == 0x320F30u) {
        ctx->pc = 0x320F34u;
        goto label_fallthrough_0x320f2c;
    }
    ctx->pc = 0x320F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320f2c:
    ctx->pc = 0x320F34u;
}
