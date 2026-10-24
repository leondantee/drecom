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

// Function: Om86_R0_damage
// Address: 0x35a4c0 - 0x35a508
void Om86_R0_damage_0x35a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_R0_damage_0x35a4c0");
#endif

    switch (ctx->pc) {
        case 0x35a4c0u: goto label_35a4c0;
        case 0x35a4c4u: goto label_35a4c4;
        case 0x35a4c8u: goto label_35a4c8;
        case 0x35a4ccu: goto label_35a4cc;
        case 0x35a4d0u: goto label_35a4d0;
        case 0x35a4d4u: goto label_35a4d4;
        case 0x35a4d8u: goto label_35a4d8;
        case 0x35a4dcu: goto label_35a4dc;
        case 0x35a4e0u: goto label_35a4e0;
        case 0x35a4e4u: goto label_35a4e4;
        case 0x35a4e8u: goto label_35a4e8;
        case 0x35a4ecu: goto label_35a4ec;
        case 0x35a4f0u: goto label_35a4f0;
        case 0x35a4f4u: goto label_35a4f4;
        case 0x35a4f8u: goto label_35a4f8;
        case 0x35a4fcu: goto label_35a4fc;
        case 0x35a500u: goto label_35a500;
        case 0x35a504u: goto label_35a504;
        default: break;
    }

    ctx->pc = 0x35a4c0u;

label_35a4c0:
    // 0x35a4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35a4c4:
    // 0x35a4c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_35a4c8:
    // 0x35a4c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35a4cc:
    // 0x35a4cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a4d0:
    // 0x35a4d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35a4d4:
    // 0x35a4d4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x35a4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_35a4d8:
    // 0x35a4d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35a4dc:
    // 0x35a4dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35a4e0:
    // 0x35a4e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_35a4e4:
    // 0x35a4e4: 0x2442a8e8  addiu       $v0, $v0, -0x5718
    ctx->pc = 0x35a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945000));
label_35a4e8:
    // 0x35a4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35a4ec:
    // 0x35a4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35a4f0:
    // 0x35a4f0: 0x40f809  jalr        $v0
label_35a4f4:
    if (ctx->pc == 0x35A4F4u) {
        ctx->pc = 0x35A4F8u;
        goto label_35a4f8;
    }
    ctx->pc = 0x35A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35A4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A4F0u, 0x35A4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35A4F8u;
label_35a4f8:
    // 0x35a4f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35a4f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35a4fc:
    // 0x35a4fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35a4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35a500:
    // 0x35a500: 0x3e00008  jr          $ra
label_35a504:
    if (ctx->pc == 0x35A504u) {
        ctx->pc = 0x35A508u;
        goto label_fallthrough_0x35a500;
    }
    ctx->pc = 0x35A500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35a500:
    ctx->pc = 0x35A508u;
}
