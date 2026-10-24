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

// Function: Om81_dm_ck
// Address: 0x35bce0 - 0x35bdd0
void Om81_dm_ck_0x35bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_dm_ck_0x35bce0");
#endif

    ctx->pc = 0x35bce0u;

    // 0x35bce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bce4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35bce8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bcec: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35bcecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35bcf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BCF0u;
    {
        const bool branch_taken_0x35bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bcf0) {
            ctx->pc = 0x35BD04u;
            goto label_35bd04;
        }
    }
    ctx->pc = 0x35BCF8u;
    // 0x35bcf8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bcf8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bcfc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35BCFCu;
    {
        const bool branch_taken_0x35bcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bcfc) {
            ctx->pc = 0x35BDC4u;
            goto label_35bdc4;
        }
    }
    ctx->pc = 0x35BD04u;
label_35bd04:
    // 0x35bd04: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd08: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35bd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35bd0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BD0Cu;
    {
        const bool branch_taken_0x35bd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bd0c) {
            ctx->pc = 0x35BD20u;
            goto label_35bd20;
        }
    }
    ctx->pc = 0x35BD14u;
    // 0x35bd14: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bd14u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bd18: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x35BD18u;
    {
        const bool branch_taken_0x35bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bd18) {
            ctx->pc = 0x35BDC4u;
            goto label_35bdc4;
        }
    }
    ctx->pc = 0x35BD20u;
label_35bd20:
    // 0x35bd20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd24: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x35bd24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x35bd28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35bd2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bd30: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35BD30u;
    {
        const bool branch_taken_0x35bd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35bd30) {
            ctx->pc = 0x35BD70u;
            goto label_35bd70;
        }
    }
    ctx->pc = 0x35BD38u;
    // 0x35bd38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd3c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd44: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd48: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35bd48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd4c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd50: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35bd50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd54: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd58: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35bd58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35bd64: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bd64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bd68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35BD68u;
    {
        const bool branch_taken_0x35bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bd68) {
            ctx->pc = 0x35BDC4u;
            goto label_35bdc4;
        }
    }
    ctx->pc = 0x35BD70u;
label_35bd70:
    // 0x35bd70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35bd74: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd78: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35bd7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd80: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd84: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bd8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd90: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35bd90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bda0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35bda0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bda4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bda8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35bdac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bdb0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35bdb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bdb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35bdbc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35bdc0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bdc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35bdc4:
    // 0x35bdc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35bdc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35bdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x35BDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BDD0u;
}
