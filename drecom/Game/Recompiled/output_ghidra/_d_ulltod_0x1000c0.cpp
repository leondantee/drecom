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

// Function: _d_ulltod
// Address: 0x1000c0 - 0x100104
void _d_ulltod_0x1000c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_d_ulltod_0x1000c0");
#endif

    switch (ctx->pc) {
        case 0x1000d4u: goto label_1000d4;
        case 0x1000ecu: goto label_1000ec;
        case 0x1000f8u: goto label_1000f8;
        default: break;
    }

    ctx->pc = 0x1000c0u;

    // 0x1000c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1000c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1000c4: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1000C4u;
    {
        const bool branch_taken_0x1000c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1000C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000C4u;
        // 0x1000c8: 0x7fbf0000  sq          $ra, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1000c4) {
            ctx->pc = 0x1000DCu;
            goto label_1000dc;
        }
    }
    ctx->pc = 0x1000CCu;
    // 0x1000cc: 0xc047520  jal         func_11D480
    ctx->pc = 0x1000CCu;
    SET_GPR_U32(ctx, 31, 0x1000D4u);
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x1000CCu, 0x1000D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000D4u;
label_1000d4:
    // 0x1000d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1000D4u;
    {
        const bool branch_taken_0x1000d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1000D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000D4u;
        // 0x1000d8: 0x7bbf0000  lq          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1000d4) {
            ctx->pc = 0x1000FCu;
            goto label_1000fc;
        }
    }
    ctx->pc = 0x1000DCu;
label_1000dc:
    // 0x1000dc: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x1000dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x1000e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1000e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1000e4: 0xc047520  jal         func_11D480
    ctx->pc = 0x1000E4u;
    SET_GPR_U32(ctx, 31, 0x1000ECu);
    ctx->pc = 0x1000E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000E4u;
    // 0x1000e8: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x1000E4u, 0x1000ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000ECu;
label_1000ec:
    // 0x1000ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1000ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1000f0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1000F0u;
    SET_GPR_U32(ctx, 31, 0x1000F8u);
    ctx->pc = 0x1000F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000F0u;
    // 0x1000f4: 0x70402e28  paddub      $a1, $v0, $zero (Delay Slot)
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1000F0u, 0x1000F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000F8u;
label_1000f8:
    // 0x1000f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1000f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1000fc:
    // 0x1000fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1000FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000FCu;
        // 0x100100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1000FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100104u;
}
