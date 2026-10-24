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

// Function: Ectrl_07
// Address: 0x2f59f0 - 0x2f5a34
void Ectrl_07_0x2f59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_07_0x2f59f0");
#endif

    switch (ctx->pc) {
        case 0x2f59f0u: goto label_2f59f0;
        case 0x2f59f4u: goto label_2f59f4;
        case 0x2f59f8u: goto label_2f59f8;
        case 0x2f59fcu: goto label_2f59fc;
        case 0x2f5a00u: goto label_2f5a00;
        case 0x2f5a04u: goto label_2f5a04;
        case 0x2f5a08u: goto label_2f5a08;
        case 0x2f5a0cu: goto label_2f5a0c;
        case 0x2f5a10u: goto label_2f5a10;
        case 0x2f5a14u: goto label_2f5a14;
        case 0x2f5a18u: goto label_2f5a18;
        case 0x2f5a1cu: goto label_2f5a1c;
        case 0x2f5a20u: goto label_2f5a20;
        case 0x2f5a24u: goto label_2f5a24;
        case 0x2f5a28u: goto label_2f5a28;
        case 0x2f5a2cu: goto label_2f5a2c;
        case 0x2f5a30u: goto label_2f5a30;
        default: break;
    }

    ctx->pc = 0x2f59f0u;

label_2f59f0:
    // 0x2f59f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f59f4:
    // 0x2f59f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f59f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2f59f8:
    // 0x2f59f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2f59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2f59fc:
    // 0x2f59fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2f59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f5a00:
    // 0x2f5a00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2f5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f5a04:
    // 0x2f5a04: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2f5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f5a08:
    // 0x2f5a08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f5a0c:
    // 0x2f5a0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2f5a10:
    // 0x2f5a10: 0x24428f50  addiu       $v0, $v0, -0x70B0
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938448));
label_2f5a14:
    // 0x2f5a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f5a18:
    // 0x2f5a18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5a1c:
    // 0x2f5a1c: 0x40f809  jalr        $v0
label_2f5a20:
    if (ctx->pc == 0x2F5A20u) {
        ctx->pc = 0x2F5A24u;
        goto label_2f5a24;
    }
    ctx->pc = 0x2F5A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F5A24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A1Cu, 0x2F5A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5A24u;
label_2f5a24:
    // 0x2f5a24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f5a24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5a28:
    // 0x2f5a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f5a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f5a2c:
    // 0x2f5a2c: 0x3e00008  jr          $ra
label_2f5a30:
    if (ctx->pc == 0x2F5A30u) {
        ctx->pc = 0x2F5A34u;
        goto label_fallthrough_0x2f5a2c;
    }
    ctx->pc = 0x2F5A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f5a2c:
    ctx->pc = 0x2F5A34u;
}
