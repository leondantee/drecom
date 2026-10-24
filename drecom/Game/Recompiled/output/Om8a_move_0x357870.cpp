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

// Function: Om8a_move
// Address: 0x357870 - 0x3578c8
void Om8a_move_0x357870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8a_move_0x357870");
#endif

    switch (ctx->pc) {
        case 0x357870u: goto label_357870;
        case 0x357874u: goto label_357874;
        case 0x357878u: goto label_357878;
        case 0x35787cu: goto label_35787c;
        case 0x357880u: goto label_357880;
        case 0x357884u: goto label_357884;
        case 0x357888u: goto label_357888;
        case 0x35788cu: goto label_35788c;
        case 0x357890u: goto label_357890;
        case 0x357894u: goto label_357894;
        case 0x357898u: goto label_357898;
        case 0x35789cu: goto label_35789c;
        case 0x3578a0u: goto label_3578a0;
        case 0x3578a4u: goto label_3578a4;
        case 0x3578a8u: goto label_3578a8;
        case 0x3578acu: goto label_3578ac;
        case 0x3578b0u: goto label_3578b0;
        case 0x3578b4u: goto label_3578b4;
        case 0x3578b8u: goto label_3578b8;
        case 0x3578bcu: goto label_3578bc;
        case 0x3578c0u: goto label_3578c0;
        case 0x3578c4u: goto label_3578c4;
        default: break;
    }

    ctx->pc = 0x357870u;

label_357870:
    // 0x357870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_357874:
    // 0x357874: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x357874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_357878:
    // 0x357878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35787c:
    // 0x35787c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35787cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_357880:
    // 0x357880: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x357880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_357884:
    // 0x357884: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x357884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_357888:
    // 0x357888: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x357888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_35788c:
    // 0x35788c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_357890:
    // 0x357890: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x357890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_357894:
    // 0x357894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x357894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_357898:
    // 0x357898: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x357898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35789c:
    // 0x35789c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3578a0:
    // 0x3578a0: 0x2442a6d8  addiu       $v0, $v0, -0x5928
    ctx->pc = 0x3578a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944472));
label_3578a4:
    // 0x3578a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3578a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3578a8:
    // 0x3578a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3578a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3578ac:
    // 0x3578ac: 0x40f809  jalr        $v0
label_3578b0:
    if (ctx->pc == 0x3578B0u) {
        ctx->pc = 0x3578B4u;
        goto label_3578b4;
    }
    ctx->pc = 0x3578ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3578B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578ACu, 0x3578B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3578B4u;
label_3578b4:
    // 0x3578b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3578b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3578b8:
    // 0x3578b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3578b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3578bc:
    // 0x3578bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3578bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3578c0:
    // 0x3578c0: 0x3e00008  jr          $ra
label_3578c4:
    if (ctx->pc == 0x3578C4u) {
        ctx->pc = 0x3578C8u;
        goto label_fallthrough_0x3578c0;
    }
    ctx->pc = 0x3578C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3578C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3578c0:
    ctx->pc = 0x3578C8u;
}
