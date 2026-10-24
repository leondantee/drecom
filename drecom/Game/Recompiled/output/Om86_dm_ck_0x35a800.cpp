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

// Function: Om86_dm_ck
// Address: 0x35a800 - 0x35a8f0
void Om86_dm_ck_0x35a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om86_dm_ck_0x35a800");
#endif

    ctx->pc = 0x35a800u;

    // 0x35a800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a804: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x35a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x35a808: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a80c: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35a80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35a810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A810u;
    {
        const bool branch_taken_0x35a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a810) {
            ctx->pc = 0x35A824u;
            goto label_35a824;
        }
    }
    ctx->pc = 0x35A818u;
    // 0x35a818: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a818u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a81c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35A81Cu;
    {
        const bool branch_taken_0x35a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a81c) {
            ctx->pc = 0x35A8E4u;
            goto label_35a8e4;
        }
    }
    ctx->pc = 0x35A824u;
label_35a824:
    // 0x35a824: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a828: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x35a828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x35a82c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A82Cu;
    {
        const bool branch_taken_0x35a82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a82c) {
            ctx->pc = 0x35A840u;
            goto label_35a840;
        }
    }
    ctx->pc = 0x35A834u;
    // 0x35a834: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a834u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a838: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x35A838u;
    {
        const bool branch_taken_0x35a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a838) {
            ctx->pc = 0x35A8E4u;
            goto label_35a8e4;
        }
    }
    ctx->pc = 0x35A840u;
label_35a840:
    // 0x35a840: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a844: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x35a844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x35a848: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35a848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35a84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a850: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35A850u;
    {
        const bool branch_taken_0x35a850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35a850) {
            ctx->pc = 0x35A890u;
            goto label_35a890;
        }
    }
    ctx->pc = 0x35A858u;
    // 0x35a858: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a85c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a860: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a864: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a868: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35a868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a86c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a870: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a874: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a878: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a87c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a880: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a884: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a884u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a888: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35A888u;
    {
        const bool branch_taken_0x35a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a888) {
            ctx->pc = 0x35A8E4u;
            goto label_35a8e4;
        }
    }
    ctx->pc = 0x35A890u;
label_35a890:
    // 0x35a890: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a894: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a898: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35a898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35a89c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a8a0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35a8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a8a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a8ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8b0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35a8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35a8b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8b8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35a8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a8bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a8c4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35a8cc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35a8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a8d0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a8d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a8d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a8dc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35a8e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35a8e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_35a8e4:
    // 0x35a8e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35a8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35a8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x35A8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A8F0u;
}
