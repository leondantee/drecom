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

// Function: entry_002803b0
// Address: 0x2803b0 - 0x280400
void entry_002803b0_0x2803b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002803b0_0x2803b0");
#endif

    switch (ctx->pc) {
        case 0x2803bcu: goto label_2803bc;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e4u: goto label_2803e4;
        default: break;
    }

    ctx->pc = 0x2803b0u;

    // 0x2803b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2803b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2803b4: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x2803B4u;
    SET_GPR_U32(ctx, 31, 0x2803BCu);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x2803B4u, 0x2803BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803BCu;
label_2803bc:
    // 0x2803bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2803bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2803c0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2803C0u;
    {
        const bool branch_taken_0x2803c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2803c0) {
            ctx->pc = 0x2803A0u;
            return;
        }
    }
    ctx->pc = 0x2803C8u;
    // 0x2803c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2803c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2803cc: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x2803CCu;
    SET_GPR_U32(ctx, 31, 0x2803D4u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x2803CCu, 0x2803D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803D4u;
label_2803d4:
    // 0x2803d4: 0xc0a128c  jal         func_284A30
    ctx->pc = 0x2803D4u;
    SET_GPR_U32(ctx, 31, 0x2803DCu);
    ctx->pc = 0x284A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A30u, 0x2803D4u, 0x2803DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803DCu;
label_2803dc:
    // 0x2803dc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2803DCu;
    SET_GPR_U32(ctx, 31, 0x2803E4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2803DCu, 0x2803E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803E4u;
label_2803e4:
    // 0x2803e4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2803e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2803e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2803e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2803ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2803ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2803f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2803f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2803f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2803f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2803F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2803F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280400u;
}
