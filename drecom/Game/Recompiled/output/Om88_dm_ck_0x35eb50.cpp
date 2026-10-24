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

// Function: Om88_dm_ck
// Address: 0x35eb50 - 0x35ebd0
void Om88_dm_ck_0x35eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om88_dm_ck_0x35eb50");
#endif

    ctx->pc = 0x35eb50u;

    // 0x35eb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35eb54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35eb58: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb5c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35eb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35eb60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35EB60u;
    {
        const bool branch_taken_0x35eb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eb60) {
            ctx->pc = 0x35EB74u;
            goto label_35eb74;
        }
    }
    ctx->pc = 0x35EB68u;
    // 0x35eb68: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35eb68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35eb6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35EB6Cu;
    {
        const bool branch_taken_0x35eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eb6c) {
            ctx->pc = 0x35EBC4u;
            goto label_35ebc4;
        }
    }
    ctx->pc = 0x35EB74u;
label_35eb74:
    // 0x35eb74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35eb78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb7c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35eb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35eb80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35eb84: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35eb88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35eb8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb90: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35eb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eb94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35eb98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eb9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eba0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35eba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35eba4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eba8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35ebac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ebb0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35ebb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ebb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35ebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35ebbc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35ebc0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35ebc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35ebc4:
    // 0x35ebc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35ebc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EBD0u;
}
