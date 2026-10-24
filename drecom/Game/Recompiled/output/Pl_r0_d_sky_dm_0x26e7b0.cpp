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

// Function: Pl_r0_d_sky_dm
// Address: 0x26e7b0 - 0x26e810
void Pl_r0_d_sky_dm_0x26e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_d_sky_dm_0x26e7b0");
#endif

    switch (ctx->pc) {
        case 0x26e7b0u: goto label_26e7b0;
        case 0x26e7b4u: goto label_26e7b4;
        case 0x26e7b8u: goto label_26e7b8;
        case 0x26e7bcu: goto label_26e7bc;
        case 0x26e7c0u: goto label_26e7c0;
        case 0x26e7c4u: goto label_26e7c4;
        case 0x26e7c8u: goto label_26e7c8;
        case 0x26e7ccu: goto label_26e7cc;
        case 0x26e7d0u: goto label_26e7d0;
        case 0x26e7d4u: goto label_26e7d4;
        case 0x26e7d8u: goto label_26e7d8;
        case 0x26e7dcu: goto label_26e7dc;
        case 0x26e7e0u: goto label_26e7e0;
        case 0x26e7e4u: goto label_26e7e4;
        case 0x26e7e8u: goto label_26e7e8;
        case 0x26e7ecu: goto label_26e7ec;
        case 0x26e7f0u: goto label_26e7f0;
        case 0x26e7f4u: goto label_26e7f4;
        case 0x26e7f8u: goto label_26e7f8;
        case 0x26e7fcu: goto label_26e7fc;
        case 0x26e800u: goto label_26e800;
        case 0x26e804u: goto label_26e804;
        case 0x26e808u: goto label_26e808;
        case 0x26e80cu: goto label_26e80c;
        default: break;
    }

    ctx->pc = 0x26e7b0u;

label_26e7b0:
    // 0x26e7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26e7b4:
    // 0x26e7b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x26e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_26e7b8:
    // 0x26e7b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x26e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_26e7bc:
    // 0x26e7bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26e7c0:
    // 0x26e7c0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_26e7c4:
    // 0x26e7c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_26e7c8:
    // 0x26e7c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26e7cc:
    // 0x26e7cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26e7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_26e7d0:
    // 0x26e7d0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_26e7d4:
    // 0x26e7d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x26e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26e7d8:
    // 0x26e7d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_26e7dc:
    // 0x26e7dc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26e7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26e7e0:
    // 0x26e7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26e7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_26e7e4:
    // 0x26e7e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26e7e8:
    // 0x26e7e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x26e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_26e7ec:
    // 0x26e7ec: 0x2442be70  addiu       $v0, $v0, -0x4190
    ctx->pc = 0x26e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950512));
label_26e7f0:
    // 0x26e7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26e7f4:
    // 0x26e7f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e7f8:
    // 0x26e7f8: 0x40f809  jalr        $v0
label_26e7fc:
    if (ctx->pc == 0x26E7FCu) {
        ctx->pc = 0x26E800u;
        goto label_26e800;
    }
    ctx->pc = 0x26E7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26E800u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7F8u, 0x26E800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E800u;
label_26e800:
    // 0x26e800: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26e800u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26e804:
    // 0x26e804: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26e804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26e808:
    // 0x26e808: 0x3e00008  jr          $ra
label_26e80c:
    if (ctx->pc == 0x26E80Cu) {
        ctx->pc = 0x26E810u;
        goto label_fallthrough_0x26e808;
    }
    ctx->pc = 0x26E808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26e808:
    ctx->pc = 0x26E810u;
}
