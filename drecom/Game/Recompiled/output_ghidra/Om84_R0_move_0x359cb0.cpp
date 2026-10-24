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

// Function: Om84_R0_move
// Address: 0x359cb0 - 0x359cf8
void Om84_R0_move_0x359cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_R0_move_0x359cb0");
#endif

    switch (ctx->pc) {
        case 0x359cb0u: goto label_359cb0;
        case 0x359cb4u: goto label_359cb4;
        case 0x359cb8u: goto label_359cb8;
        case 0x359cbcu: goto label_359cbc;
        case 0x359cc0u: goto label_359cc0;
        case 0x359cc4u: goto label_359cc4;
        case 0x359cc8u: goto label_359cc8;
        case 0x359cccu: goto label_359ccc;
        case 0x359cd0u: goto label_359cd0;
        case 0x359cd4u: goto label_359cd4;
        case 0x359cd8u: goto label_359cd8;
        case 0x359cdcu: goto label_359cdc;
        case 0x359ce0u: goto label_359ce0;
        case 0x359ce4u: goto label_359ce4;
        case 0x359ce8u: goto label_359ce8;
        case 0x359cecu: goto label_359cec;
        case 0x359cf0u: goto label_359cf0;
        case 0x359cf4u: goto label_359cf4;
        default: break;
    }

    ctx->pc = 0x359cb0u;

label_359cb0:
    // 0x359cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359cb4:
    // 0x359cb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_359cb8:
    // 0x359cb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_359cbc:
    // 0x359cbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359cc0:
    // 0x359cc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359cc4:
    // 0x359cc4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x359cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_359cc8:
    // 0x359cc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_359ccc:
    // 0x359ccc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x359cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_359cd0:
    // 0x359cd0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359cd4:
    // 0x359cd4: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
label_359cd8:
    // 0x359cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359cdc:
    // 0x359cdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359ce0:
    // 0x359ce0: 0x40f809  jalr        $v0
label_359ce4:
    if (ctx->pc == 0x359CE4u) {
        ctx->pc = 0x359CE8u;
        goto label_359ce8;
    }
    ctx->pc = 0x359CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359CE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CE0u, 0x359CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359CE8u;
label_359ce8:
    // 0x359ce8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359ce8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359cec:
    // 0x359cec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_359cf0:
    // 0x359cf0: 0x3e00008  jr          $ra
label_359cf4:
    if (ctx->pc == 0x359CF4u) {
        ctx->pc = 0x359CF8u;
        goto label_fallthrough_0x359cf0;
    }
    ctx->pc = 0x359CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x359cf0:
    ctx->pc = 0x359CF8u;
}
