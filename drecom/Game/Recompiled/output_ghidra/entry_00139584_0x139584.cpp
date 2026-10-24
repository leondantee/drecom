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

// Function: entry_00139584
// Address: 0x139584 - 0x1395f8
void entry_00139584_0x139584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139584_0x139584");
#endif

    switch (ctx->pc) {
        case 0x139594u: goto label_139594;
        case 0x1395a4u: goto label_1395a4;
        case 0x1395b0u: goto label_1395b0;
        default: break;
    }

    ctx->pc = 0x139584u;

    // 0x139584: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13958c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13958Cu;
    SET_GPR_U32(ctx, 31, 0x139594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13958Cu, 0x139594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139594u;
label_139594:
    // 0x139594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13959c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13959Cu;
    SET_GPR_U32(ctx, 31, 0x1395A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13959Cu, 0x1395A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395A4u;
label_1395a4:
    // 0x1395a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395a8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1395A8u;
    SET_GPR_U32(ctx, 31, 0x1395B0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1395A8u, 0x1395B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395B0u;
label_1395b0:
    // 0x1395b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1395b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1395b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1395B8u;
    {
        const bool branch_taken_0x1395b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395b8) {
            ctx->pc = 0x1395F8u;
            return;
        }
    }
    ctx->pc = 0x1395C0u;
    // 0x1395c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1395c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1395c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1395c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1395cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1395ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1395d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1395d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1395d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1395dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1395e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1395ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1395f0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1395F0u;
    {
        const bool branch_taken_0x1395f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395f0) {
            ctx->pc = 0x1395F8u;
            return;
        }
    }
    ctx->pc = 0x1395F8u;
}
