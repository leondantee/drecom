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

// Function: entry_0012e6c0
// Address: 0x12e6c0 - 0x12e73c
void entry_0012e6c0_0x12e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e6c0_0x12e6c0");
#endif

    switch (ctx->pc) {
        case 0x12e6d0u: goto label_12e6d0;
        case 0x12e6dcu: goto label_12e6dc;
        case 0x12e6ecu: goto label_12e6ec;
        case 0x12e6f8u: goto label_12e6f8;
        default: break;
    }

    ctx->pc = 0x12e6c0u;

    // 0x12e6c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e6c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E6C8u;
    SET_GPR_U32(ctx, 31, 0x12E6D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E6C8u, 0x12E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6D0u;
label_12e6d0:
    // 0x12e6d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E6D4u;
    SET_GPR_U32(ctx, 31, 0x12E6DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E6D4u, 0x12E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6DCu;
label_12e6dc:
    // 0x12e6dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e6e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e6e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E6E4u;
    SET_GPR_U32(ctx, 31, 0x12E6ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E6E4u, 0x12E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6ECu;
label_12e6ec:
    // 0x12e6ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E6F0u;
    SET_GPR_U32(ctx, 31, 0x12E6F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E6F0u, 0x12E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6F8u;
label_12e6f8:
    // 0x12e6f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e6fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e700: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E700u;
    {
        const bool branch_taken_0x12e700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e700) {
            ctx->pc = 0x12E73Cu;
            return;
        }
    }
    ctx->pc = 0x12E708u;
    // 0x12e708: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e70c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e710: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e714: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e71c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e724: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e728: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e72c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e730: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e734: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e738: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12e73cu;
}
