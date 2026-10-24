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

// Function: Em1d_R0_damage
// Address: 0x371180 - 0x3711c8
void Em1d_R0_damage_0x371180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R0_damage_0x371180");
#endif

    switch (ctx->pc) {
        case 0x371180u: goto label_371180;
        case 0x371184u: goto label_371184;
        case 0x371188u: goto label_371188;
        case 0x37118cu: goto label_37118c;
        case 0x371190u: goto label_371190;
        case 0x371194u: goto label_371194;
        case 0x371198u: goto label_371198;
        case 0x37119cu: goto label_37119c;
        case 0x3711a0u: goto label_3711a0;
        case 0x3711a4u: goto label_3711a4;
        case 0x3711a8u: goto label_3711a8;
        case 0x3711acu: goto label_3711ac;
        case 0x3711b0u: goto label_3711b0;
        case 0x3711b4u: goto label_3711b4;
        case 0x3711b8u: goto label_3711b8;
        case 0x3711bcu: goto label_3711bc;
        case 0x3711c0u: goto label_3711c0;
        case 0x3711c4u: goto label_3711c4;
        default: break;
    }

    ctx->pc = 0x371180u;

label_371180:
    // 0x371180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_371184:
    // 0x371184: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x371184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_371188:
    // 0x371188: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x371188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37118c:
    // 0x37118c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_371190:
    // 0x371190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x371190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_371194:
    // 0x371194: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x371194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_371198:
    // 0x371198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37119c:
    // 0x37119c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37119cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3711a0:
    // 0x3711a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3711a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3711a4:
    // 0x3711a4: 0x2442b518  addiu       $v0, $v0, -0x4AE8
    ctx->pc = 0x3711a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948120));
label_3711a8:
    // 0x3711a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3711a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3711ac:
    // 0x3711ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3711acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3711b0:
    // 0x3711b0: 0x40f809  jalr        $v0
label_3711b4:
    if (ctx->pc == 0x3711B4u) {
        ctx->pc = 0x3711B8u;
        goto label_3711b8;
    }
    ctx->pc = 0x3711B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3711B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3711B0u, 0x3711B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3711B8u;
label_3711b8:
    // 0x3711b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3711b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3711bc:
    // 0x3711bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3711bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3711c0:
    // 0x3711c0: 0x3e00008  jr          $ra
label_3711c4:
    if (ctx->pc == 0x3711C4u) {
        ctx->pc = 0x3711C8u;
        goto label_fallthrough_0x3711c0;
    }
    ctx->pc = 0x3711C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3711C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3711c0:
    ctx->pc = 0x3711C8u;
}
