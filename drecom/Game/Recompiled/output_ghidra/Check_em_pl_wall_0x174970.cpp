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

// Function: Check_em_pl_wall
// Address: 0x174970 - 0x174a78
void Check_em_pl_wall_0x174970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_em_pl_wall_0x174970");
#endif

    switch (ctx->pc) {
        case 0x1749e0u: goto label_1749e0;
        case 0x174a10u: goto label_174a10;
        case 0x174a44u: goto label_174a44;
        default: break;
    }

    ctx->pc = 0x174970u;

    // 0x174970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174974: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x174974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x174978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17497c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174980: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x174980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x174984: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x174984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x174988: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x17498c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x174990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174998: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x174998u;
    {
        const bool branch_taken_0x174998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174998) {
            ctx->pc = 0x174A1Cu;
            goto label_174a1c;
        }
    }
    ctx->pc = 0x1749A0u;
    // 0x1749a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1749a4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1749A4u;
    {
        const bool branch_taken_0x1749a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1749a4) {
            ctx->pc = 0x1749ECu;
            goto label_1749ec;
        }
    }
    ctx->pc = 0x1749ACu;
    // 0x1749ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1749ACu;
    {
        const bool branch_taken_0x1749ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749ac) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x1749B4u;
    // 0x1749b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1749B4u;
    {
        const bool branch_taken_0x1749b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749b4) {
            ctx->pc = 0x174A48u;
            goto label_174a48;
        }
    }
    ctx->pc = 0x1749BCu;
label_1749bc:
    // 0x1749bc: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1749c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1749c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1749c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1749cc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1749d0: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1749d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1749d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1749d8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1749D8u;
    SET_GPR_U32(ctx, 31, 0x1749E0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1749D8u, 0x1749E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749E0u;
label_1749e0:
    // 0x1749e0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1749e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1749e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1749E4u;
    {
        const bool branch_taken_0x1749e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1749e4) {
            ctx->pc = 0x174A48u;
            goto label_174a48;
        }
    }
    ctx->pc = 0x1749ECu;
label_1749ec:
    // 0x1749ec: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1749ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1749f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1749f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1749f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1749fc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1749fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x174a00: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174a04: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x174a08: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174A08u;
    SET_GPR_U32(ctx, 31, 0x174A10u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174A08u, 0x174A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A10u;
label_174a10:
    // 0x174a10: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x174a10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174a14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174A48u;
            goto label_174a48;
        }
    }
    ctx->pc = 0x174A1Cu;
label_174a1c:
    // 0x174a1c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x174a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x174a20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x174a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174a24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x174a28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174a2c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x174a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x174a30: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174a34: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x174a38: 0x344707c0  ori         $a3, $v0, 0x7C0
    ctx->pc = 0x174a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1984);
    // 0x174a3c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174A3Cu;
    SET_GPR_U32(ctx, 31, 0x174A44u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174A3Cu, 0x174A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A44u;
label_174a44:
    // 0x174a44: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x174a44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_174a48:
    // 0x174a48: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A48u;
    {
        const bool branch_taken_0x174a48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a48) {
            ctx->pc = 0x174A5Cu;
            goto label_174a5c;
        }
    }
    ctx->pc = 0x174A50u;
    // 0x174a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174A54u;
    {
        const bool branch_taken_0x174a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a54) {
            ctx->pc = 0x174A60u;
            goto label_174a60;
        }
    }
    ctx->pc = 0x174A5Cu;
label_174a5c:
    // 0x174a5c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x174a5cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_174a60:
    // 0x174a60: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x174a60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174a6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x174a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174a70: 0x3e00008  jr          $ra
    ctx->pc = 0x174A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174A78u;
}
