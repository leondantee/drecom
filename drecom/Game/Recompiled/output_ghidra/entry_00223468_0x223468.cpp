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

// Function: entry_00223468
// Address: 0x223468 - 0x223570
void entry_00223468_0x223468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223468_0x223468");
#endif

    switch (ctx->pc) {
        case 0x22354cu: goto label_22354c;
        case 0x22355cu: goto label_22355c;
        default: break;
    }

    ctx->pc = 0x223468u;

    // 0x223468: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22346c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x22346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x223470: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x223470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x223474: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x223474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223478: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22347c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x22347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x223480: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x223480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x223484: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x223484u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223488: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22348c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x22348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x223490: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x223490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x223494: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x223494u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x223498: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22349c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x22349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2234a0: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x2234a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2234a4: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x2234a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2234a8: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x2234a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x2234ac: 0x3c103000  lui         $s0, 0x3000
    ctx->pc = 0x2234acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x2234b0: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x2234b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2234b4: 0xaec30024  sw          $v1, 0x24($s6)
    ctx->pc = 0x2234b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 3));
    // 0x2234b8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2234b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234bc: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2234bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2234c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2234c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2234c4: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x2234c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2234c8: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2234C8u;
    {
        const bool branch_taken_0x2234c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2234c8) {
            ctx->pc = 0x223570u;
            return;
        }
    }
    ctx->pc = 0x2234D0u;
    // 0x2234d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2234d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2234d4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234d8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2234d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2234dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2234dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234e0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2234e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2234e4: 0x8fbe0128  lw          $fp, 0x128($sp)
    ctx->pc = 0x2234e4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234e8: 0xa3c00002  sb          $zero, 0x2($fp)
    ctx->pc = 0x2234e8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2234ec: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2234f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2234f4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2234f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2234f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2234f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2234fc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2234fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223500: 0x90a71308  lbu         $a3, 0x1308($a1)
    ctx->pc = 0x223500u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4872)));
    // 0x223504: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x223504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x223508: 0x3102001f  andi        $v0, $t0, 0x1F
    ctx->pc = 0x223508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x22350c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x22350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x223510: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x223510) {
            ctx->pc = 0x223570u;
            return;
        }
    }
    ctx->pc = 0x223518u;
    // 0x223518: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22351c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223520: 0x844a127e  lh          $t2, 0x127E($v0)
    ctx->pc = 0x223520u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x223524: 0xa143c  dsll32      $v0, $t2, 16
    ctx->pc = 0x223524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 16));
    // 0x223528: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223528u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22352c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x22352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223530: 0x8d250368  lw          $a1, 0x368($t1)
    ctx->pc = 0x223530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 872)));
    // 0x223534: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x223534u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223538: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x223538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22353c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x22353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x223540: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x223540u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223544: 0xc0965d0  jal         func_259740
    ctx->pc = 0x223544u;
    SET_GPR_U32(ctx, 31, 0x22354Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x223544u, 0x22354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22354Cu;
label_22354c:
    // 0x22354c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x223550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223554: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x223554u;
    SET_GPR_U32(ctx, 31, 0x22355Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x223554u, 0x22355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22355Cu;
label_22355c:
    // 0x22355c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x22355cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223560: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x223560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x223564: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x223564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x223568: 0x34622018  ori         $v0, $v1, 0x2018
    ctx->pc = 0x223568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8216);
    // 0x22356c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22356cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x223570u;
}
