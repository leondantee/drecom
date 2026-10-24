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

// Function: Em1a_R0_die
// Address: 0x360690 - 0x360704
void Em1a_R0_die_0x360690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_R0_die_0x360690");
#endif

    switch (ctx->pc) {
        case 0x360690u: goto label_360690;
        case 0x360694u: goto label_360694;
        case 0x360698u: goto label_360698;
        case 0x36069cu: goto label_36069c;
        case 0x3606a0u: goto label_3606a0;
        case 0x3606a4u: goto label_3606a4;
        case 0x3606a8u: goto label_3606a8;
        case 0x3606acu: goto label_3606ac;
        case 0x3606b0u: goto label_3606b0;
        case 0x3606b4u: goto label_3606b4;
        case 0x3606b8u: goto label_3606b8;
        case 0x3606bcu: goto label_3606bc;
        case 0x3606c0u: goto label_3606c0;
        case 0x3606c4u: goto label_3606c4;
        case 0x3606c8u: goto label_3606c8;
        case 0x3606ccu: goto label_3606cc;
        case 0x3606d0u: goto label_3606d0;
        case 0x3606d4u: goto label_3606d4;
        case 0x3606d8u: goto label_3606d8;
        case 0x3606dcu: goto label_3606dc;
        case 0x3606e0u: goto label_3606e0;
        case 0x3606e4u: goto label_3606e4;
        case 0x3606e8u: goto label_3606e8;
        case 0x3606ecu: goto label_3606ec;
        case 0x3606f0u: goto label_3606f0;
        case 0x3606f4u: goto label_3606f4;
        case 0x3606f8u: goto label_3606f8;
        case 0x3606fcu: goto label_3606fc;
        case 0x360700u: goto label_360700;
        default: break;
    }

    ctx->pc = 0x360690u;

label_360690:
    // 0x360690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_360694:
    // 0x360694: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x360694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_360698:
    // 0x360698: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x360698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36069c:
    // 0x36069c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3606a0:
    // 0x3606a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3606a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3606a4:
    // 0x3606a4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3606a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3606a8:
    // 0x3606a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3606a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3606ac:
    // 0x3606ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3606acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3606b0:
    // 0x3606b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3606b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3606b4:
    // 0x3606b4: 0x2442aba8  addiu       $v0, $v0, -0x5458
    ctx->pc = 0x3606b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945704));
label_3606b8:
    // 0x3606b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3606b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3606bc:
    // 0x3606bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3606bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3606c0:
    // 0x3606c0: 0x40f809  jalr        $v0
label_3606c4:
    if (ctx->pc == 0x3606C4u) {
        ctx->pc = 0x3606C8u;
        goto label_3606c8;
    }
    ctx->pc = 0x3606C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3606C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3606C0u, 0x3606C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3606C8u;
label_3606c8:
    // 0x3606c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3606c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3606cc:
    // 0x3606cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3606ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3606d0:
    // 0x3606d0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3606d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3606d4:
    // 0x3606d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3606d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3606d8:
    // 0x3606d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3606d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3606dc:
    // 0x3606dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3606dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3606e0:
    // 0x3606e0: 0x2442abb0  addiu       $v0, $v0, -0x5450
    ctx->pc = 0x3606e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945712));
label_3606e4:
    // 0x3606e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3606e8:
    // 0x3606e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3606e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3606ec:
    // 0x3606ec: 0x40f809  jalr        $v0
label_3606f0:
    if (ctx->pc == 0x3606F0u) {
        ctx->pc = 0x3606F4u;
        goto label_3606f4;
    }
    ctx->pc = 0x3606ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3606F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3606ECu, 0x3606F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3606F4u;
label_3606f4:
    // 0x3606f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3606f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3606f8:
    // 0x3606f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3606f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3606fc:
    // 0x3606fc: 0x3e00008  jr          $ra
label_360700:
    if (ctx->pc == 0x360700u) {
        ctx->pc = 0x360704u;
        goto label_fallthrough_0x3606fc;
    }
    ctx->pc = 0x3606FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3606FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3606fc:
    ctx->pc = 0x360704u;
}
