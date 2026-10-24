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

// Function: Em1f_move
// Address: 0x297990 - 0x2979d8
void Em1f_move_0x297990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_move_0x297990");
#endif

    switch (ctx->pc) {
        case 0x297990u: goto label_297990;
        case 0x297994u: goto label_297994;
        case 0x297998u: goto label_297998;
        case 0x29799cu: goto label_29799c;
        case 0x2979a0u: goto label_2979a0;
        case 0x2979a4u: goto label_2979a4;
        case 0x2979a8u: goto label_2979a8;
        case 0x2979acu: goto label_2979ac;
        case 0x2979b0u: goto label_2979b0;
        case 0x2979b4u: goto label_2979b4;
        case 0x2979b8u: goto label_2979b8;
        case 0x2979bcu: goto label_2979bc;
        case 0x2979c0u: goto label_2979c0;
        case 0x2979c4u: goto label_2979c4;
        case 0x2979c8u: goto label_2979c8;
        case 0x2979ccu: goto label_2979cc;
        case 0x2979d0u: goto label_2979d0;
        case 0x2979d4u: goto label_2979d4;
        default: break;
    }

    ctx->pc = 0x297990u;

label_297990:
    // 0x297990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_297994:
    // 0x297994: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x297994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_297998:
    // 0x297998: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x297998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_29799c:
    // 0x29799c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29799cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2979a0:
    // 0x2979a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2979a4:
    // 0x2979a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2979a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2979a8:
    // 0x2979a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2979a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2979ac:
    // 0x2979ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2979b0:
    // 0x2979b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2979b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2979b4:
    // 0x2979b4: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x2979b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
label_2979b8:
    // 0x2979b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2979b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2979bc:
    // 0x2979bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2979c0:
    // 0x2979c0: 0x40f809  jalr        $v0
label_2979c4:
    if (ctx->pc == 0x2979C4u) {
        ctx->pc = 0x2979C8u;
        goto label_2979c8;
    }
    ctx->pc = 0x2979C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2979C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979C0u, 0x2979C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2979C8u;
label_2979c8:
    // 0x2979c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2979c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2979cc:
    // 0x2979cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2979ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2979d0:
    // 0x2979d0: 0x3e00008  jr          $ra
label_2979d4:
    if (ctx->pc == 0x2979D4u) {
        ctx->pc = 0x2979D8u;
        goto label_fallthrough_0x2979d0;
    }
    ctx->pc = 0x2979D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2979D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2979d0:
    ctx->pc = 0x2979D8u;
}
