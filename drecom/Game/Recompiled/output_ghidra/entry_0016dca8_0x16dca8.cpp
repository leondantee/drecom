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

// Function: entry_0016dca8
// Address: 0x16dca8 - 0x16dde0
void entry_0016dca8_0x16dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dca8_0x16dca8");
#endif

    switch (ctx->pc) {
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd90u: goto label_16dd90;
        case 0x16ddc8u: goto label_16ddc8;
        default: break;
    }

    ctx->pc = 0x16dca8u;

    // 0x16dca8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dcac: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16dcacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16dcb0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcb8: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16dcbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcc0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16dcc4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dcc8: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16dcc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16dccc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcd4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dcd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcdc: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16dce0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dce4: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16dce8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dcec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dcecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dcf0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dcf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dcf8: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16dcfc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd00: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x16dd00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x16dd04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd0c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16dd10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd14: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16dd18: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd1c: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x16dd1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16dd20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd28: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16dd2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd30: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16dd34: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16dd38: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x16dd3c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16dd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dd40: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16dd40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16dd44: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16dd48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd4c: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16dd50: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16dd54: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16dd58: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DD58u;
    SET_GPR_U32(ctx, 31, 0x16DD60u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DD60u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DD60u) { return; }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16dd64: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16dd68: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16DD68u;
    SET_GPR_U32(ctx, 31, 0x16DD70u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16DD70u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16DD70u) { return; }
    ctx->pc = 0x16DD70u;
label_16dd70:
    // 0x16dd70: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16dd74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16dd78: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16dd7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16dd80: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16dd84: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16dd88: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DD88u;
    SET_GPR_U32(ctx, 31, 0x16DD90u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DD88u, 0x16DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD90u;
label_16dd90:
    // 0x16dd90: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16dd90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16dd94: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16DD94u;
    {
        const bool branch_taken_0x16dd94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd94) {
            ctx->pc = 0x16DEB8u;
            return;
        }
    }
    ctx->pc = 0x16DD9Cu;
    // 0x16dd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dda0: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16DDA0u;
    {
        const bool branch_taken_0x16dda0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dda0) {
            ctx->pc = 0x16DDE0u;
            return;
        }
    }
    ctx->pc = 0x16DDA8u;
    // 0x16dda8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16ddac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16ddb0: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16ddb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ddb8: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16ddbc: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16ddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ddc0: 0xc059c84  jal         func_167210
    ctx->pc = 0x16DDC0u;
    SET_GPR_U32(ctx, 31, 0x16DDC8u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16DDC0u, 0x16DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDC8u;
label_16ddc8:
    // 0x16ddc8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16ddc8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16ddcc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16ddccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16ddd0: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16DDD0u;
    {
        const bool branch_taken_0x16ddd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd0) {
            ctx->pc = 0x16DEB8u;
            return;
        }
    }
    ctx->pc = 0x16DDD8u;
    // 0x16ddd8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DDD8u;
    {
        const bool branch_taken_0x16ddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd8) {
            ctx->pc = 0x16DE38u;
            return;
        }
    }
    ctx->pc = 0x16DDE0u;
}
