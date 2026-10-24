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

// Function: Om8b_move
// Address: 0x33f790 - 0x33f7e8
void Om8b_move_0x33f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_move_0x33f790");
#endif

    switch (ctx->pc) {
        case 0x33f790u: goto label_33f790;
        case 0x33f794u: goto label_33f794;
        case 0x33f798u: goto label_33f798;
        case 0x33f79cu: goto label_33f79c;
        case 0x33f7a0u: goto label_33f7a0;
        case 0x33f7a4u: goto label_33f7a4;
        case 0x33f7a8u: goto label_33f7a8;
        case 0x33f7acu: goto label_33f7ac;
        case 0x33f7b0u: goto label_33f7b0;
        case 0x33f7b4u: goto label_33f7b4;
        case 0x33f7b8u: goto label_33f7b8;
        case 0x33f7bcu: goto label_33f7bc;
        case 0x33f7c0u: goto label_33f7c0;
        case 0x33f7c4u: goto label_33f7c4;
        case 0x33f7c8u: goto label_33f7c8;
        case 0x33f7ccu: goto label_33f7cc;
        case 0x33f7d0u: goto label_33f7d0;
        case 0x33f7d4u: goto label_33f7d4;
        case 0x33f7d8u: goto label_33f7d8;
        case 0x33f7dcu: goto label_33f7dc;
        case 0x33f7e0u: goto label_33f7e0;
        case 0x33f7e4u: goto label_33f7e4;
        default: break;
    }

    ctx->pc = 0x33f790u;

label_33f790:
    // 0x33f790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33f794:
    // 0x33f794: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_33f798:
    // 0x33f798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33f79c:
    // 0x33f79c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_33f7a0:
    // 0x33f7a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_33f7a4:
    // 0x33f7a4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x33f7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_33f7a8:
    // 0x33f7a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x33f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_33f7ac:
    // 0x33f7ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_33f7b0:
    // 0x33f7b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33f7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_33f7b4:
    // 0x33f7b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33f7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_33f7b8:
    // 0x33f7b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33f7bc:
    // 0x33f7bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_33f7c0:
    // 0x33f7c0: 0x2442a210  addiu       $v0, $v0, -0x5DF0
    ctx->pc = 0x33f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
label_33f7c4:
    // 0x33f7c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33f7c8:
    // 0x33f7c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f7cc:
    // 0x33f7cc: 0x40f809  jalr        $v0
label_33f7d0:
    if (ctx->pc == 0x33F7D0u) {
        ctx->pc = 0x33F7D4u;
        goto label_33f7d4;
    }
    ctx->pc = 0x33F7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F7D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F7CCu, 0x33F7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F7D4u;
label_33f7d4:
    // 0x33f7d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f7d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33f7d8:
    // 0x33f7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33f7dc:
    // 0x33f7dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33f7dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33f7e0:
    // 0x33f7e0: 0x3e00008  jr          $ra
label_33f7e4:
    if (ctx->pc == 0x33F7E4u) {
        ctx->pc = 0x33F7E8u;
        goto label_fallthrough_0x33f7e0;
    }
    ctx->pc = 0x33F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33f7e0:
    ctx->pc = 0x33F7E8u;
}
