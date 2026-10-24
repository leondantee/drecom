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

// Function: Om85_dm_ck
// Address: 0x360fb0 - 0x3610a0
void Om85_dm_ck_0x360fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_dm_ck_0x360fb0");
#endif

    ctx->pc = 0x360fb0u;

    // 0x360fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360fb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x360fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x360fb8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x360fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360fbc: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x360fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x360fc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360FC0u;
    {
        const bool branch_taken_0x360fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360fc0) {
            ctx->pc = 0x360FD4u;
            goto label_360fd4;
        }
    }
    ctx->pc = 0x360FC8u;
    // 0x360fc8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x360fc8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360fcc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x360FCCu;
    {
        const bool branch_taken_0x360fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fcc) {
            ctx->pc = 0x361094u;
            goto label_361094;
        }
    }
    ctx->pc = 0x360FD4u;
label_360fd4:
    // 0x360fd4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x360fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360fd8: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x360fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x360fdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x360FDCu;
    {
        const bool branch_taken_0x360fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360fdc) {
            ctx->pc = 0x360FF0u;
            goto label_360ff0;
        }
    }
    ctx->pc = 0x360FE4u;
    // 0x360fe4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x360fe4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360fe8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x360FE8u;
    {
        const bool branch_taken_0x360fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fe8) {
            ctx->pc = 0x361094u;
            goto label_361094;
        }
    }
    ctx->pc = 0x360FF0u;
label_360ff0:
    // 0x360ff0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360ff4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x360ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x360ff8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x360ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x360ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361000: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x361000u;
    {
        const bool branch_taken_0x361000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361000) {
            ctx->pc = 0x361040u;
            goto label_361040;
        }
    }
    ctx->pc = 0x361008u;
    // 0x361008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x361008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36100c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361010: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x361010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x361014: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361018: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x361018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36101c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361020: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x361020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x361024: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361028: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x361028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36102c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361030: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x361030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x361034: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361034u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361038: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x361038u;
    {
        const bool branch_taken_0x361038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361038) {
            ctx->pc = 0x361094u;
            goto label_361094;
        }
    }
    ctx->pc = 0x361040u;
label_361040:
    // 0x361040: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361044: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361048: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x361048u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x36104c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361050: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361054: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x361054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x361058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36105c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361060: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x361060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x361064: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361068: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x361068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36106c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361070: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x361070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x361074: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361078: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x361078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36107c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361080: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x361080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x361084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361088: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x361088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36108c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x36108cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x361090: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361090u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_361094:
    // 0x361094: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x361094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x361098: 0x3e00008  jr          $ra
    ctx->pc = 0x361098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3610A0u;
}
