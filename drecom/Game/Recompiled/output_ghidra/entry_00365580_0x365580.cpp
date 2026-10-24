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

// Function: entry_00365580
// Address: 0x365580 - 0x3655f8
void entry_00365580_0x365580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365580_0x365580");
#endif

    switch (ctx->pc) {
        case 0x365590u: goto label_365590;
        case 0x36559cu: goto label_36559c;
        case 0x3655acu: goto label_3655ac;
        case 0x3655b8u: goto label_3655b8;
        default: break;
    }

    ctx->pc = 0x365580u;

    // 0x365580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365588u;
    SET_GPR_U32(ctx, 31, 0x365590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365588u, 0x365590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365590u;
label_365590:
    // 0x365590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365594u;
    SET_GPR_U32(ctx, 31, 0x36559Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365594u, 0x36559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36559Cu;
label_36559c:
    // 0x36559c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3655a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3655a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3655A4u;
    SET_GPR_U32(ctx, 31, 0x3655ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3655A4u, 0x3655ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3655ACu;
label_3655ac:
    // 0x3655ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3655acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655b0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3655B0u;
    SET_GPR_U32(ctx, 31, 0x3655B8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3655B0u, 0x3655B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3655B8u;
label_3655b8:
    // 0x3655b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3655bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3655c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3655C0u;
    {
        const bool branch_taken_0x3655c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3655c0) {
            ctx->pc = 0x3655F8u;
            return;
        }
    }
    ctx->pc = 0x3655C8u;
    // 0x3655c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3655c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3655cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3655d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3655d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3655d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3655d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3655dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3655e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3655e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3655e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3655ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3655f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3655f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3655f8u;
}
