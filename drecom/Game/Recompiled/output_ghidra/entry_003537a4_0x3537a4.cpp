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

// Function: entry_003537a4
// Address: 0x3537a4 - 0x353860
void entry_003537a4_0x3537a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003537a4_0x3537a4");
#endif

    ctx->pc = 0x3537a4u;

    // 0x3537a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537a8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3537a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537ac: 0x84a40076  lh          $a0, 0x76($a1)
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 118)));
    // 0x3537b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3537b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3537b4: 0xa4a30076  sh          $v1, 0x76($a1)
    ctx->pc = 0x3537b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 118), (uint16_t)GPR_U32(ctx, 3));
    // 0x3537b8: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3537B8u;
    {
        const bool branch_taken_0x3537b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3537b8) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x3537C0u;
    // 0x3537c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3537c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537c8: 0x84710036  lh          $s1, 0x36($v1)
    ctx->pc = 0x3537c8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x3537cc: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3537ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3537d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3537d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3537d4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3537d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3537d8: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3537D8u;
    {
        const bool branch_taken_0x3537d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3537d8) {
            ctx->pc = 0x353860u;
            return;
        }
    }
    ctx->pc = 0x3537E0u;
    // 0x3537e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3537e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3537e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3537e8: 0x84830038  lh          $v1, 0x38($a0)
    ctx->pc = 0x3537e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3537ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3537ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3537f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3537f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3537f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3537f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3537f8: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3537F8u;
    {
        const bool branch_taken_0x3537f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3537f8) {
            ctx->pc = 0x353860u;
            return;
        }
    }
    ctx->pc = 0x353800u;
    // 0x353800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353804: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353808: 0x8463003a  lh          $v1, 0x3A($v1)
    ctx->pc = 0x353808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x35380c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35380cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x353810: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x353810u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x353814: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353818: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x353818u;
    {
        const bool branch_taken_0x353818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x353818) {
            ctx->pc = 0x353860u;
            return;
        }
    }
    ctx->pc = 0x353820u;
    // 0x353820: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353824: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353828: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35382c: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x35382cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x353830: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353838: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x353838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35383c: 0xa4a40038  sh          $a0, 0x38($a1)
    ctx->pc = 0x35383cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x353840: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x353840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353848: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35384c: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x35384cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x353850: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x353850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x353854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353858: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35385c: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x35385cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x353860u;
}
