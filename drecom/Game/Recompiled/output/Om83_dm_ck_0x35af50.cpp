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

// Function: Om83_dm_ck
// Address: 0x35af50 - 0x35afd0
void Om83_dm_ck_0x35af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om83_dm_ck_0x35af50");
#endif

    ctx->pc = 0x35af50u;

    // 0x35af50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35af50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35af54: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35af54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35af58: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af5c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35af5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35af60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35AF60u;
    {
        const bool branch_taken_0x35af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35af60) {
            ctx->pc = 0x35AF74u;
            goto label_35af74;
        }
    }
    ctx->pc = 0x35AF68u;
    // 0x35af68: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35af68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35af6c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35AF6Cu;
    {
        const bool branch_taken_0x35af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35af6c) {
            ctx->pc = 0x35AFC4u;
            goto label_35afc4;
        }
    }
    ctx->pc = 0x35AF74u;
label_35af74:
    // 0x35af74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35af74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35af78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af7c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35af80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35af84: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35af88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35af8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af90: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35af90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35af94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35af98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35af9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35afa0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35afa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35afa4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35afa8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35afac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35afb0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35afb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35afb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35afbc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35afc0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35afc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35afc4:
    // 0x35afc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35afc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35afc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35AFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AFD0u;
}
