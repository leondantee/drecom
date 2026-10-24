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

// Function: Em24_R0_move
// Address: 0x359590 - 0x359604
void Em24_R0_move_0x359590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em24_R0_move_0x359590");
#endif

    switch (ctx->pc) {
        case 0x359590u: goto label_359590;
        case 0x359594u: goto label_359594;
        case 0x359598u: goto label_359598;
        case 0x35959cu: goto label_35959c;
        case 0x3595a0u: goto label_3595a0;
        case 0x3595a4u: goto label_3595a4;
        case 0x3595a8u: goto label_3595a8;
        case 0x3595acu: goto label_3595ac;
        case 0x3595b0u: goto label_3595b0;
        case 0x3595b4u: goto label_3595b4;
        case 0x3595b8u: goto label_3595b8;
        case 0x3595bcu: goto label_3595bc;
        case 0x3595c0u: goto label_3595c0;
        case 0x3595c4u: goto label_3595c4;
        case 0x3595c8u: goto label_3595c8;
        case 0x3595ccu: goto label_3595cc;
        case 0x3595d0u: goto label_3595d0;
        case 0x3595d4u: goto label_3595d4;
        case 0x3595d8u: goto label_3595d8;
        case 0x3595dcu: goto label_3595dc;
        case 0x3595e0u: goto label_3595e0;
        case 0x3595e4u: goto label_3595e4;
        case 0x3595e8u: goto label_3595e8;
        case 0x3595ecu: goto label_3595ec;
        case 0x3595f0u: goto label_3595f0;
        case 0x3595f4u: goto label_3595f4;
        case 0x3595f8u: goto label_3595f8;
        case 0x3595fcu: goto label_3595fc;
        case 0x359600u: goto label_359600;
        default: break;
    }

    ctx->pc = 0x359590u;

label_359590:
    // 0x359590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359594:
    // 0x359594: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_359598:
    // 0x359598: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35959c:
    // 0x35959c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3595a0:
    // 0x3595a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3595a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3595a4:
    // 0x3595a4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3595a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3595a8:
    // 0x3595a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3595a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3595ac:
    // 0x3595ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3595acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3595b0:
    // 0x3595b0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3595b4:
    // 0x3595b4: 0x2442a7d8  addiu       $v0, $v0, -0x5828
    ctx->pc = 0x3595b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944728));
label_3595b8:
    // 0x3595b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3595b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3595bc:
    // 0x3595bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3595bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3595c0:
    // 0x3595c0: 0x40f809  jalr        $v0
label_3595c4:
    if (ctx->pc == 0x3595C4u) {
        ctx->pc = 0x3595C8u;
        goto label_3595c8;
    }
    ctx->pc = 0x3595C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3595C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595C0u, 0x3595C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3595C8u;
label_3595c8:
    // 0x3595c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3595c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3595cc:
    // 0x3595cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3595ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3595d0:
    // 0x3595d0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3595d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3595d4:
    // 0x3595d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3595d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3595d8:
    // 0x3595d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3595d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3595dc:
    // 0x3595dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3595e0:
    // 0x3595e0: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x3595e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_3595e4:
    // 0x3595e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3595e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3595e8:
    // 0x3595e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3595e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3595ec:
    // 0x3595ec: 0x40f809  jalr        $v0
label_3595f0:
    if (ctx->pc == 0x3595F0u) {
        ctx->pc = 0x3595F4u;
        goto label_3595f4;
    }
    ctx->pc = 0x3595ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3595F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595ECu, 0x3595F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3595F4u;
label_3595f4:
    // 0x3595f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3595f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3595f8:
    // 0x3595f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3595f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3595fc:
    // 0x3595fc: 0x3e00008  jr          $ra
label_359600:
    if (ctx->pc == 0x359600u) {
        ctx->pc = 0x359604u;
        goto label_fallthrough_0x3595fc;
    }
    ctx->pc = 0x3595FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3595FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3595fc:
    ctx->pc = 0x359604u;
}
