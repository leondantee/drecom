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

// Function: entry_0030d2d0
// Address: 0x30d2d0 - 0x30d358
void entry_0030d2d0_0x30d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d2d0_0x30d2d0");
#endif

    switch (ctx->pc) {
        case 0x30d2f0u: goto label_30d2f0;
        case 0x30d2fcu: goto label_30d2fc;
        case 0x30d30cu: goto label_30d30c;
        case 0x30d318u: goto label_30d318;
        default: break;
    }

    ctx->pc = 0x30d2d0u;

    // 0x30d2d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2d4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d2dc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d2e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d2e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d2e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D2E8u;
    SET_GPR_U32(ctx, 31, 0x30D2F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D2E8u, 0x30D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2F0u;
label_30d2f0:
    // 0x30d2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D2F4u;
    SET_GPR_U32(ctx, 31, 0x30D2FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D2F4u, 0x30D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2FCu;
label_30d2fc:
    // 0x30d2fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d304: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D304u;
    SET_GPR_U32(ctx, 31, 0x30D30Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D304u, 0x30D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D30Cu;
label_30d30c:
    // 0x30d30c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d310: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D310u;
    SET_GPR_U32(ctx, 31, 0x30D318u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D310u, 0x30D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D318u;
label_30d318:
    // 0x30d318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d31c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d320: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D320u;
    {
        const bool branch_taken_0x30d320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d320) {
            ctx->pc = 0x30D358u;
            return;
        }
    }
    ctx->pc = 0x30D328u;
    // 0x30d328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d338: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d33c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d34c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30d358u;
}
