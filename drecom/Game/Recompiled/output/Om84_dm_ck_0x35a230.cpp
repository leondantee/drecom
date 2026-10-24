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

// Function: Om84_dm_ck
// Address: 0x35a230 - 0x35a320
void Om84_dm_ck_0x35a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_dm_ck_0x35a230");
#endif

    ctx->pc = 0x35a230u;

    // 0x35a230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a234: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35a234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35a238: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a23c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35a23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35a240: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A240u;
    {
        const bool branch_taken_0x35a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a240) {
            ctx->pc = 0x35A254u;
            goto label_35a254;
        }
    }
    ctx->pc = 0x35A248u;
    // 0x35a248: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a248u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a24c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35A24Cu;
    {
        const bool branch_taken_0x35a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a24c) {
            ctx->pc = 0x35A314u;
            goto label_35a314;
        }
    }
    ctx->pc = 0x35A254u;
label_35a254:
    // 0x35a254: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a258: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35a258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35a25c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A25Cu;
    {
        const bool branch_taken_0x35a25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a25c) {
            ctx->pc = 0x35A270u;
            goto label_35a270;
        }
    }
    ctx->pc = 0x35A264u;
    // 0x35a264: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a264u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a268: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x35A268u;
    {
        const bool branch_taken_0x35a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a268) {
            ctx->pc = 0x35A314u;
            goto label_35a314;
        }
    }
    ctx->pc = 0x35A270u;
label_35a270:
    // 0x35a270: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a274: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x35a274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x35a278: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35a278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35a27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a280: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35A280u;
    {
        const bool branch_taken_0x35a280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a280) {
            ctx->pc = 0x35A2C0u;
            goto label_35a2c0;
        }
    }
    ctx->pc = 0x35A288u;
    // 0x35a288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a28c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a290: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a294: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a298: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35a298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a29c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2a0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2a8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a2b4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a2b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a2b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35A2B8u;
    {
        const bool branch_taken_0x35a2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a2b8) {
            ctx->pc = 0x35A314u;
            goto label_35a314;
        }
    }
    ctx->pc = 0x35A2C0u;
label_35a2c0:
    // 0x35a2c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a2c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2c8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35a2cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a2d0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a2d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a2dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a2e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a2f4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a2f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a2fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a300: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a308: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a30c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35a310: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a310u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35a314:
    // 0x35a314: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35a314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35a318: 0x3e00008  jr          $ra
    ctx->pc = 0x35A318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A320u;
}
