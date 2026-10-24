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

// Function: entry_00309718
// Address: 0x309718 - 0x3097a0
void entry_00309718_0x309718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309718_0x309718");
#endif

    switch (ctx->pc) {
        case 0x309738u: goto label_309738;
        case 0x309744u: goto label_309744;
        case 0x309754u: goto label_309754;
        case 0x309760u: goto label_309760;
        default: break;
    }

    ctx->pc = 0x309718u;

    // 0x309718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30971c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30971cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x309720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309724: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x309724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x309728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30972c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30972cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309730: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x309730u;
    SET_GPR_U32(ctx, 31, 0x309738u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x309730u, 0x309738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309738u;
label_309738:
    // 0x309738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30973c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30973Cu;
    SET_GPR_U32(ctx, 31, 0x309744u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30973Cu, 0x309744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309744u;
label_309744:
    // 0x309744: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309748: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309748u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30974c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30974Cu;
    SET_GPR_U32(ctx, 31, 0x309754u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30974Cu, 0x309754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309754u;
label_309754:
    // 0x309754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309758: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309758u;
    SET_GPR_U32(ctx, 31, 0x309760u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309758u, 0x309760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309760u;
label_309760:
    // 0x309760: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309764: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309768: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x309768u;
    {
        const bool branch_taken_0x309768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309768) {
            ctx->pc = 0x3097A0u;
            return;
        }
    }
    ctx->pc = 0x309770u;
    // 0x309770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309778: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30977c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309780: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30978c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30978cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309798: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30979c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30979cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3097a0u;
}
