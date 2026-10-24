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

// Function: Em03_R0_damage
// Address: 0x2c95b0 - 0x2c95f8
void Em03_R0_damage_0x2c95b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R0_damage_0x2c95b0");
#endif

    switch (ctx->pc) {
        case 0x2c95b0u: goto label_2c95b0;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c95bcu: goto label_2c95bc;
        case 0x2c95c0u: goto label_2c95c0;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c95ccu: goto label_2c95cc;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        default: break;
    }

    ctx->pc = 0x2c95b0u;

label_2c95b0:
    // 0x2c95b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c95b4:
    // 0x2c95b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c95b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2c95b8:
    // 0x2c95b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2c95bc:
    // 0x2c95bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c95bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2c95c0:
    // 0x2c95c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2c95c4:
    // 0x2c95c4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2c95c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2c95c8:
    // 0x2c95c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c95c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c95cc:
    // 0x2c95cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c95d0:
    // 0x2c95d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2c95d4:
    // 0x2c95d4: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
label_2c95d8:
    // 0x2c95d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c95dc:
    // 0x2c95dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c95e0:
    // 0x2c95e0: 0x40f809  jalr        $v0
label_2c95e4:
    if (ctx->pc == 0x2C95E4u) {
        ctx->pc = 0x2C95E8u;
        goto label_2c95e8;
    }
    ctx->pc = 0x2C95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C95E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95E0u, 0x2C95E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C95E8u;
label_2c95e8:
    // 0x2c95e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c95e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c95ec:
    // 0x2c95ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c95ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c95f0:
    // 0x2c95f0: 0x3e00008  jr          $ra
label_2c95f4:
    if (ctx->pc == 0x2C95F4u) {
        ctx->pc = 0x2C95F8u;
        goto label_fallthrough_0x2c95f0;
    }
    ctx->pc = 0x2C95F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c95f0:
    ctx->pc = 0x2C95F8u;
}
