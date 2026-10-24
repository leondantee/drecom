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

// Function: Strip_07
// Address: 0x320110 - 0x320154
void Strip_07_0x320110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Strip_07_0x320110");
#endif

    switch (ctx->pc) {
        case 0x320110u: goto label_320110;
        case 0x320114u: goto label_320114;
        case 0x320118u: goto label_320118;
        case 0x32011cu: goto label_32011c;
        case 0x320120u: goto label_320120;
        case 0x320124u: goto label_320124;
        case 0x320128u: goto label_320128;
        case 0x32012cu: goto label_32012c;
        case 0x320130u: goto label_320130;
        case 0x320134u: goto label_320134;
        case 0x320138u: goto label_320138;
        case 0x32013cu: goto label_32013c;
        case 0x320140u: goto label_320140;
        case 0x320144u: goto label_320144;
        case 0x320148u: goto label_320148;
        case 0x32014cu: goto label_32014c;
        case 0x320150u: goto label_320150;
        default: break;
    }

    ctx->pc = 0x320110u;

label_320110:
    // 0x320110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_320114:
    // 0x320114: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x320114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_320118:
    // 0x320118: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x320118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_32011c:
    // 0x32011c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x32011cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_320120:
    // 0x320120: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_320124:
    // 0x320124: 0x8c420358  lw          $v0, 0x358($v0)
    ctx->pc = 0x320124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
label_320128:
    // 0x320128: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x320128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32012c:
    // 0x32012c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_320130:
    // 0x320130: 0x24429d88  addiu       $v0, $v0, -0x6278
    ctx->pc = 0x320130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942088));
label_320134:
    // 0x320134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_320138:
    // 0x320138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32013c:
    // 0x32013c: 0x40f809  jalr        $v0
label_320140:
    if (ctx->pc == 0x320140u) {
        ctx->pc = 0x320144u;
        goto label_320144;
    }
    ctx->pc = 0x32013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32013Cu, 0x320144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320144u;
label_320144:
    // 0x320144: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x320144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_320148:
    // 0x320148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x320148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32014c:
    // 0x32014c: 0x3e00008  jr          $ra
label_320150:
    if (ctx->pc == 0x320150u) {
        ctx->pc = 0x320154u;
        goto label_fallthrough_0x32014c;
    }
    ctx->pc = 0x32014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32014c:
    ctx->pc = 0x320154u;
}
