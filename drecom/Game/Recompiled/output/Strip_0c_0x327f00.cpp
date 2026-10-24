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

// Function: Strip_0c
// Address: 0x327f00 - 0x327f44
void Strip_0c_0x327f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_0c_0x327f00");
#endif

    switch (ctx->pc) {
        case 0x327f00u: goto label_327f00;
        case 0x327f04u: goto label_327f04;
        case 0x327f08u: goto label_327f08;
        case 0x327f0cu: goto label_327f0c;
        case 0x327f10u: goto label_327f10;
        case 0x327f14u: goto label_327f14;
        case 0x327f18u: goto label_327f18;
        case 0x327f1cu: goto label_327f1c;
        case 0x327f20u: goto label_327f20;
        case 0x327f24u: goto label_327f24;
        case 0x327f28u: goto label_327f28;
        case 0x327f2cu: goto label_327f2c;
        case 0x327f30u: goto label_327f30;
        case 0x327f34u: goto label_327f34;
        case 0x327f38u: goto label_327f38;
        case 0x327f3cu: goto label_327f3c;
        case 0x327f40u: goto label_327f40;
        default: break;
    }

    ctx->pc = 0x327f00u;

label_327f00:
    // 0x327f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_327f04:
    // 0x327f04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x327f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_327f08:
    // 0x327f08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x327f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_327f0c:
    // 0x327f0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x327f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_327f10:
    // 0x327f10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x327f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_327f14:
    // 0x327f14: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x327f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_327f18:
    // 0x327f18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x327f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_327f1c:
    // 0x327f1c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x327f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_327f20:
    // 0x327f20: 0x2442a1e0  addiu       $v0, $v0, -0x5E20
    ctx->pc = 0x327f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
label_327f24:
    // 0x327f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_327f28:
    // 0x327f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_327f2c:
    // 0x327f2c: 0x40f809  jalr        $v0
label_327f30:
    if (ctx->pc == 0x327F30u) {
        ctx->pc = 0x327F34u;
        goto label_327f34;
    }
    ctx->pc = 0x327F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327F34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327F2Cu, 0x327F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327F34u;
label_327f34:
    // 0x327f34: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x327f34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_327f38:
    // 0x327f38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x327f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_327f3c:
    // 0x327f3c: 0x3e00008  jr          $ra
label_327f40:
    if (ctx->pc == 0x327F40u) {
        ctx->pc = 0x327F44u;
        goto label_fallthrough_0x327f3c;
    }
    ctx->pc = 0x327F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x327f3c:
    ctx->pc = 0x327F44u;
}
