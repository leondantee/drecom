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

// Function: entry_0030ffa4
// Address: 0x30ffa4 - 0x31001c
void entry_0030ffa4_0x30ffa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ffa4_0x30ffa4");
#endif

    switch (ctx->pc) {
        case 0x30ffb4u: goto label_30ffb4;
        case 0x30ffc0u: goto label_30ffc0;
        case 0x30ffd0u: goto label_30ffd0;
        case 0x30ffdcu: goto label_30ffdc;
        default: break;
    }

    ctx->pc = 0x30ffa4u;

    // 0x30ffa4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ffa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ffac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FFACu;
    SET_GPR_U32(ctx, 31, 0x30FFB4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FFACu, 0x30FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFB4u;
label_30ffb4:
    // 0x30ffb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffb8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FFB8u;
    SET_GPR_U32(ctx, 31, 0x30FFC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FFB8u, 0x30FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFC0u;
label_30ffc0:
    // 0x30ffc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30ffc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30ffc8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FFC8u;
    SET_GPR_U32(ctx, 31, 0x30FFD0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FFC8u, 0x30FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFD0u;
label_30ffd0:
    // 0x30ffd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffd4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FFD4u;
    SET_GPR_U32(ctx, 31, 0x30FFDCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FFD4u, 0x30FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FFDCu;
label_30ffdc:
    // 0x30ffdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ffe0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ffe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ffe4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30FFE4u;
    {
        const bool branch_taken_0x30ffe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ffe4) {
            ctx->pc = 0x31001Cu;
            return;
        }
    }
    ctx->pc = 0x30FFECu;
    // 0x30ffec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fff4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30fff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310000: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x310000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x310004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x310004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310008: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x310008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31000c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31000cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310010: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x310010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x310014: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x310014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x310018: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x310018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x31001cu;
}
