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

// Function: Em1b_R1_move_type02
// Address: 0x36b850 - 0x36b8c4
void Em1b_R1_move_type02_0x36b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_move_type02_0x36b850");
#endif

    switch (ctx->pc) {
        case 0x36b850u: goto label_36b850;
        case 0x36b854u: goto label_36b854;
        case 0x36b858u: goto label_36b858;
        case 0x36b85cu: goto label_36b85c;
        case 0x36b860u: goto label_36b860;
        case 0x36b864u: goto label_36b864;
        case 0x36b868u: goto label_36b868;
        case 0x36b86cu: goto label_36b86c;
        case 0x36b870u: goto label_36b870;
        case 0x36b874u: goto label_36b874;
        case 0x36b878u: goto label_36b878;
        case 0x36b87cu: goto label_36b87c;
        case 0x36b880u: goto label_36b880;
        case 0x36b884u: goto label_36b884;
        case 0x36b888u: goto label_36b888;
        case 0x36b88cu: goto label_36b88c;
        case 0x36b890u: goto label_36b890;
        case 0x36b894u: goto label_36b894;
        case 0x36b898u: goto label_36b898;
        case 0x36b89cu: goto label_36b89c;
        case 0x36b8a0u: goto label_36b8a0;
        case 0x36b8a4u: goto label_36b8a4;
        case 0x36b8a8u: goto label_36b8a8;
        case 0x36b8acu: goto label_36b8ac;
        case 0x36b8b0u: goto label_36b8b0;
        case 0x36b8b4u: goto label_36b8b4;
        case 0x36b8b8u: goto label_36b8b8;
        case 0x36b8bcu: goto label_36b8bc;
        case 0x36b8c0u: goto label_36b8c0;
        default: break;
    }

    ctx->pc = 0x36b850u;

label_36b850:
    // 0x36b850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36b854:
    // 0x36b854: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36b854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36b858:
    // 0x36b858: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36b858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36b85c:
    // 0x36b85c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b860:
    // 0x36b860: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b864:
    // 0x36b864: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b868:
    // 0x36b868: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b86c:
    // 0x36b86c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b870:
    // 0x36b870: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b874:
    // 0x36b874: 0x2442b278  addiu       $v0, $v0, -0x4D88
    ctx->pc = 0x36b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947448));
label_36b878:
    // 0x36b878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b87c:
    // 0x36b87c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b880:
    // 0x36b880: 0x40f809  jalr        $v0
label_36b884:
    if (ctx->pc == 0x36B884u) {
        ctx->pc = 0x36B888u;
        goto label_36b888;
    }
    ctx->pc = 0x36B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B880u, 0x36B888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B888u;
label_36b888:
    // 0x36b888: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b88c:
    // 0x36b88c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b890:
    // 0x36b890: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b894:
    // 0x36b894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b898:
    // 0x36b898: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b89c:
    // 0x36b89c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b8a0:
    // 0x36b8a0: 0x2442b280  addiu       $v0, $v0, -0x4D80
    ctx->pc = 0x36b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947456));
label_36b8a4:
    // 0x36b8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b8a8:
    // 0x36b8a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b8ac:
    // 0x36b8ac: 0x40f809  jalr        $v0
label_36b8b0:
    if (ctx->pc == 0x36B8B0u) {
        ctx->pc = 0x36B8B4u;
        goto label_36b8b4;
    }
    ctx->pc = 0x36B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B8B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B8ACu, 0x36B8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B8B4u;
label_36b8b4:
    // 0x36b8b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36b8b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b8b8:
    // 0x36b8b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36b8bc:
    // 0x36b8bc: 0x3e00008  jr          $ra
label_36b8c0:
    if (ctx->pc == 0x36B8C0u) {
        ctx->pc = 0x36B8C4u;
        goto label_fallthrough_0x36b8bc;
    }
    ctx->pc = 0x36B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b8bc:
    ctx->pc = 0x36B8C4u;
}
