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

// Function: Om89_dm_ck
// Address: 0x362e10 - 0x362e90
void Om89_dm_ck_0x362e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_dm_ck_0x362e10");
#endif

    ctx->pc = 0x362e10u;

    // 0x362e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x362e14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x362e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x362e18: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e1c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x362e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x362e20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362E20u;
    {
        const bool branch_taken_0x362e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362e20) {
            ctx->pc = 0x362E34u;
            goto label_362e34;
        }
    }
    ctx->pc = 0x362E28u;
    // 0x362e28: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362e28u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362e2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x362E2Cu;
    {
        const bool branch_taken_0x362e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e2c) {
            ctx->pc = 0x362E84u;
            goto label_362e84;
        }
    }
    ctx->pc = 0x362E34u;
label_362e34:
    // 0x362e34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362e38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e3c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x362e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x362e40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362e44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x362e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x362e4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e50: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x362e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e58: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x362e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e60: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x362e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362e64: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x362e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x362e6c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x362e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362e70: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x362e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x362e74: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362e78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x362e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362e7c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x362e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x362e80: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362e80u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_362e84:
    // 0x362e84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x362e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x362e88: 0x3e00008  jr          $ra
    ctx->pc = 0x362E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362E90u;
}
