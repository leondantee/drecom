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

// Function: Em1f_dm_ck
// Address: 0x298b50 - 0x298c24
void Em1f_dm_ck_0x298b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_dm_ck_0x298b50");
#endif

    switch (ctx->pc) {
        case 0x298b98u: goto label_298b98;
        default: break;
    }

    ctx->pc = 0x298b50u;

    // 0x298b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298b54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x298b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x298b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298b5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x298b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x298b60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b64: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x298b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x298b68: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x298B68u;
    {
        const bool branch_taken_0x298b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298b68) {
            ctx->pc = 0x298C10u;
            goto label_298c10;
        }
    }
    ctx->pc = 0x298B70u;
    // 0x298b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b74: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x298b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x298b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b7c: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x298b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x298b80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b88: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x298b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x298b8c: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x298b8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x298b90: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x298B90u;
    SET_GPR_U32(ctx, 31, 0x298B98u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x298B90u, 0x298B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B98u;
label_298b98:
    // 0x298b98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298b9c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x298b9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x298ba0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x298ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x298ba4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x298ba4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x298ba8: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x298BA8u;
    {
        const bool branch_taken_0x298ba8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x298ba8) {
            ctx->pc = 0x298BE4u;
            goto label_298be4;
        }
    }
    ctx->pc = 0x298BB0u;
    // 0x298bb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298bb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298bbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bc0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x298bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298bdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298BDCu;
    {
        const bool branch_taken_0x298bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298bdc) {
            ctx->pc = 0x298C10u;
            goto label_298c10;
        }
    }
    ctx->pc = 0x298BE4u;
label_298be4:
    // 0x298be4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298bf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x298bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298c00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298c04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298c08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298c0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_298c10:
    // 0x298c10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x298c10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298c18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x298C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298C24u;
}
