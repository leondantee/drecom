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

// Function: Em01s_R0_damage
// Address: 0x30a6b0 - 0x30a6f8
void Em01s_R0_damage_0x30a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R0_damage_0x30a6b0");
#endif

    switch (ctx->pc) {
        case 0x30a6b0u: goto label_30a6b0;
        case 0x30a6b4u: goto label_30a6b4;
        case 0x30a6b8u: goto label_30a6b8;
        case 0x30a6bcu: goto label_30a6bc;
        case 0x30a6c0u: goto label_30a6c0;
        case 0x30a6c4u: goto label_30a6c4;
        case 0x30a6c8u: goto label_30a6c8;
        case 0x30a6ccu: goto label_30a6cc;
        case 0x30a6d0u: goto label_30a6d0;
        case 0x30a6d4u: goto label_30a6d4;
        case 0x30a6d8u: goto label_30a6d8;
        case 0x30a6dcu: goto label_30a6dc;
        case 0x30a6e0u: goto label_30a6e0;
        case 0x30a6e4u: goto label_30a6e4;
        case 0x30a6e8u: goto label_30a6e8;
        case 0x30a6ecu: goto label_30a6ec;
        case 0x30a6f0u: goto label_30a6f0;
        case 0x30a6f4u: goto label_30a6f4;
        default: break;
    }

    ctx->pc = 0x30a6b0u;

label_30a6b0:
    // 0x30a6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30a6b4:
    // 0x30a6b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x30a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_30a6b8:
    // 0x30a6b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x30a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30a6bc:
    // 0x30a6bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30a6c0:
    // 0x30a6c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30a6c4:
    // 0x30a6c4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x30a6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30a6c8:
    // 0x30a6c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30a6cc:
    // 0x30a6cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30a6d0:
    // 0x30a6d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_30a6d4:
    // 0x30a6d4: 0x24429498  addiu       $v0, $v0, -0x6B68
    ctx->pc = 0x30a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939800));
label_30a6d8:
    // 0x30a6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30a6dc:
    // 0x30a6dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30a6e0:
    // 0x30a6e0: 0x40f809  jalr        $v0
label_30a6e4:
    if (ctx->pc == 0x30A6E4u) {
        ctx->pc = 0x30A6E8u;
        goto label_30a6e8;
    }
    ctx->pc = 0x30A6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30A6E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6E0u, 0x30A6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30A6E8u;
label_30a6e8:
    // 0x30a6e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30a6e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30a6ec:
    // 0x30a6ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30a6ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30a6f0:
    // 0x30a6f0: 0x3e00008  jr          $ra
label_30a6f4:
    if (ctx->pc == 0x30A6F4u) {
        ctx->pc = 0x30A6F8u;
        goto label_fallthrough_0x30a6f0;
    }
    ctx->pc = 0x30A6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30a6f0:
    ctx->pc = 0x30A6F8u;
}
